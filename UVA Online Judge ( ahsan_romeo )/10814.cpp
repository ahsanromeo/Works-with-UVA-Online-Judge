import java.util.Scanner;
import java.math.BigInteger;
public class Main
{

	public static Scanner sc = new Scanner(System.in);
	public static void main(String[] args)
	{
		int T = sc.nextInt();
		for(int cas = 1; cas <= T; ++cas)
		{
			BigInteger p = sc.nextBigInteger();
			sc.next();
			BigInteger q = sc.nextBigInteger();
			BigInteger g = p.gcd(q);
			System.out.println(p.divide(g) + " / " + q.divide(g));
		}
	}

}
