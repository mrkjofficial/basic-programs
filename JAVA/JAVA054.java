/* 54. Program to calculate determinant of any order with a recursive function */

import java.util.Scanner;

public class JAVA054 {
    public static void main(String[] args) {
        int det = 0, size;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of the Matrix: ");
        size = sc.nextInt();
        int[][] array = new int[size][size];
        for (int i = 0; i < size; i++) {
            array[i] = new int[size];
        }
        input(sc, array, size);
        det = determinant(array, size);
        System.out.println("Determinant: " + det);
        sc.close();
    }

    public static void input(Scanner sc, int[][] array, int size) {
        System.out.println("Enter the Matrix elements:");
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                array[i][j] = sc.nextInt();
            }
        }
    }

    public static int determinant(int[][] array, int size) {
        if (size == 1) {
            return array[0][0];
        }
        int det = 0, sign = 1;
        for (int col = 0; col < size; col++) {
            int[][] sArray = new int[size - 1][size - 1];
            for (int i = 0; i < size - 1; i++) {
                sArray[i] = new int[size - 1];
            }
            createSubMatrix(array, sArray, col, size);
            det += (sign * array[0][col]) * determinant(sArray, size - 1);
            sign *= (-1);
        }
        return det;
    }

    public static void createSubMatrix(int[][] array, int[][] sArray, int col, int size) {
        int m = 0, n = 0;
        for (int i = 1; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (j != col) {
                    sArray[m][n] = array[i][j];
                    if (n < size - 2) {
                        n++;
                    } else {
                        n = 0;
                        m++;
                    }
                }
            }
        }
    }
}