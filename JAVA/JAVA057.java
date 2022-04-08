/* 57. Program to find smallest among the numbers in an array */

import java.util.Scanner;

public class JAVA057 {
    public static void main(String[] args) {
        int min = 0, size;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of the array: ");
        size = sc.nextInt();
        int[] array = new int[size];
        input(sc, array, size);
        min = getMin(array, size);
        System.out.println("Min Element: " + min);
        sc.close();
    }

    public static void input(Scanner sc, int[] array, int size) {
        System.out.println("Enter the array elements:");
        for (int i = 0; i < size; i++) {
            array[i] = sc.nextInt();
        }
    }

    public static int getMin(int array[], int size) {
        int min = array[0];
        for (int i = 1; i < size; i++) {
            if (min > array[i]) {
                min = array[i];
            }
        }
        return min;
    }
}