package stringPackage;

public class StringClass {
	public static void main(String [] args){
	String s1="Parvez Khan is a King of his own world";
	int index1=s1.indexOf("Khan");
	if(index1==-1)
		System.out.println("This Character is not here");
	else
	System.out.println(index1);
	int index2=s1.lastIndexOf('K');
	if(index2==-1)
		System.out.println("This Character is not here");
	else
	System.out.println(index2);
	
	}

}
