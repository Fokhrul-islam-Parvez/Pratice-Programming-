package SampleGETandPOST;

import java.io.IOException;
import java.io.PrintWriter;
import java.util.Enumeration;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class GETPOSTservlet
 */
@WebServlet("/getpost")
public class GETPOSTservlet extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public GETPOSTservlet() {
        super();
        // TODO Auto-generated constructor stub
        
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		/*// TODO Auto-generated method stub
		//response.getWriter().append("Served at: ").append(request.getContextPath());
		//PrintWriter printWriter=response.getWriter();
		//printWriter.println("Welcome");
	//	String name=request.getParameter("name");
		//printWriter.println(name);
		
		PrintWriter out=response.getWriter();
		 Enumeration paramNames = request.getParameterNames();

	      while(paramNames.hasMoreElements()) {
	         String paramName = (String)paramNames.nextElement();
	         out.print("<tr><td>" + paramName + "</td>\n<td>");
	         String[] paramValues = request.getParameterValues(paramName);

	         out.println(paramValues.length);
	         
	         // Read single valued data
	         if (paramValues.length == 1) {
	            String paramValue = paramValues[0];
	            if (paramValue.length() == 0)
	               out.println("<i>No Value</i>");
	               else
	               out.println(paramValue);
	         } //else {
	            // Read multiple valued data
	           // out.println("<ul>");

	          //  for(int i = 0; i < paramValues.length; i++) {
	          //     out.println("<li>" + paramValues[i]);
	           // }
	        // }
	      }
	      
	      Enumeration headerNames = request.getHeaderNames();
	      while(headerNames.hasMoreElements())
	      {
	    	  String paraname=(String)headerNames.nextElement();
	    	  out.print(paraname);
	    	  String paravalues=request.getHeader(paraname);
	    	  out.println(paravalues);
	    	  out.println("\nnothing\n"+"<br>");
	      }*/
		
		 response.setContentType("text/html");  
		PrintWriter printWriter=response.getWriter();
		String username=request.getParameter("name");
		String userpassword=request.getParameter("password");
		
		if(userpassword.equals("p@rvez1997"))
		{
			RequestDispatcher rd=request.getRequestDispatcher("/index2.html");
			rd.forward(request, response);
		}
		 else{  
			 printWriter.print("Sorry UserName or Password Error!");  
		        RequestDispatcher rd=request.getRequestDispatcher("/index.html");  
		        rd.include(request, response);  
		                      
		        }  
		
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
