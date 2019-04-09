import java.util.*;
public class AmusingJoke {
	public static void main(String [] args)
	{
		Scanner sc=new Scanner(System.in);
		String s1=sc.nextLine();
		String s2=sc.nextLine();
		String s3=sc.nextLine();
		String s=s1.concat(s2);
		int b=s3.length();
		int a=s.length();
		byte bs[]=s.getBytes();
		byte bs2[]=s3.getBytes();
		for(int i=0;i<a;i++)
		{
			for(int j=0;j<a-1-i;j++)
			{
				if(bs[j]>bs[j+1])
				{
					byte by=bs[j];
					bs[j]=bs[j+1];
					bs[j+1]=by;
				}
			}
		}
		for(int i=0;i<b;i++)
		{
			for(int j=0;j<b-1-i;j++)
			{
				if(bs2[j]>bs2[j+1])
				{
					byte by=bs2[j];
					bs2[j]=bs2[j+1];
					bs2[j+1]=by;
				}
			}
		}
	
		if(Arrays.equals(bs, bs2))
			System.out.println("YES");
		else
			System.out.println("NO");
	}

}
