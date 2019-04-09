package lab4;

public class Student {
   int id;
   String name;
   double java;
   double algo;
   double calc_CGPA(){
	   double c1=(java*4+algo*4)/8;
	   return c1;
   }
}
class student1{
	public static void main(String [] arg){
	Student paru=new Student();
	paru.java=3.45;
	paru.algo=4.00;
	System.out.println(paru.calc_CGPA());
	}
}