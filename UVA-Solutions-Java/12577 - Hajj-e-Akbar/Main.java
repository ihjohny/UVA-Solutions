//12577 - Hajj-e-Akbar
import java.util.*;
class Main {
	
	public static void main (String[] args) {
		Scanner scanner=new Scanner(System.in);
		int i=1;
		while(true)
		{
			String str;
			str=scanner.nextLine();
			if(str.equals("*")) break;
			if(str.equals("Hajj"))
				System.out.println("Case "+i+": Hajj-e-Akbar");
			else
				System.out.println("Case "+i+": Hajj-e-Asghar");
			i++;
		}
		
		
		
	}
}


