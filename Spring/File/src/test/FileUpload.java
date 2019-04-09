package test;

import java.io.IOException;
import java.io.InputStream;
import java.io.PrintWriter;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.SQLException;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.Part;



@WebServlet("/FileUpload")
public class FileUpload extends HttpServlet {

	private static final long serialVersionUID = 1L;

	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		response.setContentType("text/html;charset=UTF-8");
        PrintWriter out = response.getWriter();
        
        
        InputStream inputStream = null;

        Part filePart = request.getPart("file");
        
        if (filePart != null) 
        {
            System.out.println(filePart.getName());
            System.out.println(filePart.getSize());
            System.out.println(filePart.getContentType());

            inputStream = filePart.getInputStream();
        }
        Connection con = null;
        try {
			con=setConnection("system", "p@rvez1997");
		} catch (ClassNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
        
        String sql ="insert into USER_IMAGE (ID , IMAGE) VALUES(?,?)"; //"INSERT INTO contacts (first_name, last_name, photo) values (?, ?, ?)";
        PreparedStatement statement = null;
		try {
			statement = con.prepareStatement(sql);
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
        try {
			statement.setString(1, "123456789");
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
        if (inputStream != null) 
        {
            try {
				statement.setBinaryStream(2, inputStream, (int) filePart.getSize());
			} catch (SQLException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
        }
        
        int row = 0;
		try {
			row = statement.executeUpdate();
		} catch (SQLException e1) {
			// TODO Auto-generated catch block
			e1.printStackTrace();
		}
        if (row > 0) 
        {
            out.println("File uploaded!!!");
            
            try {
				con.close();
			} catch (SQLException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
            
           
        }
        else
        {
            out.println("Couldn't upload your file!!!");
            
            try {
				con.close();
			} catch (SQLException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
            
          
        }    
      
	}


	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		doGet(request, response);
	}
	
	public Connection setConnection(String databaseName, String password) throws ClassNotFoundException, SQLException
	{
		Connection jdbcConnection = null;
		 if (jdbcConnection == null || jdbcConnection.isClosed()) 
		try {
			
			Class.forName("oracle.jdbc.driver.OracleDriver");
			jdbcConnection=DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:orcl", databaseName, password);
			 return jdbcConnection;
		} catch (SQLException e) {
			
			e.printStackTrace();
		}
		return null;
	}
}
