import java.util.*;
public class HajjEAkbar {
public static void main(String []arg)
{
	Scanner sc=new Scanner(System.in);
	int x=0;
	while(x>-1) {
		x++;
	String a=sc.nextLine();
	if(a.equals("*"))
	{
		break;
	}
	if(a.equals("Hajj"))
		System.out.println("Case "+x+": "+"Hajj-e-Akbar");
	if(a.equals("Umrah"))
	{
		System.out.println("Case "+x+": "+"Hajj-e-Asghar");
	}
	}
	
	
}
}
