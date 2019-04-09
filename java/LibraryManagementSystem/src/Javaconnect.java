import java.sql.*;
import javax.swing.*;
public class Javaconnect extends connect implements set_sql{
public Connection connecrDb()
{
	try {
		Class.forName("org.sqlite.JDBC");
		Connection conn=DriverManager.getConnection("jdbc:sqlite:D:\\java\\LibraryManagementSystem\\Library.sqlite");
		return conn;
	}
	catch(Exception e)
	{
		JOptionPane.showMessageDialog(null, e);
		return null;
	}
}
public String setsql(String sql)
{
	return sql;
}
}


abstract class connect{
	Connection conn;
	ResultSet rs;
	PreparedStatement pst;
	abstract public Connection connecrDb();
}
 
interface  set_sql
{
	public String setsql(String sql);
}





