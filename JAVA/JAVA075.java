/* 75. Program to implement Banking System using inheritance */

import static java.lang.Math.random;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.io.Serializable;
import java.util.Scanner;

class Bank implements Serializable {
    public static final String newline = System.lineSeparator();
    protected String ifsc, branch, bAddress;
}

class Customer extends Bank {
    protected String cName, dob, gender, email, cAddress, panNo, username, password;
    protected long aadhaarNo, mobNo;
};

class Account extends Customer {
    private static final int MAX = 100000000;
    private static final int MIN = 999999999;
    private double balance;
    private String type;
    long accountNo;

    public long openAccount(Scanner sc) {
        accountNo = generateAccountNo();
        System.out.println(newline + "Open Account:-" + newline);
        System.out.print("Enter Name: ");
        sc.nextLine();
        cName = sc.nextLine();
        System.out.print("Enter Date of Birth (Ex: 01-01-2001): ");
        dob = sc.next();
        System.out.print("Enter Gender (Male/Female): ");
        gender = sc.next();
        System.out.print("Enter Mobile No. (9876543210): ");
        mobNo = sc.nextLong();
        System.out.print("Enter Email (example@example.com): ");
        email = sc.next();
        System.out.print("Enter Address: ");
        sc.nextLine();
        cAddress = sc.nextLine();
        System.out.print("Enter Aadhaar No.: ");
        aadhaarNo = sc.nextLong();
        System.out.print("Enter PAN No.: ");
        panNo = sc.next();
        System.out.print("Enter Type of Account (Current/Savings): ");
        type = sc.next();
        System.out.print("Enter Branch Name: ");
        sc.nextLine();
        branch = sc.nextLine();
        System.out.print("Enter Branch's Address: ");
        bAddress = sc.nextLine();
        System.out.print("Enter IFSC Code: ");
        ifsc = sc.next();
        System.out.print("Enter Initial Deposit Amount: ");
        balance = sc.nextDouble();
        while (true) {
            System.out.print("Enter Username: ");
            username = sc.next();
            if (!checkUsername(username)) {
                break;
            } else {
                System.out.println(newline + "Username Already Exists!" + newline);
            }
        }
        System.out.print("Enter Password: ");
        password = sc.next();
        System.out.println(newline + "Account No. " + accountNo + " Opened Successfully!");
        return accountNo;
    }

    public void showAccountDetails() {
        System.out.println(newline + "Show Account Details:-" + newline);
        System.out.println("Name:                                    " + cName);
        System.out.println("Date of Birth:                           " + dob);
        System.out.println("Gender:                                  " + gender);
        System.out.println("Mobile No.:                              " + mobNo);
        System.out.println("Email:                                   " + email);
        System.out.println("Aadhaar No.:                             " + aadhaarNo);
        System.out.println("PAN No.:                                 " + panNo);
        System.out.println("Address:                                 " + cAddress);
        System.out.println("Account No.:                             " + accountNo);
        System.out.println("Account Type:                            " + type);
        System.out.println("Branch Name:                             " + branch);
        System.out.println("Branch Address:                          " + bAddress);
        System.out.println("IFSC Code:                               " + ifsc);
        System.out.println("Balance:                                 " + balance);
    }

    public void deposit(int amount) {
        balance += amount;
    }

    public void withdraw(int amount) {
        balance -= amount;
    }

    public static long generateAccountNo() {
        File directory = new File("Accounts/");
        String[] fileList = directory.list();
        while (true) {
            boolean flag = false;
            long accNo = (long) (random() * (MAX - MIN + 1) + MIN);
            if (fileList == null) {
                return accNo;
            } else {
                for (int i = 0; i < fileList.length; i++) {
                    String[] values = fileList[i].split("-");
                    if (values[0].equalsIgnoreCase(String.valueOf(accNo))) {
                        flag = true;
                        break;
                    }
                }
                if (flag == false) {
                    return accNo;
                }
            }
        }
    }

    public static boolean checkUsername(String uname) {
        boolean found = false;
        File directory = new File("Accounts/");
        String[] fileList = directory.list();
        if (fileList == null) {
            return found;
        } else {
            for (int i = 0; i < fileList.length; i++) {
                String[] values = fileList[i].split("-");
                if (values[1].equalsIgnoreCase(uname)) {
                    found = true;
                    break;
                }
            }
        }
        return found;
    }

    public long getAccountNo() {
        return accountNo;
    }

    public String getCName() {
        return cName;
    }

    public String getUsername() {
        return username;
    }

    public String getPassword() {
        return password;
    }

    public double getBalance() {
        return balance;
    }
}

public class JAVA075 {
    private static Account saveAcc = new Account();
    private static Account fetchAcc = new Account();

