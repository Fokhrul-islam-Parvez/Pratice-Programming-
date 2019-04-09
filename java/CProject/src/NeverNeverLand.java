import java.util.*;
public class NeverNeverLand {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String s=sc.nextLine();
		int n=s.length();
		int d=0;
		for(int i=0;i<n;i++)
		{
			char c=s.charAt(i);
			if(c=='n')
				d++;
		}
System.out.println(d);
	}

}
