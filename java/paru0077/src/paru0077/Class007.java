package paru0077;

public class Class007 {
	int a;
	char ch;
	Class007(int a, char ch){
		this.a=a;
		this.ch=ch;
	}
	void print(){
		System.out.println(a+"\n"+ch);
	}

}
class Class008 {
	public static void main(String[]arg){
		Class007 paru;
		paru= new Class007(12,'p');
		paru.print();
	}
}