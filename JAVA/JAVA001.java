import java.lang.Math;
import java.io.BufferedReader;
import java.io.InputStreamReader;
class JAVA001{
    public static void main(String[] args) {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        double x, y;
        try{
            System.out.print("Enter a Number: ");
            x = Double.parseDouble(in.readLine());
            y = Math.sqrt(x);
            System.out.println(x);
            System.out.println(y);
        }
        catch(Exception e){
            System.out.println(e);
        }
    }
}