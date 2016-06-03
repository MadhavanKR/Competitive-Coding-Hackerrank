/*https://www.hackerrank.com/challenges/extra-long-factorials*/
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    
    public static void main(String[] args) {
        BigInteger n1 = new BigInteger("1");
		BigInteger n2 = new BigInteger("1");
		BigInteger n3 = new BigInteger("1");

		Scanner scan1 = new Scanner(System.in);
		int n = scan1.nextInt();
		int i;
		for( i=1;i<=n;i++)
		{
			n1 = n1.multiply(n2);
			n2 = n2.add(n3);
		}
       System.out.println(n1);
    }
}