    public static void main(String[] args) {
        int choice;
        Scanner sc = new Scanner(System.in);
        while (true) {
            System.out.println(Account.newline + "Main Menu:-" + Account.newline);
            System.out.println("1. Open New Account");
            System.out.println("2. Banking");
            System.out.println("3. Exit");
            System.out.print(Account.newline + "Enter your Choice: ");
            choice = sc.nextInt();
            switch (choice) {
                case 1:
                    openAccount(sc);
                    break;
                case 2:
                    login(sc);
                    break;
                case 3:
                    sc.close();
                    System.exit(0);
                default:
                    System.out.println("Invalid Option!");
            }
        }
    }

    public static void openAccount(Scanner sc) {
        long accNo = saveAcc.openAccount(sc);
        String path = "Accounts/" + accNo + "-" + saveAcc.getUsername();
        try {
            File directory = new File("Accounts/");
            directory.mkdir();
            File file = new File(path);
            file.createNewFile();
            FileOutputStream fileOutputStream = new FileOutputStream(path);
            ObjectOutputStream objectOutputStream = new ObjectOutputStream(fileOutputStream);
            objectOutputStream.writeObject(saveAcc);
            objectOutputStream.close();
            fileOutputStream.close();
        } catch (Exception e) {
            System.out.println(Account.newline + e.getMessage());
        }
    }

    public static void login(Scanner sc) {
        String uname, pword;
        while (true) {
            System.out.println(Account.newline + "Login:-" + Account.newline);
            System.out.print("Username: ");
            uname = sc.next();
            System.out.print("Password: ");
            pword = sc.next();
            if (checkCredential(uname, pword)) {
                banking(sc);
                return;
            } else {
                System.out.println(Account.newline + "Invalid Credentials!");
                return;
            }
        }
    }

    public static boolean checkCredential(String uname, String pword) {
        boolean found = false;
        File directory = new File("Accounts/");
        String[] fileList = directory.list();
        if (fileList == null) {
            return found;
        } else {
            for (int i = 0; i < fileList.length; i++) {
                String[] values = fileList[i].split("-");
                if (values[1].equals(uname)) {
                    String path = "Accounts/" + fileList[i];
                    try {
                        FileInputStream fileInputStream = new FileInputStream(path);
                        ObjectInputStream objectInputStream = new ObjectInputStream(fileInputStream);
                        fetchAcc = (Account) objectInputStream.readObject();
                        objectInputStream.close();
                        fileInputStream.close();
                        if(pword.equals(fetchAcc.getPassword())){
                            found = true;
                        }
                    } catch (Exception e) {
                        System.out.println(Account.newline + e.getMessage());
                    }
                    break;
                }
            }
        }
        return found;
    }

    public static void banking(Scanner sc) {
        int choice;
        while (true) {
            System.out.println(Account.newline + "Hi, " + fetchAcc.getCName() + "!" + Account.newline);
            System.out.println("1. Check Balance");
            System.out.println("2. Deposit");
            System.out.println("3. Withdraw");
            System.out.println("4. Show Account");
            System.out.println("5. Close Account");
            System.out.println("6. Back");
            System.out.print(Account.newline + "Enter your Choice: ");
            choice = sc.nextInt();
            switch (choice) {
                case 1:
                    System.out.println(Account.newline + "Available Balance: " + fetchAcc.getBalance());
                    break;
                case 2:
                    updateBalance(sc, 1);
                    break;
                case 3:
                    updateBalance(sc, 2);
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
                    System.out.println(Account.newline + "Invalid Option!");
            }
        }
    }

    public static void updateBalance(Scanner sc, int option) {
        int amount;
        String path = "Accounts/" + fetchAcc.getAccountNo() + "-" + fetchAcc.getUsername();
        if (option == 1) {
            System.out.print(Account.newline + "Enter a amount to deposit: ");
            amount = sc.nextInt();
            fetchAcc.deposit(amount);
            System.out.println(Account.newline + "Rs. " + amount + " Deposited Successfully!");
            System.out.println(Account.newline + "Available Balance: " + fetchAcc.getBalance());
        } else if (option == 2) {
            System.out.print(Account.newline + "Enter a amount to withdraw: ");
            amount = sc.nextInt();
            if ((fetchAcc.getBalance() - amount) < 0) {
                System.out.println(Account.newline + "Insufficient Balance!");
            } else {
                fetchAcc.withdraw(amount);
                System.out.println(Account.newline + "Rs. " + amount + " Withdrawn Successfully!");
                System.out.println(Account.newline + "Available Balance: " + fetchAcc.getBalance());
            }
        }
        try {
            FileOutputStream fileOutputStream = new FileOutputStream(path);
            ObjectOutputStream objectOutputStream = new ObjectOutputStream(fileOutputStream);
            objectOutputStream.writeObject(fetchAcc);
            objectOutputStream.close();
            fileOutputStream.close();
        } catch (Exception e) {
            System.out.println(Account.newline + e.getMessage());
        }
    }

    public static void closeAccount() {
        String path = "Accounts/" + fetchAcc.getAccountNo() + "-" + fetchAcc.getUsername();
        File file = new File(path);
        if (file.delete()) {
            System.out.println(Account.newline + "Account Closed!");
        } else {
            System.out.println(Account.newline + "Unable to Process your Request!");
        }
    }
}