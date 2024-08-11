# 73. Program to implement a Student Information System using classes

class Student:
    def __init__(self, roll_no):
        self.roll_no = roll_no
        self.mob_no = None
        self.name = None
        self.gender = None
        self.email = None
        self.address = None

    def get_roll(self):
        return self.roll_no

    def add_record(self):
        self.name = input("Enter Student's Name: ")
        self.gender = input("Enter Student's Gender (Ex: Male/Female): ")
        self.email = input("Enter Student's Email (Ex: example@example.com): ")
        self.mob_no = input("Enter Student's Mobile No. (Ex: 9876543210): ")
        self.address = input("Enter Student's Address: ")

    def edit_record(self):
        while True:
            print("\nChoose your Option:\n")
            print(f"1) Name:            {self.name}")
            print(f"2) Gender:          {self.gender}")
            print(f"3) Email:           {self.email}")
            print(f"4) Mobile No.:      {self.mob_no}")
            print(f"5) Address:         {self.address}")
            print("6) Back")

            choice = int(input("\nEnter your choice: "))

            if choice == 1:
                self.name = input("\nEnter Student's Name: ")
                print("\nName Updated Successfully!")
            elif choice == 2:
                self.gender = input("\nEnter Student's Gender (Ex: Male/Female): ")
                print("\nGender Updated Successfully!")
            elif choice == 3:
                self.email = input("\nEnter Student's Email (Ex: example@example.com): ")
                print("\nEmail Updated Successfully!")
            elif choice == 4:
                self.mob_no = input("\nEnter Student's Mobile No. (Ex: 9876543210): ")
                print("\nMobile No. Updated Successfully!")
            elif choice == 5:
                self.address = input("\nEnter Student's Address: ")
                print("\nAddress Updated Successfully!")
            elif choice == 6:
                break
            else:
                print(f"\nInvalid Option!")

    def view_record(self, i=0):
        i = self.roll_no if i == 0 else i
        print(f"\nSTUDENT: {i}\n")
        print(f"Roll No.:        {self.roll_no}")
        print(f"Name:            {self.name}")
        print(f"Gender:          {self.gender}")
        print(f"Email:           {self.email}")
        print(f"Mobile No.:      {self.mob_no}")
        print(f"Address:         {self.address}")


class StudentSystem:
    UNAME = "admin"
    PWORD = "12345"

    def __init__(self):
        self.students = []
        self.menu()

    def menu(self):
        while True:
            uname = input("\nUSERNAME: ")
            pword = input("\nPASSWORD: ")

            if uname == self.UNAME and pword == self.PWORD:
                self.main_menu()
            else:
                print("\nInvalid Credentials!")

    def main_menu(self):
        while True:
            print("\nChoose your Option:\n")
            print("1) Add Record")
            print("2) Edit Record")
            print("3) Delete Record")
            print("4) View Record")
            print("5) View All Records")
            print("6) Exit")

            choice = int(input("\nEnter your choice: "))

            if choice == 1:
                self.add_record()
            elif choice == 2:
                self.edit_record()
            elif choice == 3:
                self.delete_record()
            elif choice == 4:
                self.view_record()
            elif choice == 5:
                self.view_all_records()
            elif choice == 6:
                exit()
            else:
                print("\nInvalid Option!")

    def add_record(self):
        while True:
            roll_no = int(input("\nEnter Student's Roll No.: "))
            if self.search_records(roll_no) is not None:
                print("\nRoll No. Already Exists!")
            else:
                student = Student(roll_no)
                student.add_record()
                self.students.append(student)
                print("\nRecord Added Successfully!")
                break

    def edit_record(self):
        roll_no = int(input("\nEnter Student's Roll No.: "))
        student = self.search_records(roll_no)
        if student:
            student.edit_record()
        else:
            print("\nNo Record Found!")

    def delete_record(self):
        roll_no = int(input("\nEnter Student's Roll No.: "))
        student = self.search_records(roll_no)
        if student:
            self.students.remove(student)
            print("\nRecord Deleted Successfully!")
        else:
            print("\nNo Record Found!")

    def view_record(self):
        roll_no = int(input("\nEnter Student's Roll No.: "))
        student = self.search_records(roll_no)
        if student:
            student.view_record()
        else:
            print("\nNo Record Found!")

    def view_all_records(self):
        if not self.students:
            print("\nNo Record Found!")
        for i, student in enumerate(self.students, start=1):
            student.view_record(i)

    def search_records(self, roll_no):
        for student in self.students:
            if student.get_roll() == roll_no:
                return student
        return None

StudentSystem()