<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
    <%@ page import="java.sql.Connection"%>
 <%@ page import="java.sql.ResultSet"%>
 <%@ page import="java.sql.Statement" %>
 <%@ page import="test.sessionCreate"%>
 <%@ page import="test.dbConnection"%>
 <%@ page import="java.sql.SQLException"%>
  <%@ page import="test.sessionCreate"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<title>Insert title here</title>
</head>
<body>
<%!Connection con = null;
Statement st = null;
ResultSet rs = null;
String userID="3f9c1de9-702a-4733-8de7-360e74ec6d87";
String databaseName="system";
String databasePassword="p@rvez1997";
String query="select * from USERREGISTRATION where ID='"+userID+"'";

%>
<% 

  dbConnection db=new dbConnection();
  con=db.setConnection(databaseName, databasePassword);
  st=db.CreatStatement(con);
  rs=db.ExecuteQuery(st, query);
  if(rs!=null)
  { 
	  rs.next();
	  out.println( rs);
	  out.println(rs.getString(2));
	  out.println(rs.getString(3));
	  out.println(rs.getString(4));
	  out.println(rs.getString(5));
	  out.println(rs.getString(6));
	  out.println(rs.getString(7));
	  out.println(rs.getString(8));
	  out.println(rs.getString(9));
  }
  //out.print("dsrtg");
 // out.println(rs.first());
  %>
</body>
</html>