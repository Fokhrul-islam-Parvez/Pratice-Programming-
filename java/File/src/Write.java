import java.io.*;
import java.util.*;
public class Write {
public static void main(String [] args){
	try{
		File f = new File("Text1.txt");
		FileWriter fw = new FileWriter(f);
		fw.write(" My namre is Srk");
		fw.close();
		
	}catch(Exception e){
		
		
	}
}
}
