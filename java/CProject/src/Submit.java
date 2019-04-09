import java.util.*;
public class Submit {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int c, n=sc.nextInt();
		int a[]=new int[n*2];
		for(int i=0;i<(n*2);i++)
			a[i]=sc.nextInt();
		for(int i=0;i<(n*2)-1;i++)
	    {
	        for(int j=0;j<(n*2)-1-i;j++)
	        {
	            if(a[j]<a[j+1])
	            {
	                c=a[j];
	                a[j]=a[j+1];
	                a[j+1]=c;
	            }
	        }
	    }
		c=0;
			int k=0;
		for(int i=0;i<(n*2)-1;i++)
		{
			
			if(a[i]==a[i+1] && a[i]!=k)
			{	c++;
			     k=a[i];
			}
		}
  System.out.println(c);
	}

}
