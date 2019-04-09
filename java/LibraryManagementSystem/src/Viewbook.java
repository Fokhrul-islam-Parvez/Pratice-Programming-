import java.io.FileReader;
import java.util.Scanner;

public class Viewbook {
	void view()
	{
		try {
			FileReader fw=new FileReader("Text2.txt");
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
			System.out.println("Book not Found");
		}
		
		
	}

}
