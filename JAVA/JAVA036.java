/* 36. Program to check co-prime numbers */

import java.util.Scanner;

public class JAVA036 {
    public static void main(String[] args) {
        int x, y, min;
        boolean flag = true;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter two numbers: ");
        x = sc.nextInt();
        y = sc.nextInt();
        sc.close();
        min = x < y ? x : y;
        for (int i = 2; i <= min; i++) {
            if (x % i == 0 && y % i == 0) {
                flag = false;
                break;
            }
        }
        if (flag) {
            System.out.println(x + " & " + y + " are co-prime numbers.");
        } else {
            System.out.println(x + " & " + y + " are not co-prime numbers.");
        }
    }
}
