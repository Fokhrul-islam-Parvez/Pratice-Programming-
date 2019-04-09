package test;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

public class loginServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;

	public void doPost(HttpServletRequest request, HttpServletResponse response) throws IOException,ServletException
	{
		response.setContentType("text/html");
		PrintWriter out=response.getWriter(); 
		request.getRequestDispatcher("link.html").include(request, response);
		String name=request.getParameter("userName");
		String password=request.getParameter("userPassword");
		
		if(password.equals("12345"))
		{
			out.println("<h1>"+"welcome "+name+"<h1>");
			HttpSession session=request.getSession();
			session.setAttribute("uname", name);
		}
		else
		{
			out.println("<br><br>");
			out.print("Sorry, username or password error!");  
            request.getRequestDispatcher("login.html").include(request, response);  

		}
		out.close();
		
	}

}
