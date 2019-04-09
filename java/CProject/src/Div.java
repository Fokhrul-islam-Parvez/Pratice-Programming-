import java.util.*;
public class Div {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String s=sc.nextLine();
		int a=s.length(),k=0,t=0;
		for(int i=0;i<a;i++)
		{
			char c=s.charAt(i);
			if(c=='1')
				{
					k=1;
				}
			if(k==1)
			{
				if(c=='0')
					t++;
				if(t==6) {
					System.out.println("yes");
					break;
				}
			}
		}
		if(t<6)
			System.out.println("no");
	}

}
