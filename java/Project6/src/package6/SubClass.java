package package6;

public class SubClass extends SupeeClass {
	int a;
	String s1;
	SubClass(int a, int a1, String s2, String s1){
		this.a=a;
		this.s1=s1;
		super.a=a1;
		super.s1=s2;
		
	}
	void print(){
		System.out.println("Super Class " + s1 +" "+ a);
	}
	void disp(){
		super.print();
		print();
	}
}
