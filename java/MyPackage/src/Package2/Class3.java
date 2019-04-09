package Package2;
import package1.class4;
public class Class3 extends class4 {
	public void printnewclass()
	{
		System.out.println(P1);
		System.out.println(P2);
		printclass2();
		
	}
	public static void main(String [] args){
      Class3 parvez;
      parvez = new Class3();
      parvez.printnewclass();
	}
}
