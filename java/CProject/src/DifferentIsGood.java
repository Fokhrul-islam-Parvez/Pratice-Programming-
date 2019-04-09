import java.util.*;
public class DifferentIsGood {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		String s2=sc.nextLine();
		String s=sc.nextLine();
		char c[]=s.toCharArray();
		Arrays.sort(c);
		int p=0,y=0;
		for(int i=0;i<n-1;i++)
		{
			if(c[i]==c[i+1])
				p++;
		}
		System.out.println(p);
	}

}
