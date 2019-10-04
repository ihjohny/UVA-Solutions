//11799 Horror Dash
import java.util.*;
class Main {
	public static void main (String[] args) {
		Scanner scanner=new Scanner(System.in);
		int testCase = scanner.nextInt();
		
		for(int i=0;i<testCase;i++)
		{
			int n = scanner.nextInt();
			int[] arra = new int[110];
			int max = 0;
			for(int j = 0; j<n; j++){
				arra[j] = scanner.nextInt();
				max = Math.max(arra[j],max);
			}
			System.out.println("Case "+(i+1)+": "+max);
		}
	}
}


