/* 44. Program to print system time & date */

import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;

public class JAVA044 {
    public static void main(String[] args) {
        DateTimeFormatter format = DateTimeFormatter.ofPattern("HH:mm:ss - EEEE, dd/MM/yyyy");
        LocalDateTime curDateTime = LocalDateTime.now();
        System.out.println("Current Time & Date: " + format.format(curDateTime));
    }
}