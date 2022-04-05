/* 47. Program to sort an array with a recursive function */

import java.util.Scanner;

public class JAVA047 {
    public static void main(String[] args) {
        int size;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of the array: ");
        size = sc.nextInt();
        int[] array = new int[size];
        input(sc, array, size);
        sort(array, size);
        print(array, size);
        sc.close();
    }

    public static void input(Scanner sc, int array[], int size) {
        System.out.println("Enter the array elements:");
        for (int i = 0; i < size; i++) {
            array[i] = sc.nextInt();
        }
    }

    public static void print(int array[], int size) {
        System.out.println("The array elements are:");
        for (int i = 0; i < size; i++) {
            System.out.print(array[i] + " ");
        }
    }

    public static void sort(int array[], int size) {
        if (size > 1) {
            int mIndex, temp;
            mIndex = getMaxIndex(array, size);
            temp = array[size - 1];
            array[size - 1] = array[mIndex];
            array[mIndex] = temp;
            sort(array, size - 1);
        }
    }

    public static int getMaxIndex(int array[], int size) {
        int mIndex = 0;
        for (int i = 1; i < size; i++) {
            if (array[mIndex] < array[i]) {
                mIndex = i;
            }
        }
        return mIndex;
    }
}