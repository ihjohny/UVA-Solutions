//12577 - Hajj-e-Akbar
import java.util.*;
class Main {
	public static void main (String[] args) {
		Scanner scanner=new Scanner(System.in);
		int test=scanner.nextInt();
		for(int i=1;i<=test;i++)
		{
			String str=scanner.next();
			if(str.length()==5) 
				System.out.println("3");
			else
			{
				char[] charArray = str.toCharArray();
				if((charArray[0]=='o' && charArray[1]=='n') ||(charArray[1]=='n' && charArray[2]=='e') || (charArray[0]=='o' && charArray[2]=='e'))
					System.out.println("1");
				else
					System.out.println("2");
			}
		}
	}
}


