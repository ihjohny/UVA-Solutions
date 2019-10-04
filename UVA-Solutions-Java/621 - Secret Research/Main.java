//621 - Secret Research
import java.util.*;
class Main {
	public static void main (String[] args) {
		Scanner scanner=new Scanner(System.in);
		int n;
		n = scanner.nextInt();
		scanner.nextLine(); //for feeding empty line
		for(int i=0;i<n;i++)
		{
			String str = scanner.nextLine();
			int len = str.length();
			
			if( str.equals("1") || str.equals("4") || str.equals("78") )
				System.out.println("+");
			else if(str.charAt(len-1)=='5' && str.charAt(len-2)=='3')
				System.out.println("-");
			else if(str.charAt(0)=='9' && str.charAt(len-1)=='4')
				System.out.println("*");
			else 
				System.out.println("?");
		}
	}
}


