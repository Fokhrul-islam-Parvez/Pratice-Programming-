package encapsulationPackage;

public class EncapsulationClass {

	private int a;
	private String name;
	private double age;
	public void paru(int a, String name, double age){
		this.a=a;
		this.name=name;
		this.age=age;
		System.out.println(this.name);
		System.out.println(this.a);
		System.out.println(this.age);
	}
}
