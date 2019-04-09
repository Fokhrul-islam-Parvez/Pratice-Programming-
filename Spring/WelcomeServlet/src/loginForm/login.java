package loginForm;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

public class login extends HttpServlet {
	private static final long serialVersionUID = 1L;

	
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		//response.getWriter().append("Served at: ").append(request.getContextPath());
		
		response.setContentType("text/html");  
	    PrintWriter out = response.getWriter();  
	          
	    String n=request.getParameter("userName");  
	    String p=request.getParameter("userPass");  
	          
	    if(p.equals("12345")){  
	        RequestDispatcher rd=request.getRequestDispatcher("wc");  
	        alert.successAlert( response);
	        rd.forward(request, response);  
	        
	    }  
	    else{  
	        out.print("Sorry UserName or Password Error!</b>");  
	        RequestDispatcher rd=request.getRequestDispatcher("index.html");  
	        rd.include(request, response);  
	                      
	        }  
		
	}

	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		doGet(request, response);
	}

}
