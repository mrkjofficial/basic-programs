/* 39. Program to convert from Binary to Decimal (upto 10 digits input) */

import java.util.Scanner;
import static java.lang.Math.pow;

public class JAVA039 {
    public static void main(String[] args) {
        int bin, dec;
        try {
            Scanner sc = new Scanner(System.in);
            System.out.print("Enter a binary number: ");
            bin = sc.nextInt(2);
            sc.close();
            dec = toDecimal(bin);
            System.out.println("Decimal = " + dec);
        } catch (Exception e) {
            System.out.println(e.getMessage());
        }
    }

    public static int toDecimal(int bin) {
        int dec = 0, rem;
        for (int i = 0; bin > 0; i++) {
            rem = bin % 2;
            dec += rem * (int) pow(2, i);
            bin = bin / 2;
        }
        return dec;
    }
}