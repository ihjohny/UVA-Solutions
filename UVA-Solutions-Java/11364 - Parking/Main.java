//11364 - Parking
import java.util.Scanner;
class Main {
	
	public static void main (String[] args) {
		Scanner scanner=new Scanner(System.in);
		int test,store,max,min,i,j;
		test =scanner.nextInt();
		for(i=1;i<=test;i++)
		{
			store=scanner.nextInt();
			min=1000;
			max=0;
			for(j=0;j<store;j++)
			{
				int t=scanner.nextInt();
				if(t>max) max=t;
				if(t<min) min=t;
			}

			System.out.println((max-min)*2);
					
			}
		
		
	}
}

