/* 75. Program to implement Banking System using inheritance */

#include <iostream>
#include <iomanip>
#include <cstring>
#include <fstream>
#include <conio.h>
#define MIN 100000000
#define MAX 999999999
using namespace std;

void openAccount();
unsigned long int generateAccountNo();
bool checkUsername(char[]);
void login();
string inputPassword();
bool checkCredential(char[], char[]);
void banking();
void updateBalance(int);
void closeAccount();

class Bank
{
protected:
    char ifsc[20], branch[20], bAddress[50];
};

class Customer : public Bank
{
protected:
    char cName[20], dob[20], gender[20], email[30], cAddress[50], panNo[20], username[20], password[20];
    unsigned long long int aadhaarNo, mobNo;
};

class Account : public Customer
{
private:
    float balance;
    char type[20];
    unsigned long int accountNo;

public:
    void openAccount(unsigned long int);
    void showAccountDetails();
    void deposit(int);
    void withdraw(int);
    unsigned long int getAccountNo();
    char *getCName();
    char *getUsername();
    char *getPassword();
    double getBalance();
};

void Account::openAccount(unsigned long int accountNo)
{
    this->accountNo = accountNo;
    cout << endl;
    cout << "Open Account:-" << endl;
    cout << endl;
    cout << "Enter Name: ";
    cin.sync();
    cin.getline(cName, 20);
    cout << endl;
    cout << "Enter Date of Birth (Ex: 01-01-2001): ";
    cin.sync();
    cin.getline(dob, 20);
    cout << endl;
    cout << "Enter Gender (Male/Female): ";
    cin.sync();
    cin.getline(gender, 20);
    cout << endl;
    cout << "Enter Mobile No. (9876543210): ";
    cin >> mobNo;
    cout << endl;
    cout << "Enter Email (example@example.com): ";
    cin.sync();
    cin.getline(email, 30);
    cout << endl;
    cout << "Enter Address: ";
    cin.sync();
    cin.getline(cAddress, 50);
    cout << endl;
    cout << "Enter Aadhaar No.: ";
    cin >> aadhaarNo;
    cout << endl;
    cout << "Enter PAN No.: ";
    cin.sync();
    cin.getline(panNo, 20);
    cout << endl;
    cout << "Enter Type of Account (Current/Savings): ";
    cin.sync();
    cin.getline(type, 20);
    cout << endl;
    cout << "Enter Branch Name: ";
    cin.sync();
    cin.getline(branch, 20);
    cout << endl;
    cout << "Enter Branch's Address: ";
    cin.sync();
    cin.getline(bAddress, 50);
    cout << endl;
    cout << "Enter IFSC Code: ";
    cin.sync();
    cin.getline(ifsc, 20);
    cout << endl;
    cout << "Enter Initial Deposit Amount: ";
    cin >> balance;
    while (true)
    {
        cout << endl;
        cout << "Enter Username: ";
        cin.sync();
        cin.getline(username, 20);
        if (checkUsername(username))
        {
            break;
        }
        else
        {
            cout << endl;
            cout << "Username Already Exists!" << endl;
        }
    }
    cout << endl;
    cout << "Enter Password: ";
    strcpy(password, inputPassword().c_str());
    cout << endl;
    cout << "Account No. " << accountNo << " Opened Successfully!";
    cout << endl;
}

void Account::showAccountDetails()
{
    cout << endl;
    cout << "Show Account Details:-" << endl;
    cout << endl;
    cout << "Name:                                    " << cName << endl;
    cout << "Date of Birth:                           " << dob << endl;
    cout << "Gender:                                  " << gender << endl;
    cout << "Mobile No.:                              " << mobNo << endl;
    cout << "Email:                                   " << email << endl;
    cout << "Aadhaar No.:                             " << aadhaarNo << endl;
    cout << "PAN No.:                                 " << panNo << endl;
    cout << "Address:                                 " << cAddress << endl;
    cout << "Account No.:                             " << accountNo << endl;
    cout << "Account Type:                            " << type << endl;
    cout << "Branch Name:                             " << branch << endl;
    cout << "Branch Address:                          " << bAddress << endl;
    cout << "IFSC Code:                               " << ifsc << endl;
    cout << "Balance:                                 " << balance << fixed << setprecision(2) << endl;
}

void Account::deposit(int amount)
{
    balance += amount;
}

void Account::withdraw(int amount)
{
    balance -= amount;
}

unsigned long int Account::getAccountNo()
{
    return accountNo;
}

char *Account::getCName()
{
    return cName;
}

char *Account::getUsername()
{
    return username;
}

char *Account::getPassword()
{
    return password;
}

double Account::getBalance()
{
    return balance;
}

Account saveAcc, fetchAcc;

int main()
{
    int choice;
    cout << endl;
    cout << "BANKING SYSTEM" << endl;
    while (true)
    {
        cout << endl;
        cout << "Main Menu:-" << endl;
        cout << endl;
        cout << "1. Open New Account" << endl;
        cout << "2. Banking" << endl;
        cout << "3. Exit" << endl;
        cout << endl;
        cout << "Enter your Choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            openAccount();
            break;
        case 2:
            login();
            break;
        case 3:
            exit(0);
        default:
            cout << endl;
            cout << "Invalid Option!" << endl;
        }
    }
}

void openAccount()
{
    unsigned long int accNo;
    ofstream fout;
    fout.open("accounts.bin", ios::binary | ios::app);
    accNo = generateAccountNo();
    saveAcc.openAccount(accNo);
    fout.write((char *)&saveAcc, sizeof(Account));
    fout.close();
}

