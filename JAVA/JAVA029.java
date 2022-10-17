/* 29. Program to print all Armstrong numbers under 1000 */

import static java.lang.Math.pow;

public class JAVA029 {
    public static void main(String[] args) {
        System.out.println("Armstrong numbers under 1000 are as follows:");
        for (int num = 1; num <= 1000; num++) {
            int temp = num;
            int newNum = 0;
            int digits = Integer.toString(num).length();
            while (temp != 0) {
                int rem = temp % 10;
                newNum = newNum + (int) pow(rem, digits);
                temp = temp / 10;
            }
            if (newNum == num) {
                System.out.print(num + "\t");
            }
        }
    }
}