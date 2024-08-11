# 74. Program to calculate GPA using array of objects

class Subject:
    def __init__(self, sub_code, marks, hours):
        self.sub_code = sub_code
        self.marks = marks
        self.hours = hours
        self.credits, self.grade = self.calculate_credits_and_grade(marks)
        self.q_points = self.hours * self.credits

    def calculate_credits_and_grade(self, marks):
        if 90 <= marks <= 100:
            return 4.0, 'A'
        elif 75 <= marks < 90:
            return 3.0, 'B'
        elif 50 <= marks < 75:
            return 2.0, 'C'
        elif 40 <= marks < 50:
            return 1.0, 'D'
        else:
            return 0.0, 'F'

    def get_details(self):
        return {
            'sub_code': self.sub_code,
            'marks': self.marks,
            'grade': self.grade,
            'credits': self.credits,
            'hours': self.hours,
            'q_points': self.q_points
        }

def add_subject(subjects):
    if len(subjects) == size:
        print("\nStorage Full!")
        return

    sub_code = input("\nEnter Subject Code (Ex: CS-001): CS-")
    marks = int(input("Enter Marks (Out of 100): "))
    hours = int(input("Enter Hours: "))

    subject = Subject(f"CS-{sub_code}", marks, hours)
    subjects.append(subject)

    print("\nSubject Added Successfully!")

def view_gpa(subjects):
    if not subjects:
        print("\nNo Subject Found!")
        return

    t_hours = sum(subject.hours for subject in subjects)
    t_q_points = sum(subject.q_points for subject in subjects)

    print("\n{:<7} {:<17} {:<10} {:<10} {:<12} {:<10} {:<19}".format(
        "Sl. No.", "Subject Code", "Marks", "Grade", "Credits", "Hours", "Quality Points"))

    for i, subject in enumerate(subjects, start=1):
        details = subject.get_details()
        print("{:<7} {:<17} {:<10} {:<10} {:<12} {:<10} {:<19}".format(
            i, details['sub_code'], details['marks'], details['grade'],
            details['credits'], details['hours'], details['q_points']))

    gpa = t_q_points / t_hours
    print(f"\nGPA: {gpa:.2f}")

def main():
    global size
    size = int(input("\nEnter total no. of subjects: "))
    subjects = []

    while True:
        print("\nChoose your Option:\n")
        print("1) Add Subject")
        print("2) View GPA")
        print("3) Exit")
        choice = int(input("\nEnter your choice: "))

        if choice == 1:
            add_subject(subjects)
        elif choice == 2:
            view_gpa(subjects)
        elif choice == 3:
            break
        else:
            print("\nInvalid Option!")

main()