import java.io.*;
public class linfoSaveFile {
	 String name,id,password,email,address,city,phn;
	linfoSaveFile(String name,String id,String password,String email,String address,String city,String phn){
		this.name=name;
		this.id=id;
		this.password=password;
		this.email=email;
		this.address=address;
		this.city=city;
		this.phn=phn;
	}
	public void saveFile(){
		try{
			File f = new File("Text1.txt");
			FileWriter fw = new FileWriter(f,true);
			fw.write(name+" "+id+" "+" "+password+" "+email+" "+address+" "+" "+city+" "+phn);
			fw.write("\r\n");
			fw.close();
			
		}catch(Exception e){
			
			
		}
	}

}
