import java.util.*;
public class LaraCroftAndtheNewGame {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt(),m=sc.nextInt(),k=sc.nextInt();
		int a=2,b,t=0,t2=0,t3,t4,c=0;
		if(k==0)
			{
			b=1;
			a=1;
			System.out.println(b+" "+a);
			return;
			}
		if(k<n)
		{
			b=k+1;
			a=1;
			System.out.println(b+" "+a);
			return;
		}
			b=n;
		k=k-n;
		while(k>0)
		{
			if(t==0 && c==0)
			{
				if(k<=(m-2))
				{
					a=a+k;
					k=0;
					break;
				}
				k=k-(m-2);
				a=a+(m-2);
				t=1;
				c=1;
				t2=0;
			}
			else if(t==1 && t2==0)
			{
				k=k-1;
				b=b-1;
				t2=1;
				if(c==0)
					t=0;

			}
			else
			{
				if(k<=(m-2))
				{
					a=a-k;
					k=0;
					break;
				}
				k=k-(m-2);
				a=a-(m-2);
				t2=0;
				c=0;
			}
		}
		System.out.println(b+" "+a);

	}

}
