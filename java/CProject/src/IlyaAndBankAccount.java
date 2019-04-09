import java.util.*;
public class IlyaAndBankAccount {
public static void main(String [] arg)
{
	Scanner sc=new Scanner(System.in);
	int ab=sc.nextInt();
	int num;
	String a1="";
	if(ab<0) {
	String a5="", a6="", a=Integer.toString(ab);
	int k=a.length();
	byte b[]=a.getBytes();
		for(int i=0;i<k;i++) {
			if(i==k-2)
			{
				a5=a5+a.charAt(i);
				int b1=Integer.parseInt(a5);
				a6=a6+a.charAt(i+1);
				int b2=Integer.parseInt(a6);
				if(k==3 && b2==0)
					a1="";
				if(b1>b2)
					a1=a1+a.charAt(i+1);
				else
					a1=a1+a.charAt(i);
			break;
			}
			else
			a1=a1+a.charAt(i);
		}
	System.out.println(a1);
	}
  else
	System.out.println(ab);
}
}
