import java.util.*;
public class RomaAndLuckyNumbers {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int k=sc.nextInt();
		int cu=0;
		String s1=sc.nextLine();
		for(int i=0;i<n;i++)
		{
			String s=sc.nextLine();
			if(s.length()<=k)
			{
				cu++;
			for(int j=0;j<s.length();j++)
			{
				char c=s.charAt(j);
				if(c!='4' || c!='7')
				{
					c--;
					break;
				}
			}
			}
		}
			System.out.println(cu);
	}

}
