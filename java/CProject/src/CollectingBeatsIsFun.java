import java.util.*;
public class CollectingBeatsIsFun {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt(),a1;
		String s[]=new String[4];
		String s5=sc.nextLine();
		for(int i=0;i<4;i++)
			s[i]=sc.nextLine();
		int a[]= {0,0,0,0,0,0,0,0,0,0};
		for(int i=0;i<4;i++)
		{
			int l=s[i].length();
			for(int j=0;j<l;j++)
			{
				char c=s[i].charAt(j);
				if(c!='.')
				{ 
					a1=Character.getNumericValue(c);  
					a[a1]++;
				}
				
			}
		}
		a1=0;
		for(int i=0;i<10;i++)
		{
			if(a[i]>n*2)
			{
				System.out.println("NO");
				a1=0;
				break;
			}
			else
				a1=1;
				
		}
		if(a1==1)
			System.out.println("YES");
		
	}

}
