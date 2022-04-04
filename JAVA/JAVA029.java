/* 29. Program to print all Armstrong numbers under 1000 */

import static java.lang.Math.pow;

public class JAVA029 {
    public static void main(String[] args) {
        int num, newNum, rem, temp;
        System.out.println("Armstrong numbers under 1000 are as follows:");
        for (num = 1; num <= 1000; num++) {
            temp = num;
            newNum = 0;
            while (temp != 0) {
                rem = temp % 10;
                newNum = newNum + (int) pow(rem, 3);
                temp = temp / 10;
            }
            if (newNum == num) {
                System.out.println(num + "\t");
            }
        }
    }
}