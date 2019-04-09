import java.util.*;
public class LuckyDivision {
	public static void main(String [] args)
	{
		Scanner sc =new Scanner (System.in);
		int n=sc.nextInt();
		int d=0,p=0;
		for(int i=4;i<n+1;i++)
		{
			String s=Integer.toString(i);
			int a=s.length();
			for(int j=0;j<a;j++)
			{
				if(((s.charAt(j))!='4') && ((s.charAt(j))!='7') ){
					d=1;
					break;
				}	
			}
			if(d==0)
			{
				int a2=Integer.parseInt(s); 
				if(n%a2==0)
				{
					p=1;
					break;
				}
					
			}
			d=0;
		}
		if(p==1)
			System.out.print("YES");
		else
			System.out.print("NO");
			
	}
 
}
