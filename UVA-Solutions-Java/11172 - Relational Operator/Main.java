//12577 - Hajj-e-Akbar
import java.util.*;
class Main {
	public static void main (String[] args) {
		Scanner scanner=new Scanner(System.in);
		int test=scanner.nextInt();
		for(int i=1;i<=test;i++)
		{
			long n,m;
			n=scanner.nextInt();
			m=scanner.nextInt();
			if(n==m)
				System.out.println("=");
			else if(n>m)
				System.out.println(">");
			else if(n<m)
				System.out.println("<");
		}
	}
}


