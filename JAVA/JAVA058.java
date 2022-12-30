/* 58. Program to add two matrices */

import java.util.Scanner;

public class JAVA058 {
    public static void main(String[] args) {
        int size;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of the Matrices: ");
        size = sc.nextInt();
        int[][] A = new int[size][size];
        int[][] B = new int[size][size];
        int[][] C = new int[size][size];
        for (int i = 0; i < size; i++) {
            A[i] = new int[size];
            B[i] = new int[size];
            C[i] = new int[size];
        }
        input(sc, A, B, size);
        add(A, B, C, size);
        System.out.println("Sum of 1st & 2nd Matrices:");
        print(C, size);
        sc.close();
    }

    public static void input(Scanner sc, int[][] A, int[][] B, int size) {
        System.out.println("Enter 1st Matrix elements:");
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                A[i][j] = sc.nextInt();
            }
        }
        System.out.println("Enter 2nd Matrix elements:");
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                B[i][j] = sc.nextInt();
            }
        }
    }

    public static void add(int[][] A, int[][] B, int[][] C, int size) {
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                C[i][j] = A[i][j] + B[i][j];
            }
        }
    }

    public static void print(int[][] array, int size) {
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                System.out.print(array[i][j] + " ");
            }
            System.out.println();
        }
    }
}