import java.lang.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        // YOUR CODE GOES HERE
        // Please take input and print output to standard input/output (stdin/stdout)
        // DO NOT USE ARGUMENTS FOR INPUTS
        // E.g. 'Scanner' for input & 'System.out' for output
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        int ansfirst;
        int anslast;
        while(t>0)
        {
           int n = s.nextInt();
           ansfirst = n%10; 
           int r;
           while(n>0)
           {
                anslast = n%10;
                n = n/10;
           }
           System.out.println(ansfirst +" "+ anslast);
           t--;
        }
        
    }
}