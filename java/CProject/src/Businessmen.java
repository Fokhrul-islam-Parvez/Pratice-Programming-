import java.util.*;
public class Businessmen {
	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
	    int ai[]=new int [n];
	    int xi[]=new int [n];
	   for(int i=0;i<n;i++)
	   {
		   ai[i]=sc.nextInt();
		   xi[i]=sc.nextInt();
	   }
	   int m=sc.nextInt();
	    int bi[]=new int [m];
	    int yi[]=new int [m];
	   for(int i=0;i<m;i++)
	   {
		   bi[i]=sc.nextInt();
		   yi[i]=sc.nextInt();
	   }
	   int k=0,t=0;
	   for(int i=0;i<n-1;i++)
	   {
		   for(int j=0;j<n-i-1;j++)
		   {
			   if(xi[j]<xi[j+1])
			   {
				   k=ai[j+1];
				   t=xi[j+1];
				   ai[j+1]=ai[j];
				   xi[j+1]=xi[j];
				   ai[j]=k;
				   xi[j]=t;
				   
			   }
		   }
	   }
	   k=0;
	   t=0;
	   for(int i=0;i<m-1;i++)
	   {
		   for(int j=0;j<m-i-1;j++)
		   {
			   if(yi[j]<yi[j+1])
			   {
				   k=bi[j+1];
				   t=yi[j+1];
				   bi[j+1]=bi[j];
				   yi[j+1]=yi[j];
				   bi[j]=k;
				   yi[j]=t;
				   
			   }
		   }
	   }
	   
//	   for(int i=0;i<n;i++)
//	   {
//		   for(int j=0;j<m;j++)
//		    if(ai[i]==bi[j])
//		   {
//			   if(xi[i]<yi[j])
//				   xi[i]=0;
//			   else
//				   yi[j]=0;
//		   }
//		   
//	   }
	   long to=0;
	   for(int i=0;i<n;i++)
	   {
		   to=to+xi[i];
	   }
	   for(int i=0;i<m;i++)
	   {
		   to=to+yi[i];
	   }
	   for(int i=0;i<n;i++)
	   {
		   if(yi[xi[i]]<xi[i])
		to=to+xi[i];
	   }
	    System.out.println(to);
	}

}
