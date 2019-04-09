package StringPackage;

public class StringClass {
	public static void main(String [] args){
		char chararray[]={'a','b','c','d','e','f','g','h','i','j','k'};
		String test=String.copyValueOf(chararray,3,2);
		System.out.println(test);
		String test2=String.copyValueOf(chararray);
		System.out.println(test2);
		String test3= "Good By Bangladesh";
		char c[]=test3.toCharArray();
		for(int i=0;i<c.length;i++)
			System.out.print(c[i]+ "  ");
		System.out.println("\n" +c[6]+ "  ");
		System.out.println(test3);
		
		
		
		byte b[]=test3.getBytes();
		for(int j=0;j<b.length;j++)
			System.out.print(b[j]+ "  ");
		System.out.println(" \n" +b.length);
	}

}
