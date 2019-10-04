//12250 - Language Detection
import java.util.*;
class Main {
	public static void main (String[] args) {
		Scanner scanner=new Scanner(System.in);
		int i=0;
		while(true)
		{
			i++;
			String test=scanner.next();
			if(test.equals("#")) break;
			System.out.print("Case "+i+": ");
			if(test.equals("HELLO"))
				System.out.println("ENGLISH");
			
			else if(test.equals("HOLA"))
				System.out.println("SPANISH");
			
			else if(test.equals("HALLO"))
				System.out.println("GERMAN");
			
			else if(test.equals("BONJOUR"))
				System.out.println("FRENCH");
			
			else if(test.equals("CIAO"))
				System.out.println("ITALIAN");
			
			else if(test.equals("ZDRAVSTVUJTE"))
				System.out.println("RUSSIAN");
			else 
				System.out.println("UNKNOWN");
		}
	}
}


