import java.util.*;
public class StringTask {
public static void main(String [] arg)
{
	Scanner sc=new Scanner(System.in);
	String s=new String();
	String s2=new String();
	s=sc.nextLine();
	s=s.toLowerCase();
	int l=s.length();
	for(int i=0;i<l;i++)
	{
		char a=s.charAt(i);
		if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='y')
		{
			s2=s2+"";
		}
		else
		{
			s2=s2+'.'+ a;
		}
	}
	System.out.println(s2);
}
}
