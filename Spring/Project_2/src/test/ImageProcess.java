package test;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.sql.Blob;

public class ImageProcess {

	public static FileInputStream insertImage( String fileName) throws FileNotFoundException
	{
		File f= new File(fileName);
		FileInputStream fis = new FileInputStream(f);
		return fis;
	}
}
