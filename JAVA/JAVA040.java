/* 40. Program to convert from Binary to Decimal (Extended Range) */

import java.util.Scanner;

public class JAVA040 {
    public static void main(String[] args) {
        long bin, dec;
        try {
            Scanner sc = new Scanner(System.in);
            System.out.print("Enter a binary number: ");
            bin = sc.nextLong(2);
            sc.close();
            dec = toDecimal(bin);
            System.out.println("Decimal = " + dec);
        } catch (Exception e) {
            System.out.println(e.getMessage());
        }
    }

    public static long toDecimal(long bin) {
        long dec = 0, rem;
        for (int i = 0; bin > 0; i++) {
            rem = bin % 2;
            dec += rem * (long) Math.pow(2, i);
            bin = bin / 2;
        }
        return dec;
    }
}