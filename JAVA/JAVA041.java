/* 41. Program to print first n positive numbers with exactly two bits set (exactly two 1's in Binary Representation) (Logic #1) */

import java.util.Scanner;

public class JAVA041 {
    public static void main(String[] args) {
        int count, n, num = 3, bNum;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a value of N to print N positive numbers with two bits set: ");
        n = sc.nextInt();
        sc.close();
        while (n > 0) {
            bNum = num;
            count = 0;
            while (bNum > 0) {
                if (bNum % 2 == 1) {
                    count++;
                }
                bNum = bNum / 2;
            }
            if (count == 2) {
                System.out.print(num + "\t");
                n--;
            }
            num++;
        }
    }
}