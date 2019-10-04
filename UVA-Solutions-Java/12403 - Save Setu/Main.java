//12577 - Hajj-e-Akbar
import java.util.*;
class Main {
	public static void main (String[] args) {
		Scanner scanner=new Scanner(System.in);
		int sum=0;
		int test=scanner.nextInt();
		for(int i=1;i<=test;i++)
		{
			int n;
			String temp=scanner.next();
			if(temp.equals("donate"))
			{
				n=scanner.nextInt();
				sum+=n;
			}
			else
			{
				System.out.println(sum);
			}
		}
	}
}


