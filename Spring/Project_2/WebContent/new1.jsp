 <%@ page import="java.sql.Connection"%>
 <%@ page import="java.sql.ResultSet"%>
 <%@ page import="java.sql.Statement" %>
 <%@ page import="test.sessionCreate"%>
 <%@ page import="test.dbConnection"%>
 <%@ page import="java.sql.SQLException"%>
  <%@ page import="test.sessionCreate"%>
  
  <%! String userID=null; %>
 <% sessionCreate check=new sessionCreate();
 userID=check.checkSession(request, response);
 out.println(check.checkSession(request, response));
 %>
   
 <%!Connection con = null;
 Statement st = null;
 ResultSet rs = null;
 String databaseName="system";
 String databasePassword="p@rvez1997";
 String query="select * from USERREGISTRATION where ID='"+userID+"'";
 String query2="select * from USER_ACADEMIC_QUELIFICATION where ID='"+userID+"'";
 String query3="select * from USER_CONTACT_INFORMATION where ID='"+userID+"'";
 String name="anything";
 String email="";
 String dateOfBirth="";
 String gender="";
 String religion="";
 String nationality="";
 String examTital="";
 String major="";
 String institute="";
 double result;
 int passYear;
 int duration;
 String mobile1="";
 String mobile2="";
 String mobile3="";
 String presentAddress="";
 String permanentAddress="";%>
  
  
  <%
  
  dbConnection db=new dbConnection();
  con=db.setConnection(databaseName, databasePassword);
  st=db.CreatStatement(con);
  rs=db.ExecuteQuery(st, query);
  if(rs!=null)
  {
	  try {
			 while(rs.next())
				{
				    out.println(rs.getString(2));
				    email = rs.getString(2);
					name=rs.getString(4)+" "+rs.getString(5);
					gender=rs.getString(6);
					religion=rs.getString(9);					
				}
		} catch (SQLException e) {
			
			e.printStackTrace();
		}
  }
  
  
  ResultSet rs2 = null;
  ResultSet rs3 = null;
  rs2=db.ExecuteQuery(st, query2);
  rs3=db.ExecuteQuery(st, query3);
   if(rs2!=null)
  {
	  try {
			 while(rs2.next())
				{
				   
			     examTital=rs2.getString(2);
				 major=rs2.getString(3);
				 institute=rs2.getString(4);
				 result=Double.parseDouble(rs2.getString(5));
				 passYear= Integer.parseInt(rs2.getString(6));
				 duration= Integer.parseInt(rs2.getString(7));
				}
		} catch (SQLException e) {
			
			e.printStackTrace();
		}
  }
  
   if(rs3!=null)
   {
 	  try {
 			 while(rs3.next())
 				{
 				   
 			     mobile1=rs3.getString(2);
 				 mobile2=rs3.getString(3);
 				 mobile3=rs3.getString(4);
 				presentAddress=(rs3.getString(5));
 				permanentAddress=(rs3.getString(6));
 				}
 		} catch (SQLException e) {
 			
 			e.printStackTrace();
 		}
   }
   
   out.println(name);
   
   %>
  
  
  
  