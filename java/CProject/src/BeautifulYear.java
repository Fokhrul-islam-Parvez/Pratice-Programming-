import java.util.*;
public class BeautifulYear {
public static void main(String args[])
{
	Scanner sc=new Scanner(System.in);
	int x=1, num=sc.nextInt();
	if(1000<=num && num<=9000) {
	while(x==1) {
		num++;
	String s1=Integer.toString(num);
	int a=s1.length();
   int c1=(int)s1.charAt(0);
   int c2=(int)s1.charAt(1);
   int c3=(int)s1.charAt(2);
   int c4=(int)s1.charAt(3);
	if(c1 != c2 && c1!=c3 && c1!=c4)
	{
		if(c2 != c3 && c2!=c4)
		{
			if(c3!=c4)
			{
				System.out.println(num);
				break;
			}
		}
	}
	}
	}
}
}
