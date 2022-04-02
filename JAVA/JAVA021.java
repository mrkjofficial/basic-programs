/* 21. Program to calculate product of first N natural numbers */

import java.util.Scanner;

public class JAVA021 {
    public static void main(String[] args) {
        int n, pro = 1;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a value to print product of first N natural numbers: ");
        n = sc.nextInt();
        sc.close();
        for (int i = 1; i <= n; i++) {
            pro = pro * i;
        }
        System.out.println("Product of first " + n + " natural numbers is " + pro);
    }
}