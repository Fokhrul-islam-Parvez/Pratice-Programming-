import java.util.*;
public class UltraFastMathematician {
public static void main(String [] arg)
{
	Scanner sc=new Scanner (System.in);
	String s1=sc.nextLine();
	String s2=sc.nextLine();
	String s3="";
	int a=s1.length();
	for(int i=0;i<a;i++)
	{
		if(s1.charAt(i)==s2.charAt(i))
			s3=s3+'0';
		else
			s3=s3+'1';
	}
	System.out.println(s3);
}
}