//11942 - Lumberjack Sequencing
import java.util.*;
class Main {
	public static void main (String[] args) {
		Scanner scanner=new Scanner(System.in);
		int testCase = scanner.nextInt();
		System.out.println("Lumberjacks:");
		for(int i=0;i<testCase;i++)
		{
			int[] arra = new int[10];
			int inc = 0;
			int dec = 0;
			for(int j=0; j<10; j++){
				arra[j] = scanner.nextInt();
			}
			
			for(int j=0; j<9; j++){
				if(arra[j] < arra[j+1])
					inc++;
				else
					dec++;
			}
			if(inc == 9 || dec == 9)
				System.out.println("Ordered");
			else
				System.out.println("Unordered");
		}
	}
}


