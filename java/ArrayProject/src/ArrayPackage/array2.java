package ArrayPackage;
import java.util.*;
class a
{
	int am;
	a(int b)
	{
		am=b;
	}
}
public class array2 {
ArrayList<a> al;
ArrayList<a> p(ArrayList<a> al) {
//void print(ArrayList<a> al) {
	this.al=al;
    return al;
}
}
class Main
{
	public static void main(String [] arg)
	{
		a a1=new a(60);
		a a2=new a(70);
		a a3=new a(80);
		ArrayList<a> obj=new ArrayList<a>();
		obj.add(a1);
		obj.add(a2);
		obj.add(a3);
		array2 ali=new array2();
		ArrayList<a> ak=ali.p(obj);
	//	System.out.println(ak.am);

	for(a ae: ak)
	{
		System.out.println(ae.am);
	}
		
		
		
		
	}
}