/* 120. Program to implement Banking System using inheritance */

#include <iostream>
#include <iomanip>
#include <cstring>
#include <fstream>
#include <conio.h>
using namespace std;

void banking();
void createAcc();
void retrieveAcc(unsigned long int);
void updateAcc(unsigned long int, int);
void deleteAcc(unsigned long int);
void checkBal(unsigned long int);

class Bank
{
protected:
    char ifsc[20], branch[20], bAddress[50];
};

class Customer : public Bank
{
protected:
    char cName[20], dob[20], gender[20], email[30], cAddress[50];
    unsigned long long int aadhaarNo, mobNo;
};

class Account : public Customer
{
private:
    char type;
    float balance;
    unsigned long int accountNo;

public:
    void openAccount();
    void showAccount();
    void deposit(int);
    void withdraw(int);
    unsigned long int getAccountNo();
    double getBalance();
};

void Account::openAccount()
{
    system("cls");
    cout << "#################### | OPEN ACCOUNT | ####################" << endl
         << endl;
    cout << "Enter Account holder's name: ";
    cin.sync();
    cin.getline(cName, 20);
    cout << "Enter Account holder's Date of Birth (Ex: 01-01-2001): ";
    cin.sync();
    cin.getline(dob, 20);
    cout << "Enter Account holder's Gender: ";
    cin.sync();
    cin.getline(gender, 20);
    cout << "Enter Account holder's Mobile No.: ";
    cin >> mobNo;
    cout << "Enter Account holder's Email: ";
    cin.sync();
    cin.getline(email, 30);
    cout << "Enter Account holder's Address: ";
    cin.sync();
    cin.getline(cAddress, 50);
    cout << "Enter Account holder's Aadhaar No.: ";
    cin >> aadhaarNo;
    cout << "Enter Account No.: ";
    cin >> accountNo;
    cout << "Enter type of the Account (C/S): ";
    cin >> type;
    type = toupper(type);
    cout << "Enter Branch Name: ";
    cin.sync();
    cin.getline(branch, 20);
    cout << "Enter Branch's Address: ";
    cin.sync();
    cin.getline(bAddress, 50);
    cout << "Enter Branch IFSC Code: ";
    cin.sync();
    cin.getline(ifsc, 20);
    cout << "Enter the initial deposit amount: ";
    cin >> balance;
    cout << "\nAccount Successfully Opened!";
    cin.sync();
    cin.get();
}

void Account::showAccount()
{
    system("cls");
    cout << "#################### | SHOW ACCOUNT | ####################" << endl
         << endl;
    cout << "Name:                                    " << cName << endl;
    cout << "Date of Birth:                           " << dob << endl;
    cout << "Gender:                                  " << gender << endl;
    cout << "Mobile No.:                              " << mobNo << endl;
    cout << "Email:                                   " << email << endl;
    cout << "Aadhaar No.:                             " << aadhaarNo << endl;
    cout << "Address:                                 " << cAddress << endl;
    cout << "Account No.:                             " << accountNo << endl;
    cout << "Account Type:                            " << type << endl;
    cout << "Branch Name:                             " << branch << endl;
    cout << "Branch Address:                          " << bAddress << endl;
    cout << "IFSC Code:                               " << ifsc << endl;
    cout << "Balance:                                 " << balance << std::fixed << std::setprecision(2) << endl;
    cout << endl;
    cout << "Press Any Key To Exit...";
    cin.sync();
    cin.get();
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

double Account::getBalance()
{
    return balance;
}

Account acc;

int main()
{
    int choice;
    while (1)
    {
        system("cls");
        cout << "#################### | BANKING SYSTEM | ####################" << endl
             << endl;
        cout << "Menu:-" << endl
             << endl;
        cout << "1. Open New Account" << endl;
        cout << "2. Banking" << endl;
        cout << "3. Exit" << endl;
        cout << endl
             << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            createAcc();
            break;
        case 2:
            banking();
            break;
        case 3:
            exit(0);
        default:
            cout << "\nInvalid Option!";
            cin.sync();
            cin.get();
        }
    }
}

