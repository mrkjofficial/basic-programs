/* 61. Program to rotate an array by n positions */

import java.util.Scanner;

public class JAVA061 {
    public static void main(String[] args) {
        int choice, rotation, size;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of the array: ");
        size = sc.nextInt();
        int[] array = new int[size];
        input(sc, array, size);
        System.out.println("Choose Direction for Rotation:");
        System.out.println("1. Left");
        System.out.println("2. Right");
        System.out.print("Enter your choice: ");
        choice = sc.nextInt();
        while (true) {
            switch (choice) {
                case 1:
                    System.out.print("Enter no. of rotations: ");
                    rotation = sc.nextInt();
                    rotate(array, choice, rotation, size);
                    print(array, size);
                    sc.close();
                    System.exit(0);
                case 2:
                    System.out.print("Enter no. of rotations: ");
                    rotation = sc.nextInt();
                    rotate(array, choice, rotation, size);
                    print(array, size);
                    sc.close();
                    System.exit(0);
                default:
                    System.out.println("Invalid Choice!");
            }
        }
    }

    public static void input(Scanner sc, int array[], int size) {
        System.out.println("Enter the array elements:");
        for (int i = 0; i < size; i++) {
            array[i] = sc.nextInt();
        }
    }

    public static void rotate(int array[], int choice, int rotation, int size) {
        int temp;
        while (rotation > 0) {
            if (choice == 1) {
                temp = array[0];
                for (int i = 0; i < size - 1; i++) {
                    array[i] = array[i + 1];
                }
                array[size - 1] = temp;
            } else if (choice == 2) {
                temp = array[size - 1];
                for (int i = size - 1; i > 0; i--) {
                    array[i] = array[i - 1];
                }
                array[0] = temp;
            }
            rotation--;
        }
    }

    public static void print(int array[], int size) {
        System.out.println("The array elements are:");
        for (int i = 0; i < size; i++) {
            System.out.print(array[i] + " ");
        }
    }
}