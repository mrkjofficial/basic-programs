/* 65. Program to sort strings in dictionary order */

import java.util.Arrays;
import java.util.Scanner;

public class JAVA065 {
    public static void main(String[] args) {
        int size;
        String[] strArray = new String[5];
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of the Array: ");
        size = sc.nextInt();
        System.out.println("Enter " + size + " Strings:");
        for (int i = 0; i < size; i++) {
            strArray[i] = sc.next();
        }
        sc.close();
        Arrays.sort(strArray, String.CASE_INSENSITIVE_ORDER);
        System.out.println("Sorted Strings:");
        for (int i = 0; i < size; i++) {
            System.out.print(strArray[i] + " ");
        }
    }
}