import java.io.Console;
import java.io.Serializable;
import java.math.BigInteger;
import java.util.*;
public class HashmattheBraveWarrior {
	public static void main(String []ang)
	{
		Scanner sc=new Scanner(System.in);
    
	while(sc.hasNext()) 
	{
		BigInteger m=sc.nextBigInteger(); 
		BigInteger b=sc.nextBigInteger();
		System.out.println(m.subtract(b).abs());
	}
	}

}
