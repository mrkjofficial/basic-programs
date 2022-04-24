/* 74. Program to calculate GPA using array of objects */

import java.util.Formatter;
import java.util.Scanner;

class Subject {
    private String subCode;
    private int hours, marks;
    private char grade;
    private double credits, qPoints;

    public void addDetails(String subCode, int marks, int hours) {
        if (marks <= 100 && marks >= 90) {
            credits = 4.0;
            grade = 'A';
        } else if (marks <= 90 && marks >= 75) {
            credits = 3.0;
            grade = 'B';
        } else if (marks <= 75 && marks >= 50) {
            credits = 2.0;
            grade = 'C';
        } else if (marks <= 50 && marks >= 40) {
            credits = 1.0;
            grade = 'D';
        } else {
            credits = 0.0;
            grade = 'F';
        }
        this.subCode = subCode;
        this.marks = marks;
        this.hours = hours;
        qPoints = hours * credits;
    }

    public String getsubCode() {
        return subCode;
    }

    public int getMarks() {
        return marks;
    }

    public char getGrade() {
        return grade;
    }

    public double getCredits() {
        return credits;
    }

    public int getHours() {
        return hours;
    }

    public double getQPoints() {
        return qPoints;
    }

}

public class JAVA074 {
    public static final String newline = System.lineSeparator();

    public static void main(String[] args) {
        int choice, index = 0, size;
        Scanner sc = new Scanner(System.in);
        System.out.print(newline + "Enter total no. of subjects: ");
        size = sc.nextInt();
        Subject[] sub = new Subject[size];
        while (true) {
            System.out.println(newline + "Choose your Option:" + newline);
            System.out.println("1) Add Subject");
            System.out.println("2) View GPA");
            System.out.println("3) Exit");
            System.out.print(newline + "Enter your choice: ");
            choice = sc.nextInt();
            switch (choice) {
                case 1:
                    addSubject(sc, sub, index, size);
                    index++;
                    break;
                case 2:
                    viewGPA(sub, index);
                    break;
                case 3:
                    sc.close();
                    System.exit(0);
                default:
                    System.out.println("Invalid Option!");
            }
        }
    }

    public static void addSubject(Scanner sc, Subject[] sub, int index, int size) {
        if (index == size) {
            System.out.println(newline + "Storage Full!");
            return;
        }
        String subCode;
        int hours, marks;
        System.out.println(newline + "Subject - " + index + 1 + newline);
        System.out.print("Enter Subject Code (Ex: CS-001): CS-");
        subCode = "CS-" + sc.next();
        System.out.print("Enter Marks (Out of 100): ");
        marks = sc.nextInt();
        System.out.print("Enter Hours: ");
        hours = sc.nextInt();
        sub[index] = new Subject();
        sub[index].addDetails(subCode, marks, hours);
        System.out.println(newline + "Subject Added Successfully!");
    }

    public static void viewGPA(Subject[] sub, int index) {
        double tHours = 0, tQPoints = 0;
        if (index == 0) {
            System.out.println(newline + "No Subject Found!");
        } else {
            Formatter fmt = new Formatter();
            fmt.format("\n%7s %17s %10s %10s %12s %10s %19s", "Sl. No.", "Subject Code", "Marks", "Grade", "Credits", "Hours", "Quality Points");
            for (int i = 0; i < index; i++) {
                fmt.format("\n%7s %17s %10s %10s %12s %10s %19s", (i + 1), sub[i].getsubCode(), sub[i].getMarks(), sub[i].getGrade(), sub[i].getCredits(), sub[i].getHours(), sub[i].getQPoints());
                tHours += sub[i].getHours();
                tQPoints += sub[i].getQPoints();
            }
            System.out.println(fmt);
            fmt.close();
            System.out.println(newline + "GPA: " + tQPoints / tHours);
        }
    }
}