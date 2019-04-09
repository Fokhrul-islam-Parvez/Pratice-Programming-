package vector;
import java.util.*;
public class Wrapper {
	public static void main(String [] ar){
		Vector v = new Vector();
		v.addElement("Parvez");
	//	System.out.println(v.elementAt(0));
		int i=v.size();
	//	System.out.println(i);
		v.addElement("Saru");
	//	System.out.println(v.elementAt(1));
		v.addElement(545);
	//	System.out.println(v.elementAt(2));
		v.set(2,"mun");
		//System.out.println(v.elementAt(2));
		v.insertElementAt("Inder", 3);
		for(int ij=0;ij<v.size();ij++)
		System.out.println(v.elementAt(ij));
		String s;
		Scanner sc=new Scanner(System.in);
		s=Integer.toString(sc.nextInt());
		System.out.println(s);
	}

}
