import java.util.*;
public class LittleElephantAndBits {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String s1="", s=sc.nextLine();
		int j=1, a=s.length();
		for(int i=0;i<a;i++)
		{
			char c=s.charAt(i);
			if(c=='0')
			{
				j=i;
				break;
			}
		}
		s1=s.substring(0,j);
		s1=s1+s.substring(j+1,a);
		System.out.println(s1);
	}
}