unsigned long int generateAccountNo()
{
    bool flag = false;
    unsigned long int accNo;
    ifstream fin;
    fin.open("accounts.bin", ios::binary);
    srand(time(0));
    while (true)
    {
        accNo = (rand() % (MAX + 1 - MIN)) + MIN;
        if (!fin)
        {
            return accNo;
        }
        while (fin.read((char *)&fetchAcc, sizeof(Account)))
        {
            if (fetchAcc.getAccountNo() == accNo)
            {
                flag = true;
                break;
            }
        }
        if (flag == false)
        {
            return accNo;
        }
    }
    fin.close();
    return accNo;
}

bool checkUsername(char uname[])
{
    bool found = true;
    ifstream fin;
    fin.open("accounts.bin", ios::binary);
    if (!fin)
    {
        return found;
    }
    while (fin.read((char *)&fetchAcc, sizeof(Account)))
    {
        if (strcmp(fetchAcc.getUsername(), uname) == 0)
        {
            found = false;
            break;
        }
    }
    fin.close();
    return found;
}

void login()
{
    char uname[20], pword[20];
    while (true)
    {
        cout << endl;
        cout << "Login:-" << endl;
        cout << endl;
        cout << "Username: ";
        cin >> uname;
        cout << endl;
        cout << "Password: ";
        strcpy(pword, inputPassword().c_str());
        if (checkCredential(uname, pword))
        {
            banking();
            return;
        }
        else
        {
            cout << endl;
            cout << "Invalid Credentials!" << endl;
            return;
        }
    }
}

string inputPassword()
{
    int i = 0;
    char c;
    string pwd;
    do
    {
        c = getch();
        if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122) && i <= 10)
        {
            cout << "*";
            pwd.push_back(c);
            i++;
        }
        else if (c == 8 && i > 0)
        {
            cout << "\b \b";
            pwd.pop_back();
            i--;
        }
        else if (c == 13)
        {
            cout << endl;
            return pwd;
        }
    } while (true);
}

bool checkCredential(char uname[], char pword[])
{
    bool found = false;
    ifstream fin;
    fin.open("accounts.bin", ios::binary);
    if (!fin)
    {
        return found;
    }
    while (fin.read((char *)&fetchAcc, sizeof(Account)))
    {
        if (strcmp(fetchAcc.getUsername(), uname) == 0 && strcmp(fetchAcc.getPassword(), pword) == 0)
        {
            found = true;
            break;
        }
    }
    fin.close();
    return found;
}

void banking()
{
    int amount, choice;
    unsigned long int accNo;
    while (true)
    {
        cout << endl;
        cout << "Hi, " << fetchAcc.getCName() << "!" << endl;
        cout << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Show Account" << endl;
        cout << "5. Close Account" << endl;
        cout << "6. Back" << endl;
        cout << endl;
        cout << "Enter your Choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << endl;
            cout << "Available Balance: " << fetchAcc.getBalance() << endl;
            break;
        case 2:
            updateBalance(1);
            break;
        case 3:
            updateBalance(2);
            break;
        case 4:
            fetchAcc.showAccountDetails();
            break;
        case 5:
            closeAccount();
            return;
        case 6:
            return;
        default:
            cout << endl;
            cout << "Invalid Option!" << endl;
        }
    }
}

void updateBalance(int option)
{
    int amount;
    unsigned long int accNo = fetchAcc.getAccountNo();
    fstream file;
    file.open("accounts.bin", ios::binary | ios::in | ios::out);
    if (!file)
    {
        cout << endl;
        cout << "Unable to Process your Request!" << endl;
        return;
    }
    while (file.read((char *)&fetchAcc, sizeof(Account)))
    {
        if (fetchAcc.getAccountNo() == accNo)
        {
            if (option == 1)
            {
                cout << endl;
                cout << "Enter a amount to deposit: ";
                cin >> amount;
                fetchAcc.deposit(amount);
                int pos = (-1) * (int)(sizeof(Account));
                file.seekp(pos, ios::cur);
                file.write((char *)&fetchAcc, sizeof(Account));
                cout << endl;
                cout << "Rs. " << amount << " Deposited Successfully!" << endl;
                cout << endl;
                cout << "Available Balance: " << fetchAcc.getBalance() << endl;
            }
            else if (option == 2)
            {
                cout << endl;
                cout << "Enter a amount to withdraw: ";
                cin >> amount;
                int bal = fetchAcc.getBalance() - amount;
                if ((fetchAcc.getBalance() - amount) < 0)
                {
                    cout << endl;
                    cout << "Insufficient Balance!" << endl;
                }
                else
                {
                    fetchAcc.withdraw(amount);
                    int pos = (-1) * (int)(sizeof(Account));
                    file.seekp(pos, ios::cur);
                    file.write((char *)&fetchAcc, sizeof(Account));
                    cout << endl;
                    cout << "Rs. " << amount << " Withdrawn Successfully!" << endl;
                    cout << endl;
                    cout << "Available Balance: " << fetchAcc.getBalance() << endl;
                }
            }
        }
    }
    file.close();
}

void closeAccount()
{
    bool found = false;
    unsigned long int accNo = fetchAcc.getAccountNo();
    ifstream fin;
    ofstream fout;
    fin.open("accounts.bin", ios::binary);
    if (!fin)
    {
        cout << endl;
        cout << "Unable to Process your Request!" << endl;
        return;
    }
    fout.open("temp.bin", ios::binary);
    fin.seekg(0, ios::beg);
    while (fin.read((char *)&fetchAcc, sizeof(Account)))
    {
        if (fetchAcc.getAccountNo() != accNo)
        {
            fout.write((char *)&fetchAcc, sizeof(Account));
        }
        else
        {
            found = true;
        }
    }
    fin.close();
    fout.close();
    remove("accounts.bin");
    rename("temp.bin", "accounts.bin");
    if (found == true)
    {
        cout << endl;
        cout << "Account Closed!" << endl;
    }
}