import java.util.*;
public class Antonandcurrencyyoualknow {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String s=sc.nextLine();
		int l=s.length();
		int a=0,k=0;
		int arr[]=new int[l];
		for(int i=0;i<l;i++)
		{
			char c=s.charAt(i);
			String s1=String.valueOf(c);
			int i1=Integer.parseInt(s1);
			arr[i]=i1;
		}
		for(int i=l-1;i>0;i--)
		{
			if(arr[i]%2!=0)
			{
				a=arr[i];
				for(int j=i-1;j>=0;j--)
				{
					if(arr[j]%2==0)
					{
						k=arr[j];
						arr[j]=a;
						arr[i]=k;
						i--;
						break;
					}
				}
			}
				
		}
		if(k!=0)
			for(int i=0;i<l;i++) {
			System.out.print(arr[i]);
			if(i==l-1)
			System.out.println();
			}
			else
				System.out.println("-1");
		
	}

}