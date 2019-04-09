package ReturnMethod;

public class ReturnString {
	public static void main(String [] args) {
		Human paru;
		paru=new Human();
		Human mun;
		mun=new Human();
		mun.name="Munmun";
		mun.age=21;
		//paru.name="Parvez";
		Human Parvez = paru.product (mun);
		System.out.println(Parvez.name);
		System.out.println(Parvez.age);
		System.out.println(Parvez.age2);
		new Human().print();
	}
}

class Human {
	String name;
	int age;
	int age2;
	public Human product ( Human mun) {
		this.name=mun.name; 
		this.age=mun.age; 
		Human men;
		men= new Human(); 
		men.name=this.name;
		men.age=this.age;
		return men;
	}
	 void print () {
		 int a ;
		 System.out.println(a);
			
		}
	
	}
	
