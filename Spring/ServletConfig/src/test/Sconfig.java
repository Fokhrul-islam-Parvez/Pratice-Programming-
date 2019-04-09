package test;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.*;

public class Sconfig extends GenericServlet {
	public int count;
	public void init(ServletConfig sc)
	{
		count=Integer.parseInt(sc.getInitParameter("count"));
	}
    public void service(ServletRequest request, ServletResponse response) 
    throws ServletException , IOException
    {
    	PrintWriter out=response.getWriter();
    	response.setContentType("text/html");
    	out.println("count value = "+count);
    	out.close();
    }
    public void destroy()
    {
    	
    }
	
}
