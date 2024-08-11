/* 60. Program to generate distinct numbers in given range & store in an array */

import java.util.Scanner;
import static java.lang.Math.random;

public class JAVA060 {
    public static void main(String[] args) {
        int min, max, size;
        Scanner sc = new Scanner(System.in);
        while (true) {
            System.out.print("Enter a range (Lower Bound - Upper Bound): ");
            min = sc.nextInt();
            max = sc.nextInt();
            if (max - min > 0) {
                break;
            } else {
                System.out.println("Invalid Range!");
            }
        }
        while (true) {
            System.out.print("Enter the size of the array: ");
            size = sc.nextInt();
            if (size <= max - min) {
                break;
            } else {
                System.out.println("Invalid Size!");
            }
        }
        sc.close();
        int[] array = new int[size];
        randomize(array, min, max, size);
        print(array, size);
    }

    public static void randomize(int[] array, int min, int max, int size) {
        int value;
        for (int i = 0; i < size; i++) {
            value = (int) (random() * (max + 1 - min)) + min;
            if (unique(array, i, value)) {
                array[i] = value;
            } else {
                i--;
            }
        }
    }

    public static boolean unique(int[] array, int size, int value) {
        boolean flag = true;
        for (int i = 0; i < size; i++) {
            if (array[i] == value) {
                flag = false;
                break;
            }
        }
        return flag;
    }

    public static void print(int[] array, int size) {
        System.out.println("The random elements of array are:");
        for (int i = 0; i < size; i++) {
            System.out.print(array[i] + " ");
        }
    }
}
