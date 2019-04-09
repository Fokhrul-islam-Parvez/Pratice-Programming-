import java.util.*;
public class WateringSystem {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt(),a=sc.nextInt(),d=sc.nextInt();
		Integer b[]=new Integer [n],i,j,k;
	    int t=0,t1;
	    for(i=0;i<n;i++)
	        {b[i]=sc.nextInt();
	         t=t+b[i];
	        }
	      int u=b[0];
	      b[0]=0;
	      Arrays.sort(b, Collections.reverseOrder());
	    for(i=0;i<n;i++)
	    {
	        t1=(a*u)/t;
	        if(t1>=d)
	        {
	           System.out.println(i);
	            break;
	        }
	        else
	            t=t-b[i];

	    }
	}

}