void banking()
{
    int choice;
    unsigned long int accNo;
    while (1)
    {
        system("cls");
        cout << "#################### | BANKING SYSTEM | ####################" << endl
             << endl;
        cout << "Menu:-" << endl
             << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Show Account" << endl;
        cout << "5. Close Account" << endl;
        cout << "6. Back" << endl;
        cout << endl
             << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter Account No.: ";
            cin >> accNo;
            checkBal(accNo);
            break;
        case 2:
            cout << "Enter Account No.: ";
            cin >> accNo;
            updateAcc(accNo, 1);
            break;
        case 3:
            cout << "Enter Account No.: ";
            cin >> accNo;
            updateAcc(accNo, 2);
            break;
        case 4:
            cout << "Enter Account No.: ";
            cin >> accNo;
            retrieveAcc(accNo);
            break;
        case 5:
            cout << "Enter Account No.: ";
            cin >> accNo;
            deleteAcc(accNo);
            break;
        case 6:
            return;
        default:
            cout << "\nInvalid Option!";
            cin.sync();
            cin.get();
        }
    }
}

void createAcc()
{
    ofstream fout;
    fout.open("accounts.bin", ios::binary | ios::app);
    acc.openAccount();
    fout.write((char *)&acc, sizeof(Account));
    fout.close();
}

void retrieveAcc(unsigned long int accNo)
{
    bool found = false;
    ifstream fin;
    fin.open("accounts.bin", ios::binary);
    if (!fin)
    {
        cout << "File not found! Press any key to exit...";
        cin.sync();
        cin.get();
        exit(0);
    }
    while (fin.read((char *)&acc, sizeof(Account)))
    {
        if (acc.getAccountNo() == accNo)
        {
            acc.showAccount();
            found = true;
            break;
        }
    }
    fin.close();
    if (found == false)
    {
        cout << "Innvalid Account No.!";
        cin.sync();
        cin.get();
    }
}

void updateAcc(unsigned long int accNo, int option)
{
    int amount;
    bool found = false;
    fstream file;
    file.open("accounts.bin", ios::binary | ios::in | ios::out);
    if (!file)
    {
        cout << "File not found! Press any key to exit...";
        cin.sync();
        cin.get();
        exit(0);
    }
    while (file.read((char *)&acc, sizeof(Account)) && found == false)
    {
        if (acc.getAccountNo() == accNo)
        {
            if (option == 1)
            {
                cout << "Enter a amount to deposit: ";
                cin >> amount;
                acc.deposit(amount);
                int pos = (-1) * (int)(sizeof(Account));
                file.seekp(pos, ios::cur);
                file.write((char *)&acc, sizeof(Account));
                cout << "Rs. " << amount << " Deposited!";
                cin.sync();
                cin.get();
            }
            else if (option == 2)
            {
                cout << "Enter a amount to withdraw: ";
                cin >> amount;
                int bal = acc.getBalance() - amount;
                if ((acc.getBalance() - amount) < 0)
                {
                    cout << "Insufficient balance!";
                }
                else
                {
                    acc.withdraw(amount);
                    int pos = (-1) * (int)(sizeof(Account));
                    file.seekp(pos, ios::cur);
                    file.write((char *)&acc, sizeof(Account));
                    cout << "Rs. " << amount << " Withdrawn!";
                    cin.sync();
                    cin.get();
                }
            }
            found = true;
        }
    }
    file.close();
    if (found == false)
    {
        cout << "Innvalid Account No.!";
        cin.sync();
        cin.get();
    }
}

void deleteAcc(unsigned long int accNo)
{
    bool found = false;
    ifstream fin;
    ofstream fout;
    fin.open("accounts.bin", ios::binary);
    if (!fin)
    {
        cout << "File not found! Press any key to exit...";
        cin.sync();
        cin.get();
        exit(0);
    }
    fout.open("temp.bin", ios::binary);
    fin.seekg(0, ios::beg);
    while (fin.read((char *)&acc, sizeof(Account)))
    {
        if (acc.getAccountNo() != accNo)
        {
            fout.write((char *)&acc, sizeof(Account));
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
        cout << "Account Closed!";
        cin.sync();
        cin.get();
    }
    else
    {
        cout << "Innvalid Account No.!";
        cin.sync();
        cin.get();
    }
}

void checkBal(unsigned long int accNo)
{
    bool found = false;
    ifstream fin;
    fin.open("accounts.bin", ios::binary);
    if (!fin)
    {
        cout << "File not found! Press any key to exit...";
        cin.sync();
        cin.get();
        exit(0);
    }
    while (fin.read((char *)&acc, sizeof(Account)))
    {
        if (acc.getAccountNo() == accNo)
        {
            cout << "Available Balance: " << acc.getBalance();
            cin.sync();
            cin.get();
            found = true;
        }
    }
    fin.close();
    if (found == false)
    {
        cout << "Innvalid Account No.!";
        cin.sync();
        cin.get();
    }
}