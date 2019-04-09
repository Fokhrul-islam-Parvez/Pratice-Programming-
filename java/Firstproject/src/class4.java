
public class class4 {
	public static void main(String [] args){
		class5 [] student;
        student=new class5[5];
        student[0]=new class5();
        student[0].age=21;
        student[0].name="Parvez Khan";
        student[0].studen();
        parvez1 student1= new parvez1();
        System.out.println("Student1");
        student1.x=20;
        parvez1.y=40;
        student1.print();
        parvez1 student2= new parvez1();
        System.out.println("Student2");
        student2.x=40;
        //student2.y=90;
        student2.print();
        parvez1 student3= new parvez1();
        System.out.println("Student3");
        student3.x=50;
       // student3.y=60;
        student3.print(); 
        System.out.println("Student1");
        student1.print();
        System.out.println("Student2");
        student2.print();
        System.out.println(parvez1.z);
        parvez1.print2();
	}
	
}
class class5{
	int age;
	String name;
	void studen(){
		System.out.println(name+" \n" + age);
	}
}
class parvez1{
	public static int y;
	public static int z=28;
	int x;
	public void print(){
		System.out.println(x);
		System.out.println(y);
	}
	public static void print2(){
		System.out.println("Hello Bangladesh");
	}
}