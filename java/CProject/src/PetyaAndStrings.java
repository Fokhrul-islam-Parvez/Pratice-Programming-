import java.util.*;
public class PetyaAndStrings {
public static void main(String [] args)
{
	Scanner sc=new Scanner(System.in);
	String s1=sc.nextLine();
	String s2=sc.nextLine();
	int a=s1.compareToIgnoreCase(s2);
	if(a<0)
		a=-1;
	if(a>0)
		a=1;
	System.out.print(a);
}
}
