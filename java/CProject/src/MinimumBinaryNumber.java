import java.util.*;
public class MinimumBinaryNumber {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt(),o=0;
		String s1=sc.nextLine();
		String s=sc.nextLine(),s2="";
		for(int i=0;i<n;i++)
		{
			char c=s.charAt(i);
			if(c=='1')
				o++;
			else
				s2=s2+c;
		}
		if(o!=0)
		System.out.println("1"+s2);
		else
			System.out.println("0");
			
	}

}
