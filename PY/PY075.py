# 75. Program to implement Banking System using inheritance

import os
import random
import pickle

class Bank:
    def __init__(self, ifsc="", branch="", b_address=""):
        self.ifsc = ifsc
        self.branch = branch
        self.b_address = b_address

class Customer(Bank):
    def __init__(self, c_name="", dob="", gender="", email="", c_address="", pan_no="", username="", password="", aadhaar_no=0, mob_no=0):
        super().__init__()
        self.c_name = c_name
        self.dob = dob
        self.gender = gender
        self.email = email
        self.c_address = c_address
        self.pan_no = pan_no
        self.username = username
        self.password = password
        self.aadhaar_no = aadhaar_no
        self.mob_no = mob_no

class Account(Customer):
    def __init__(self):
        super().__init__()
        self.balance = 0.0
        self.account_no = 0
        self.type = ""

    def open_account(self):
        self.account_no = self.generate_account_no()
        print("\nOpen Account:\n")
        self.c_name = input("Enter Name: ")
        self.dob = input("Enter Date of Birth (Ex: 01-01-2001): ")
        self.gender = input("Enter Gender (Male/Female): ")
        self.mob_no = int(input("Enter Mobile No. (9876543210): "))
        self.email = input("Enter Email (example@example.com): ")
        self.c_address = input("Enter Address: ")
        self.aadhaar_no = int(input("Enter Aadhaar No.: "))
        self.pan_no = input("Enter PAN No.: ")
        self.type = input("Enter Type of Account (Current/Savings): ")
        self.branch = input("Enter Branch Name: ")
        self.b_address = input("Enter Branch's Address: ")
        self.ifsc = input("Enter IFSC Code: ")
        self.balance = float(input("Enter Initial Deposit Amount: "))
        
        while True:
            self.username = input("Enter Username: ")
            if not self.check_username(self.username):
                break
            else:
                print("\nUsername Already Exists!\n")
        
        self.password = input("Enter Password: ")
        print(f"\nAccount No. {self.account_no} Opened Successfully!")
        return self.account_no

    def show_account_details(self):
        print("\nShow Account Details:\n")
        print(f"Name:                                    {self.c_name}")
        print(f"Date of Birth:                           {self.dob}")
        print(f"Gender:                                  {self.gender}")
        print(f"Mobile No.:                              {self.mob_no}")
        print(f"Email:                                   {self.email}")
        print(f"Aadhaar No.:                             {self.aadhaar_no}")
        print(f"PAN No.:                                 {self.pan_no}")
        print(f"Address:                                 {self.c_address}")
        print(f"Account No.:                             {self.account_no}")
        print(f"Account Type:                            {self.type}")
        print(f"Branch Name:                             {self.branch}")
        print(f"Branch Address:                          {self.b_address}")
        print(f"IFSC Code:                               {self.ifsc}")
        print(f"Balance:                                 {self.balance}")

    def deposit(self, amount):
        self.balance += amount

    def withdraw(self, amount):
        self.balance -= amount

    @staticmethod
    def generate_account_no():
        accounts_dir = "Accounts/"
        file_list = os.listdir(accounts_dir) if os.path.exists(accounts_dir) else []
        while True:
            acc_no = random.randint(100000000, 999999999)
            if not any(f.split('-')[0] == str(acc_no) for f in file_list):
                return acc_no

    @staticmethod
    def check_username(username):
        accounts_dir = "Accounts/"
        file_list = os.listdir(accounts_dir) if os.path.exists(accounts_dir) else []
        return any(f.split('-')[1] == username for f in file_list)

class BankingSystem:
    def __init__(self):
        self.save_acc = Account()
        self.fetch_acc = Account()

    def main_menu(self):
        while True:
            print("\nMain Menu:\n")
            print("1. Open New Account")
            print("2. Banking")
            print("3. Exit")
            choice = int(input("\nEnter your Choice: "))
            if choice == 1:
                self.open_account()
            elif choice == 2:
                self.login()
            elif choice == 3:
                exit()
            else:
                print("Invalid Option!")

    def open_account(self):
        acc_no = self.save_acc.open_account()
        accounts_dir = "Accounts/"
        if not os.path.exists(accounts_dir):
            os.makedirs(accounts_dir)
        with open(f"{accounts_dir}{acc_no}-{self.save_acc.username}", "wb") as f:
            pickle.dump(self.save_acc, f)

    def login(self):
        uname = input("\nUsername: ")
        pword = input("Password: ")
        if self.check_credential(uname, pword):
            self.banking_menu()
        else:
            print("\nInvalid Credentials!")

    def check_credential(self, uname, pword):
        accounts_dir = "Accounts/"
        file_list = os.listdir(accounts_dir) if os.path.exists(accounts_dir) else []
        for file_name in file_list:
            if file_name.split('-')[1] == uname:
                with open(f"{accounts_dir}{file_name}", "rb") as f:
                    self.fetch_acc = pickle.load(f)
                    return pword == self.fetch_acc.password
        return False

    def banking_menu(self):
        while True:
            print(f"\nHi, {self.fetch_acc.c_name}!\n")
            print("1. Check Balance")
            print("2. Deposit")
            print("3. Withdraw")
            print("4. Show Account")
            print("5. Close Account")
            print("6. Back")
            choice = int(input("\nEnter your Choice: "))
            if choice == 1:
                print(f"\nAvailable Balance: {self.fetch_acc.balance}")
            elif choice == 2:
                self.update_balance(1)
            elif choice == 3:
                self.update_balance(2)
            elif choice == 4:
                self.fetch_acc.show_account_details()
            elif choice == 5:
                self.close_account()
                return
            elif choice == 6:
                return
            else:
                print("\nInvalid Option!")

    def update_balance(self, option):
        accounts_dir = "Accounts/"
        amount = int(input("\nEnter amount: "))
        if option == 1:
            self.fetch_acc.deposit(amount)
            print(f"\nRs. {amount} Deposited Successfully!")
            print(f"\nAvailable Balance: {self.fetch_acc.balance}")
        elif option == 2:
            if self.fetch_acc.balance - amount < 0:
                print("\nInsufficient Balance!")
            else:
                self.fetch_acc.withdraw(amount)
                print(f"\nRs. {amount} Withdrawn Successfully!")
                print(f"\nAvailable Balance: {self.fetch_acc.balance}")
        
        with open(f"{accounts_dir}{self.fetch_acc.account_no}-{self.fetch_acc.username}", "wb") as f:
            pickle.dump(self.fetch_acc, f)

    def close_account(self):
        accounts_dir = "Accounts/"
        file_path = f"{accounts_dir}{self.fetch_acc.account_no}-{self.fetch_acc.username}"
        if os.path.exists(file_path):
            os.remove(file_path)
            print("\nAccount Closed!")
        else:
            print("\nUnable to Process your Request!")

BankingSystem().main_menu()