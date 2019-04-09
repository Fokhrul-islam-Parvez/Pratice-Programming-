package innerPackage;

public class InnerClass {
public static void main(String [] arg){
	OuterClass ou1;
	ou1= new OuterClass();
	ou1.a=67;
	ou1.print2();
	OuterClass.Inner in1;
	in1=ou1.new Inner();
	in1.print1(344);
	
}
}
class OuterClass{
	int a;
	class Inner{
		int b;
		void print1(int c){
			b=c;
			a=c;
			System.out.println(b);
			print2();
		}
	}
	void print2(){
		System.out.println(a);
	}
}