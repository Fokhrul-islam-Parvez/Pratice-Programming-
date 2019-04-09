import java.util.*;
public class BuildingPermutation {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n,i,j,s,c;
	    n=sc.nextInt();
	    int a[]=new int[n];
	    for(i=0;i<n;i++)
	    {
	        a[i]=sc.nextInt();
	    }
	     long int64_t,t=0,t1=0;
	    Arrays.sort(a);
	    for(i=0;i<n;i++)
	    {
	        t=((i+1)-a[i]);
	        if(t<0)
	        	t=t*(-1);
	        t1=t1+t;
	        
	    }
	    System.out.println(t1);
	}

}
