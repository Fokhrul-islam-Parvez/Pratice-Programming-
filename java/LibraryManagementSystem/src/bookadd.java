import java.io.File;
import java.io.FileWriter;

public class bookadd {
	String cno;
	String nam ;
	String author;
	String publ;
	String qunt;
	bookadd(String cno,String nam ,String author,String publ,String qunt)
	{
		this.cno=cno;
		this. nam=nam ;
		this.author=author;
		this.publ=publ;
		this.qunt=qunt;
	}

	public void savebook(){
		try{
			File f = new File("Text2.txt");
			FileWriter fw = new FileWriter(f,true);
			fw.write(cno+" "+nam+" "+" "+author+" "+publ+" "+qunt);
			fw.write("\r\n");
			fw.close();
			
		}catch(Exception e){
			
			
		}
	}
}
