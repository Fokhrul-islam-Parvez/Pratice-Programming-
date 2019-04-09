import java.util.*;
public class Checkthestring {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String s=sc.nextLine();
		int aa=s.length();
		int a=0,b=0,c=0;
		for(int i=0;i<aa;i++)
		{
			char cc=s.charAt(i);
			if(cc=='a')
				a++;
			else if(cc=='b') {
				b++;
				if(a==0)
					{System.out.println("NO");
					return ;
					}
				
			}
			else if(cc=='c') {
				c++;
				if(a==0 || c==0)
					{System.out.println("NO");
					return;
					}
				
			}
			
		}
		if(c==a || c==b)
			System.out.println("YES");
		else
			System.out.println("NO");
	}

}
