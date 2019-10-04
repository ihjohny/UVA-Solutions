//11498 - Division of Nlogonia
import java.util.*;
class Main {
	public static void main (String[] args) {
		Scanner scanner=new Scanner(System.in);
		while(true)
		{
			
			int test=scanner.nextInt();
			if(test==0) break;
			int n,m,x,y;
			m=scanner.nextInt();
			n=scanner.nextInt();	
			for(int i=1;i<=test;i++)
			{
				x=scanner.nextInt();
				y=scanner.nextInt();	
				if((x-m)==0 || (y-n)==0 )
					System.out.println("divisa");
				else if((x-m)>0 && (y-n)>0)
					System.out.println("NE");
				else if((x-m)<0 && (y-n)>0)
					System.out.println("NO");
					
				else if((x-m)<0 && (y-n)<0)
					System.out.println("SO");
				else if((x-m)>0 && (y-n)<0)
					System.out.println("SE");
					
					
			}
		}
	}
}


