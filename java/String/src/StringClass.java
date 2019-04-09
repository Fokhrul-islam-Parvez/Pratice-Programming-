
public class StringClass {
	public static void main(String args []){
	//		String s1=new String("Bangladesh is a wonderful Country");
//		String s6=new String("Bangladesh is a WOnderful Country");
//		int i=s1.length();
//		System.out.println(i); 
//		StringBuffer sb1=new StringBuffer("parvez Khan");
//		String s2=sb1.toString();
//		System.out.println(s2);
//		char s3=s1.charAt(5);
//		System.out.println(s3);
//		int i1=sb1.indexOf("Khan");
//		System.out.println(i1);
//		sb1.setCharAt(5,'-');
//		System.out.println(sb1);
//        String s4= s2.toLowerCase();
//        System.out.println(s4);
//        String s5=s2.toUpperCase();
//        System.out.println(s5);
//        sb1=sb1.reverse();
//        System.out.println(sb1);
//        sb1=sb1.reverse();
//        System.out.println(sb1);
//        int i3=s1.compareTo(s6);
//        System.out.println(i3);
//        boolean i5=s1.equalsIgnoreCase(s6);
//        System.out.println(i5);
//        String s7=s1.concat(" \n"+s2);
//        System.out.println(s7);
//        StringBuffer b=new StringBuffer("LOVE");
//       StringBuffer s8= sb1.insert(6,b);
//       System.out.println(s8);
//       String s9 = s1.substring(7) ;
//       System.out.println(s9);
//       String s10 = s1.substring(7,20) ;
//       System.out.println(s10);
//      String s11= s2.replace("Khan","Munmun");
//      System.out.println(s11);
//      int b='a';
//      int a='A';
//       a=a-64;
       
       
//       System.out.println(a+"  "+b);
//      char c=(char)(a+64);
//      System.out.println(c+"  "+b);
//      
//      int key1=5;
//      char c;
//      String input1="fuuqj";
//      input1=input1.toUpperCase();
//      String s2="";
//		for(int i=0;i<input1.length();i++)
//		{
//			c=input1.charAt(i);
//			int b=c,d=0;
//			b=b-64;
//			System.out.println(c+"  "+b);
//			b=b-key1;
//			System.out.println(c+"  "+b);
//			if(b==-26 || b==0)
//				b=26;
//			else if(0>b && b>-26)
//			{
//				b=b+26;
//			}
//			else if(b<-26)
//			{
//				d=(b/26);
//				d=26*(d+1);
//				d=b+d;
//				b=d;
//			}
//			b=b+64;
//			char cc=(char)b;
//			s2=s2+cc;
//			
//		}
//		
		int a=' ';
		String s="par veZ";
		for(int i=0;i<s.length();i++)
		{
			char c=s.charAt(i);
			
			a=c;
			System.out.println(a+" ");
		}
		char c='0';
		int k=c;
		k=k-48;
		System.out.println(k);
		k++;
		System.out.println(k);
		int az=(1629+10)%26;
		az='I';
		az=az-64;
		az=az+1665;
		az=az%26;
		az=az+64;
		c=(char)az;
		c=(char)90;
		System.out.println("az=="+az+"c=="+c);
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
	}

}
