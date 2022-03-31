/* 05. Program to take integer inputs only */

import java.util.Scanner;

public class JAVA005 {
    public static void main(String[] args) {
        String num;
        Scanner sc = new Scanner(System.in);
        while (true) {
            System.out.print("Enter a number: ");
            num = sc.nextLine();
            if (getIntegerOnly(num)) {
                System.out.println("Number: " + num);
                break;
            } else {
                System.out.println("Enter Integer Only!");
            }
        }
        sc.close();
    }

    public static boolean getIntegerOnly(String num) {
        boolean flag = true;
        char numArray[] = num.toCharArray();
        for (int i = 0; i < numArray.length; i++) {
            if (numArray[i] < 48 || numArray[i] > 57) {
                flag = false;
            }
        }
        return flag;
    }
}