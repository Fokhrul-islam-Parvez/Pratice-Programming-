package inputPackage;
import java.io.*;
public class CharInput {
   
	public static void main(String [] args) //throws IOException 
	{
		char c;
		DataInputStream in =new DataInputStream(System.in);
		try{
			System.out.print("Enter your char: ");
			c=(char)System.in.read();
			System.out.println(c);
	}
		catch (Exception e) {}
	}
}
