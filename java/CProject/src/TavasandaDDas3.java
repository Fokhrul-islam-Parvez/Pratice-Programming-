import java.util.*;
public class TavasandaDDas3 {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int a=sc.nextInt();
		String s1=String.valueOf(a);
		int l=s1.length();
		int b=1;
		int n;
		for(int i=2;i<=l;i++)
		{
			b=(b*2)+1;
		}
		 n=4;
		for(int i=0;i<l-1;i++)
		{
			n=n*10;
			n=n+4;
		}
		int k=0;
		for(int j=n;j<a;j++) {
			String s=String.valueOf(j);
		for(int i=0;i<l;i++)
		{
			if(s.charAt(i)=='4' || s.charAt(i)=='7')
				k=1;
			else
			{
				k=0;
				break;
			}
		}
		
		if(k==1)
			b++;
		k=0;
		}
		System.out.println(b);
		}
}
