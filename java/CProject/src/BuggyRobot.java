import java.util.*;
public class BuggyRobot {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		String s1=sc.nextLine();
		String s=sc.nextLine();
		int a=0,b=0,k=0,t=0;
		for(int i=0;i<n;i++)
		{
			char c=s.charAt(i);
			if(c=='U')
				b++;
			else if(c=='D')
				b--;
			else if(c=='L')
				a--;
			else
				a++;
			k++;
			if(a==0 && b==0)
			{
					if(t<k)
					    t=k;
					k=0;
					
			}
				
		}
		System.out.println(t);
	}

}
