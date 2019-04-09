package inputPackage2;
import java.io.*;
public class InputClass2 {
	public static void main(String [] ar) throws IOException
	{
		InputStreamReader IN= new InputStreamReader(System.in);
		BufferedReader BR= new BufferedReader (IN);
		String s;
		System.out.print("Enter your String: ");
		s=BR.readLine();
		System.out.println(s);
	}

}
