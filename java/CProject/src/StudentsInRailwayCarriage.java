import java.util.*;
public class StudentsInRailwayCarriage {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int a=sc.nextInt();
		int b=sc.nextInt();
		String s1=sc.nextLine();
		String s=sc.nextLine();
		int ct=0;
		for(int i=0;i<n;i++)
		{
			char c=s.charAt(i);
			if(c=='.')
				ct++;
		}
		if(ct<a+b)
			System.out.println(ct);
		else
			System.out.println(a+b);


	}

}
