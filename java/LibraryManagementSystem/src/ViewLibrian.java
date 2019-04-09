import java.io.*;
import java.util.*;
public class ViewLibrian {
	void view()
	{
		try {
			FileReader fw=new FileReader("Text1.txt");
			Scanner sc=new Scanner(fw);
			while(sc.hasNext())
			{
			String a=sc.nextLine(); 	
			System.out.println(a);
			fw.close();
			}
			fw.close();
		}catch(Exception e)
		{
			System.out.println("File not Found");
		}
		
		
	}

}
