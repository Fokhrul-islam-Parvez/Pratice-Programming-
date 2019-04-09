import java.util.*;
public class AntonAndLetters {
	public static void main(String [] args)
	{
		Scanner sc=new Scanner(System.in);
		String s=sc.nextLine();
		int b[]=new int[1000];
		int j=0,p=0;
		if(s.length()>2) {
			p=1;
       for(int i=1;i<s.length();i=i+3)
       {
    	   int a =(int) s.charAt(i);
    	   b[j]=a;
    	   j++;
       }
       
       for(int k=0;k<j;k++)
       {
    	   for(int l=0;l<j-k-1;l++)
    	   {
    		   if(b[l]>b[l+1])
    		   {
    			  int  c=b[l];
    			   b[l]=b[l+1];
    			   b[l+1]=c;
    		   }
    	   }
       }
       
       for(int i=0;i<j-1;i++)
       {
    	   if(b[i]!=b[i+1])
    		   p++;
       }
		}
       System.out.println(p);
	}

}
