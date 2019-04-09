import java.util.*;
public class QueueAtTheSchool266B {
public static void main(String args [])
{
	Scanner sc=new Scanner(System.in);
	 int m,n,k=0,i,t;
	    m=sc.nextInt();
	    n=sc.nextInt();
	    char ar2[]=new char[m];
	    String s2=sc.nextLine();
        String s=sc.nextLine();
        char ar[]=s.toCharArray();
	     if(m!=1){
	    for(t=0;t<n;t++){
	    for(i=0;i<m-1;i++)
	    {
	        if(ar[i]=='B' && ar[i+1]=='G')
	            {
	                ar2[i]='G';
	                ar2[i+1]='B';
	                k=1;
	            }
	        else
	        {
	            if(k==0)
	            {
	                ar2[i]=ar[i];
	                 ar2[i+1]=ar[i+1];
	            }
	            else
	            {
	                ar2[i+1]=ar[i+1];
	            }
	        }
	    }
	    for(i=0;i<m;i++)
	        ar[i]=ar2[i];
	    }
	     }
	    if(m==1)
	       ar2[0]=ar[0];
	System.out.println(ar2);
}
}
