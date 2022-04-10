/* 73. Program to implement a Student Information System using classes */

import java.io.Console;
import java.util.Scanner;

class Student {
    public static final String newline = System.lineSeparator();
    private int rollNo;
    private long mobNo;
    private String name, gender, email, address;

    public int getRoll() {
        return rollNo;
    }

    public void addRecord(Scanner sc, int rNo) {
        rollNo = rNo;
        System.out.print("Enter Student's Name: ");
        sc.nextLine();
        name = sc.nextLine();
        System.out.print("Enter Student's Gender (Ex: Male/Female): ");
        gender = sc.next();
        System.out.print("Enter Student's Email (Ex: example@example.com): ");
        email = sc.next();
        System.out.print("Enter Student's Mobile No. (Ex: 9876543210): ");
        mobNo = sc.nextLong();
        System.out.print("Enter Student's Address: ");
        sc.nextLine();
        address = sc.nextLine();
    }

    public void editRecord(Scanner sc) {
        int choice;
        while (true) {
            System.out.println(newline + "Choose your Option:" + newline);
            System.out.println("1) Name:            " + name);
            System.out.println("2) Gender:          " + gender);
            System.out.println("3) Email:           " + email);
            System.out.println("4) Mobile No.:      " + mobNo);
            System.out.println("5) Address:         " + address);
            System.out.println("6) Back");
            System.out.print(newline + "Enter your choice: ");
            choice = sc.nextInt();
            switch (choice) {
                case 1:
                    System.out.print(newline + "Enter Student's Name: ");
                    sc.nextLine();
                    name = sc.nextLine();
                    System.out.println(newline + "Name Updated Successfully!");
                    break;
                case 2:
                    System.out.print(newline + "Enter Student's Gender (Ex: Male/Female): ");
                    gender = sc.next();
                    System.out.println(newline + "Gender Updated Successfully!");
                    break;
                case 3:
                    System.out.print(newline + "Enter Student's Email (Ex: example@example.com): ");
                    email = sc.next();
                    System.out.println(newline + "Email Updated Successfully!");
                    break;
                case 4:
                    System.out.print(newline + "Enter Student's Mobile No. (Ex: 9876543210): ");
                    mobNo = sc.nextLong();
                    System.out.println(newline + "Mobile No. Updated Successfully!");
                    break;
                case 5:
                    System.out.print(newline + "Enter Student's Address: ");
                    sc.nextLine();
                    address = sc.nextLine();
                    System.out.println(newline + "Address Updated Successfully!");
                    break;
                case 6:
                    return;
                default:
                    System.out.println(newline + "Invalid Option!");
            }
        }
    }

    public void deleteRecord(Student std) {
        rollNo = std.rollNo;
        name = std.name;
        gender = std.gender;
        email = std.email;
        mobNo = std.mobNo;
        address = std.address;
    }

    public void viewRecord(int i) {
        i = i == 0 ? rollNo : i;
        System.out.println(newline + "STUDENT: " + i + newline);
        System.out.println("Roll No.:        " + rollNo);
        System.out.println("Name:            " + name);
        System.out.println("Gender:          " + gender);
        System.out.println("Email:           " + email);
        System.out.println("Mobile No.:      " + mobNo);
        System.out.println("Address:         " + address);
    }
}

public class JAVA073 {
    private static final String UNAME = "admin";
    private static final String PWORD = "12345";

    public static void main(String[] args) {
        String uname, pword;
        Scanner sc = new Scanner(System.in);
        Console cs = System.console();
        while (true) {
            System.out.print(Student.newline + "USERNAME: ");
            uname = sc.next();
            System.out.print(Student.newline + "PASSWORD: ");
            pword = String.valueOf(cs.readPassword());
            if (uname.equals(UNAME) && pword.equals(PWORD)) {
                menu(sc);
                sc.close();
            } else {
                System.out.println(Student.newline + "Invalid Credentials!");
            }
        }
    }

    public static void menu(Scanner sc) {
        int choice, index = 0, rollNo, sIndex, size;
        System.out.print(Student.newline + "Enter the Class Strength: ");
        size = sc.nextInt();
        Student[] stud = new Student[size];
        while (true) {
            System.out.println(Student.newline + "Choose your Option:" + Student.newline);
            System.out.println("1) Add Record");
            System.out.println("2) Edit Record");
            System.out.println("3) Delete Record");
            System.out.println("4) View Record");
            System.out.println("5) View All Records");
            System.out.println("6) Exit");
            System.out.print(Student.newline + "Enter your choice: ");
            choice = sc.nextInt();
            switch (choice) {
                case 1:
                    if (index < size) {
                        while (true) {
                            System.out.print(Student.newline + "Enter Student's Roll No.: ");
                            rollNo = sc.nextInt();
                            sIndex = searchRecords(stud, rollNo, index);
                            if (sIndex != -1) {
                                System.out.println(Student.newline + "Roll No. Already Exists!");
                            } else {
                                break;
                            }
                        }
                        stud[index] = new Student();
                        stud[index].addRecord(sc, rollNo);
                        index++;
                        System.out.println(Student.newline + "Record Added Successfully!");
                    } else {
                        System.out.println(Student.newline + "Storage Full!");
                    }
                    break;
                case 2:
                    System.out.print(Student.newline + "Enter Student's Roll No.: ");
                    rollNo = sc.nextInt();
                    sIndex = searchRecords(stud, rollNo, index);
                    if (sIndex != -1) {
                        stud[sIndex].editRecord(sc);
                    } else {
                        System.out.println(Student.newline + "No Record Found!");
                    }
                    break;
                case 3:
                    System.out.print(Student.newline + "Enter Student's Roll No.: ");
                    rollNo = sc.nextInt();
                    sIndex = searchRecords(stud, rollNo, index);
                    if (sIndex != -1) {
                        deleteRecords(stud, sIndex, index);
                        index--;
                        System.out.println(Student.newline + "Record Deleted Successfully!");
                    } else {

                        System.out.println(Student.newline + "No Record Found!");
                    }
                    break;
                case 4:
                    System.out.print(Student.newline + "Enter Student's Roll No.: ");
                    rollNo = sc.nextInt();
                    sIndex = searchRecords(stud, rollNo, index);
                    if (sIndex != -1) {
                        stud[sIndex].viewRecord(0);
                    } else {
                        System.out.println(Student.newline + "No Record Found!");
                    }
                    break;
                case 5:
                    if (index == 0) {
                        System.out.println(Student.newline + "No Record Found!");
                        break;
                    }
                    viewRecords(stud, index);
                    break;
                case 6:
                    sc.close();
                    System.exit(0);
                default:
                    System.out.println(Student.newline + "Invalid Option!");
            }
        }
    }

    public static int searchRecords(Student[] stud, int rollNo, int size) {
        int index = -1;
        for (int i = 0; i < size; i++) {
            if (stud[i].getRoll() == rollNo) {
                index = i;
                break;
            }
        }
        return index;
    }

    public static void deleteRecords(Student[] stud, int sIndex, int size) {
        for (int i = sIndex; i < size - 1; i++) {
            stud[i].deleteRecord(stud[i + 1]);
        }
    }

    public static void viewRecords(Student[] stud, int size) {
        for (int i = 0; i < size; i++) {
            stud[i].viewRecord(i + 1);
        }
    }
}
