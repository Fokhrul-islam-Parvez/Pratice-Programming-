package test;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.Filter;
import javax.servlet.FilterChain;
import javax.servlet.FilterConfig;
import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.ServletRequest;
import javax.servlet.ServletResponse;


public class Myfilter implements Filter {
    public Myfilter() {
    }
    public void init(FilterConfig fConfig) throws ServletException {
	}


	
	public void doFilter(ServletRequest request, ServletResponse response, FilterChain chain) throws IOException, ServletException {
		
		PrintWriter out=response.getWriter();
		String password=request.getParameter("password");
		if(password.equals("12345"))
			chain.doFilter(request, response);
		else
		{  
		    out.print("username or password error!");  
		    RequestDispatcher rd=request.getRequestDispatcher("index.html");  
		    rd.include(request, response);  
		    }  
	}
	public void destroy() {
	}

}
