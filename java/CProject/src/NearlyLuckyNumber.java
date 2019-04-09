import java.util.*;
public class NearlyLuckyNumber {
	public static void main(String [] args)
	{
		Scanner sc =new Scanner (System.in);
		int d=0;
			String s=sc.nextLine();
			int a=s.length();
			for(int j=0;j<a;j++)
			{
				if(((s.charAt(j))!='4') && ((s.charAt(j))!='7') ){
					d=1;
					break;
				}	
			 }
			if(s.compareTo("7")==0 || (s.compareTo("4")==0))
				d=1;
				
		if(d==0)
			System.out.println("YES");
		else
			System.out.println("NO");
   }
}
