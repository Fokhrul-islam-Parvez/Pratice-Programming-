package stringMethodPackage;

public class StringMethodClass {
	public static void main(String [] args){
		String s1="Mother";
		String s2="Mother";
		String s3="Mother";
		if(s1==s2)
			System.out.println("S1==S2");
		if(s1==s2)
			System.out.println("S1==S2");
		if(s2==s3)
			System.out.println("S2==S3");
		if(s1==s3)
			System.out.println("S1==S3");
		if(s1.equals(s2))
			System.out.println("S1==S2");
		if(s1==s2)
			System.out.println("S1==S2");
		if(s2==s3)
			System.out.println("S2==S3");
		if("Mother".equals("Mother"))
			System.out.println("S1==S2");
		String s4="mother";
		String s5=s4.toUpperCase();
		System.out.println(s5);
		String s6="parvez khan".toUpperCase();
		System.out.println(s6);
		String s7="PARVEZ KHAN".toLowerCase();
		System.out.println(s7);
		System.out.println("What is the difference of main string between this method".trim());
	}
	

}
