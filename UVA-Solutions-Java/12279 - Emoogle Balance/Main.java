//12279 - Emoogle Balance
import java.util.*;
class Main {
	public static void main (String[] args) {
		Scanner scanner=new Scanner(System.in);
		int test,n=0;
		while(true)
		{
			n++;
			test=scanner.nextInt();
			int zero=0,one=0;
			if(test==0) break;
			for(int i=0;i<test;i++)
			{
				int val=scanner.nextInt();
				if(val==0) zero++;
				else one++;
			}
			System.out.println("Case "+n+": "+(one-zero));
		}
	}
}


