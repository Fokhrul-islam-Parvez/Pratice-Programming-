import java.util.*;
public class WordCapitalization {
public static void main(String [] arg)
{
	Scanner sc=new Scanner(System.in);
	String s=sc.nextLine();
	int ln=s.length();
	String s2="";
	for(int i=0;i<ln;i++)
	{
		char a=s.charAt(i);
		s2=s2+a;
		if(i==0)
			s2=s2.toUpperCase();
	}
	System.out.println(s2);
	
}
}
