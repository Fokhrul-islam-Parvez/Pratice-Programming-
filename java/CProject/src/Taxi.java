import java.util.*;
public class Taxi {
	public static void main(String [] args)
	{
		Scanner sc=new Scanner(System.in);
		int n,i;
	    n=sc.nextInt();
	    int arr[]=new int[n];
	    int tot=0;
	    for(i=0;i<n;i++)
	    {
	      arr[i]=sc.nextInt();
	        tot=tot+arr[i];
	    }
	    int ca=tot/4;
	    if(tot%4!=0)
	        ca++;
	    System.out.println(ca);
	}
}
