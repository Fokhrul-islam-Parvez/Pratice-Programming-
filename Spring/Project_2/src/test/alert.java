package test;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.http.HttpServletResponse;

public class alert {

	public void successAlert( HttpServletResponse response) throws IOException
	{
		 PrintWriter out = response.getWriter(); 
		 out.println("<script src='https://ajax.googleapis.com/ajax/libs/jquery/3.3.1/jquery.min.js'></script>");
		 out.println("<script src='https://cdnjs.cloudflare.com/ajax/libs/limonte-sweetalert2/7.29.2/sweetalert2.all.js'></script>");
		 out.println("<script>");
		 out.println("$(document).ready(function(){");
		 out.println( "swal ('Good job!','You clicked the button!','success');");
		 out.println("});");
		 out.println("</script>");
    }
}