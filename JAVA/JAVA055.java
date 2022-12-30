/* 55. Program to calculate sum of all even numbers and sum of all odd numbers in an array */

import java.util.Scanner;

public class JAVA055 {
    public static void main(String[] args) {
        int size;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of the array: ");
        size = sc.nextInt();
        int[] array = new int[size];
        input(sc, array, size);
        calculateSum(array, size);
        sc.close();
    }

    public static void input(Scanner sc, int[] array, int size) {
        System.out.println("Enter the array elements:");
        for (int i = 0; i < size; i++) {
            array[i] = sc.nextInt();
        }
    }

    public static void calculateSum(int[] array, int size) {
        int evenSum = 0, oddSum = 0;
        for (int i = 0; i < size; i++) {
            if (array[i] % 2 == 1) {
                oddSum += array[i];
            } else {
                evenSum += array[i];
            }
        }
        System.out.println("Sum Of Even Elements: " + evenSum);
        System.out.println("Sum Of Odd Elements: " + oddSum);
    }
}