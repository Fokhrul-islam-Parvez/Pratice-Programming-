import java.util.*;
public class BusToUdayland {
	public static void main(String [] arg)
	{
		StringBuffer sb=new StringBuffer();
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		String bs=sc.nextLine();
		String s[]=new String[n];
		for(int i=0;i<n;i++) {
			s[i]=sc.nextLine();
		}
		int cu=0;
		for(int i=0;i<n;i++)
		{
			 cu=0;
			for(int j=0;j<5;j++)
			{
				char c=s[i].charAt(j);
				if(c=='O')
				{
					cu++;
					if(cu==2)
					{
						sb.append(s[i]);
						sb.setCharAt(j, '+');
						sb.setCharAt(j-1, '+');
						s[i]=sb.toString();
						break;
					}
				}
				else
					cu=0;
			}
			if(cu==2)
				break;
		}
		if(cu==2)
		{
			System.out.println("YES");
			for(int i=0;i<n;i++)
				System.out.println(s[i]);
				
		}
		else
			System.out.println("NO");
	}

}
