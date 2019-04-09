package test;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

public class profileServlet extends HttpServlet
{
	private static final long serialVersionUID = 1L;

	protected void doGet(HttpServletRequest request, HttpServletResponse response)throws ServletException, IOException
	{  
				response.setContentType("text/html");  
				PrintWriter out=response.getWriter();  
				request.getRequestDispatcher("link.html").include(request, response);  

				HttpSession session=request.getSession(false);  
				if(session!=null)
				{  
					String name=(String)session.getAttribute("uname");  
					out.println("<br><br>");
					out.print("Hello, "+name+" Welcome to Profile");  
				}  
				else
				{  
					out.print("<br><br><br>"+"Please login first"+"<br>");  
					request.getRequestDispatcher("login.html").include(request, response);  
				}
	}
}
