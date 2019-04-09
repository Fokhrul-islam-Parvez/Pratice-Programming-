import java.util.*;
import java.math.*;
public class Egypt {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int a,b,c,x=1;
		int t,t1;
	    while(x==1)
		{
			a=sc.nextInt();
			b=sc.nextInt();
			c=sc.nextInt();
			if(a==0 || b==0 || c==0)
				break;
			t=(int) (Math.pow(a,2.0)+ Math.pow(b,2.0));
			t1= (int) Math.pow(c,2.0);
			if(t==t1)
				System.out.println("right");
			else
				System.out.println("wrong");
		}

	}

}
