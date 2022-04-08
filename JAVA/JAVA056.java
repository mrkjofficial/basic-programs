/* 56. Program to find greatest among the numbers in an array */

import java.util.Scanner;

public class JAVA056 {
    public static void main(String[] args) {
        int max = 0, size;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of the array: ");
        size = sc.nextInt();
        int[] array = new int[size];
        input(sc, array, size);
        max = getMax(array, size);
        System.out.println("Max Element: " + max);
        sc.close();
    }

    public static void input(Scanner sc, int[] array, int size) {
        System.out.println("Enter the array elements:");
        for (int i = 0; i < size; i++) {
            array[i] = sc.nextInt();
        }
    }

    public static int getMax(int array[], int size) {
        int max = array[0];
        for (int i = 1; i < size; i++) {
            if (max < array[i]) {
                max = array[i];
            }
        }
        return max;
    }
}