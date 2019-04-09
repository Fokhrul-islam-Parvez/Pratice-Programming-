import java.util.*;
import java.io.*;
 class FileReadWriteClass {
 public static void main(String [] arg) throws Exception
 {
	 Scanner sc=new Scanner(System.in);
	 System.out.print("Name : ");
     String name=sc.nextLine();
    System.out.print("Birth day: ");
	 int birth=sc.nextInt();
	 FileWriter fw=new FileWriter("info.txt");
	 fw.write(name);
	 fw.write("\r\n");
	 fw.write(Integer.toString(birth));
	 fw.close();
	 FileReader fr= new FileReader("info.txt");
	 Scanner s =new Scanner(fr);
	 String value=null;
	 while(s.hasNext())
	 {
		 value=s.nextLine();
		 int len=value.length();
		 System.out.println( value + " Length = " + len );
	 }
 }
}
