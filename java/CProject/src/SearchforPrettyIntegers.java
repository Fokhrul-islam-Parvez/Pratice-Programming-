import java.util.*;
public class SearchforPrettyIntegers {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		 int n=sc.nextInt(),m=sc.nextInt();
		    int a[]=new int[n];
		    int b[]=new int[m];
		    for(int i=0;i<n;i++)
		        a[i]=sc.nextInt();
		    for(int i=0;i<m;i++)
		       b[i]=sc.nextInt();
		    Arrays.sort(a);
		    Arrays.sort(b);
		    for(int i=0;i<n;i++)
		    {
		    	for(int j=0;j<m;j++)
		    	{
		    		if(a[i]==b[j])
		    			{
		    			System.out.println(a[i]);
		    			return;
		    			}
		    	}
		    }
		    if(a[0]<b[0])
		    	System.out.println(a[0]+""+b[0]);
		    else
		    	 System.out.println(b[0]+""+a[0]);
		    
	}

}
