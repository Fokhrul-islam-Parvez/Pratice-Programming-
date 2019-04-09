package SampleGETandPOST;

import javax.servlet.http.*;  
import javax.servlet.*;  
import java.io.*;
public class DemoServlet extends HttpServlet{  
public void doGet(HttpServletRequest req,HttpServletResponse res)  
throws ServletException,IOException  
{  
res.setContentType("text/html");//setting the content type  
PrintWriter pw=res.getWriter();//get the stream to write the data  
 
String name=req.getParameter("name");//will return value  
pw.println("Welcome "+name);  
  
pw.close();//closing the stream  
}}  