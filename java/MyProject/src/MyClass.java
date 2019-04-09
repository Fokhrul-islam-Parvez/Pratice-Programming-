
public class MyClass {
	String  name;
	int age;
	double height;
	MyClass(){
		name="Khan";
		age=30;
		height=6.00;
		System.out.println(name);
		System.out.println(age);
		System.out.println(height);
	}
	MyClass(int x){
		name="Munmun";
		age=20;
		height=5.3;
		System.out.println(name);
		System.out.println(age);
		System.out.println(height);
	}
	MyClass(int x , double y){
		name="Apon Ahmed";
		age=6;
		height=3.6;
		System.out.println(name);
		System.out.println(age);
		System.out.println(height);
	}
	
	void eat()
	{
		System.out.println("Eating");
	}
	void sleep()
	{
		System.out.println("Sleeping");
	}
	void walk()
	{
		System.out.println("walking");
	}
	
	public static void main(String[] args) {
		MyClass Parvez;
		Parvez= new MyClass();
		MyClass Munmun;
		Munmun= new MyClass(1);
		MyClass Apon;
		Apon= new MyClass(1,33.6);
		Parvez.name="Parvez Khan";
		Parvez.age=21;
		Parvez.height= 5.11;
		System.out.println("Name "+Parvez.name);
		System.out.println("Age " +Parvez.age);
		System.out.println("Height " +Parvez.height);
	    Parvez.eat();
	    Parvez.sleep();
	    Parvez.walk();
		
	}
}
