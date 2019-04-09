package inputoutput;
import java.util.*;
public class Input {
	public static void main(String [] a){
		Input2 call=new Input2();
		call.print();
		call.print1();
		call.print4();
		call.print3();
		
	}
		}

class Input2{
	void print(){
	Scanner name= new Scanner(System.in);
	System.out.print("Enter your String : ");
	String paru =name.nextLine();
	System.out.println(paru);
	}
	void print4(){
		Scanner name= new Scanner(System.in);
		System.out.print("Enter your double : ");
		double paru =name.nextDouble();
		System.out.println(paru);
		}
	void print1(){
		Scanner name= new Scanner(System.in);
		System.out.print("Enter your int : ");
		int paru =name.nextInt();
		System.out.println(paru);
		}
	
	void print3(){
		Scanner name= new Scanner(System.in);
		System.out.print("Enter your char : ");
		char paru =name.next().charAt(0);
		System.out.println(paru);
		}
}
