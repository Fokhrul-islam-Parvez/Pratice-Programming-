import java.util.*;
public class Problems_1 {
	static int n,ans;
	static int a[][];
	static  int call(int b,int i,int j)
	{
		int j1=0,j2=0;
		if(j==0)
		{
			j1=1;
			j2=2;
		}
		if(j==1)
		{
			j1=0;
			j2=2;
		}
		if(j==2)
		{
			j1=1;
			j2=0;
		}
		
		

			if(i>-1)
	ans=ans+Math.min(call(a[Math.abs(i-1)][Math.abs(j1)],i-1,j1),call(a[Math.abs(i-1)][Math.abs(j2)],i-1,j2));	
		//return ans;
	return a[i][j];
	}
	public static void main(String [] args)
	{
        ans=0;
		Scanner sc=new Scanner(System.in);
		n=sc.nextInt();
		a=new int[n][3] ;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<3;j++)
			{
				a[i][j]=sc.nextInt();
			}
		}
		System.out.println(call(a[n-1][3-1],n-1,3-1));
	}

}
