package loginForm;

import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.InputStream;
import java.io.OutputStream;
import java.sql.Blob;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

public class image {

 public void insertBlob(String imageId, String fileName) {
   Connection conn = null;
   try {
     conn = getConnection();
     if (!fileName.equals("")) {
       PreparedStatement ps = conn.prepareStatement("INSERT INTO IMAGES VALUES(?, ?)");
       ps.setString(1, imageId);
       FileInputStream fis = new FileInputStream(fileName);
       ps.setBinaryStream(2, fis, fis.available());
       ps.execute();
       ps.close();
     } else {
       PreparedStatement ps = conn.prepareStatement("INSERT INTO IMAGES VALUES (?, empty_blob())");
       ps.setString(1, imageId);
       ps.execute();
       ps.close();

     }
     conn.close();
   } catch (Exception e) {
     e.printStackTrace();
   }
 }

 public void readBlob(String fileName) {
   Connection conn = null;
   try {
     conn = getConnection();
     Statement st = conn.createStatement();
     ResultSet rs = st.executeQuery("SELECT IMAGE FROM IMAGES");
     while (rs.next()) {
        // The following two lines can be replaced by
        // InputStream is = rs.getBinaryStream(1);
       Blob blob = rs.getBlob(1);
       InputStream is = blob.getBinaryStream();
       FileOutputStream fos = null;

       fos = new FileOutputStream("c:/TEMP/" + fileName);
       byte[] data = new byte[1024];
       int i = 0;
       while ((i = is.read(data)) != -1) {
         fos.write(data, 0, i);
       }
     }
     conn.close();

   } catch (Exception e) {
     e.printStackTrace();
   }
 }

 public void writeBlob(String fileName) {
   Connection conn = null;
   try {
     conn = getConnection();
     Statement st = conn.createStatement();
     ResultSet rs = st.executeQuery("SELECT IMAGE FROM IMAGES FOR UPDATE");
     while (rs.next()) {
       Blob blob = rs.getBlob(1);
       System.out.println(blob);
        OutputStream os = blob.setBinaryStream(1);
       FileInputStream fis = null;
       fis = new FileInputStream("c:/TEMP/" + fileName);
       byte[] data = new byte[1];
       int i;
       while ((i = fis.read(data)) != -1) {
         os.write(data, 0, i);
       }
       os.close();
       break;
     }
     conn.close();

   } catch (Exception e) {
     e.printStackTrace();
   }
 }

 private Connection getConnection() throws ClassNotFoundException, SQLException {
   Class.forName("oracle.jdbc.driver.OracleDriver");
   Connection conn = DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:ORCL", "scott", "tiger");
   return conn;
 }

 public static void main(String[] args) {
	 image blobTest = new image();
   blobTest.insertBlob("img1", "");
   blobTest.writeBlob("2.gif");

 }
}