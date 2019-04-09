import java.util.*;
public class TeamOlympiad {
public static void main(String [] arg)
{
	Scanner sc=new Scanner(System.in);
	int n,i;
    n=sc.nextInt();
    int a[]=new int[n],b1=0,b2=0,b3=0;
    for(i=0;i<n;i++){
     a[i]=sc.nextInt();
        if(a[i]==1)
            b1++;
        if(a[i]==2)
            b2++;
        if(a[i]==3)
            b3++;
    }
    int mm=Math.min(b1, b2);
    int m=Math.min(mm, b3);
    if(m==0)
    	System.out.println(m);
    else
    {
    	System.out.println(m);
    	for(i=0;i<m;i++)
    	{
    		for(int j=0;j<n;j++)
    		{
    			if(a[j]==1)
    			{
    				System.out.print(j+1+" ");
    				a[j]=0;
    				break;
    			}
    			
    		}
    		for(int j=0;j<n;j++)
    		{
    			if(a[j]==2)
    			{
    				System.out.print(j+1+" ");
    				a[j]=0;
    				break;
    			}
    			
    		}
    		for(int j=0;j<n;j++)
    		{
    			if(a[j]==3)
    			{
    				System.out.print(j+1+" ");
    				a[j]=0;
    				break;
    			}
    			
    		}
    		System.out.print("\n");
    	}
    }
}
}
