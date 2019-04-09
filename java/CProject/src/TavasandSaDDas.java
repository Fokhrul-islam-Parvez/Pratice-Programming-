import java.util.*;
public class TavasandSaDDas {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int a=sc.nextInt();
		int c=0,k=0;
		for(int i=4;i<=a;i++)
		{
			String s=String.valueOf(i);
			int l=s.length();
			for(int j=0;j<l;j++)
			{
				if(s.charAt(j)=='4' || s.charAt(j)=='7')
					k=1;
				else
				{
					k=0;
					break;
				}
			}
			if(k==1)
				c++;
			k=0;
		}
		System.out.println(c);
	}

}
