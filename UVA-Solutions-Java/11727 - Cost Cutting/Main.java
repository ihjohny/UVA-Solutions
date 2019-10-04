//12577 - Hajj-e-Akbar
import java.util.*;
class Main {
	public static void main (String[] args) {
		Scanner scanner=new Scanner(System.in);
		int test=scanner.nextInt();
		for(int i=1;i<=test;i++)
		{
			int a,b,c;
			
			a=scanner.nextInt();
			b=scanner.nextInt();
			c=scanner.nextInt();
			
			System.out.print("Case "+i+": ");
			if((a>b && a<c ) ||(a>c && a<b)) 
				System.out.println(a);
			else if((b>a && b<c ) ||(b>c && b<a))
				System.out.println(b);
			else 
				System.out.println(c);
			
		}
	}
}


