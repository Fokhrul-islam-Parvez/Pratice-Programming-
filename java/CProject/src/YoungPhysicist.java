import java.util.*;
public class YoungPhysicist {
public static void main(String [] a)
{
	Scanner sc=new Scanner(System.in);
    int n;
    n=sc.nextInt();
    int p[]=new int[n];
    int i,j,to=0;
    for(i=0;i<n;i++)
    {
         for(j=0;j<3;j++)
         {
           p[j]=sc.nextInt();
             to=to+p[j];
         }
    }
    if(to==0)
       System.out.println("YES");
    else
    	System.out.println("NO");
}
}
