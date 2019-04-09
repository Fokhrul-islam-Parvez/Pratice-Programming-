package lab2;
public class java3 {
	static String printinf(int a , int b){
		int i=a;
		int j=b;
		int sum=i+j;
		if(sum==20)
		return "Yes";
		else
		return "No";
	}
	public static void main(String [] args){
		String sum=printinf(10,10);
		System.out.println(sum);
	}
}