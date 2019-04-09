package test;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.http.Cookie;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

public class loginservlet extends HttpServlet {
	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;

	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		response.getWriter().append("Served at: ").append(request.getContextPath());

		response.setContentType("text/html");  
        PrintWriter out=response.getWriter();  
		out.print("<br><br>");

          RequestDispatcher rd=request.getRequestDispatcher("link.html");
          rd.include(request, response); 
        String name=request.getParameter("name");  
        String password=request.getParameter("password");
        if(password.equals("123"))
        {
        	out.println("Login Sucessfully");
        	Cookie ck=new Cookie("name",name);
        	response.addCookie(ck);
        }
        else
        {
        	 out.print("sorry, username or password error!");
        	 RequestDispatcher rdd=request.getRequestDispatcher("login.html");
             rdd.include(request, response);
        	
        }
	}

	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		doGet(request, response);
	}

}
