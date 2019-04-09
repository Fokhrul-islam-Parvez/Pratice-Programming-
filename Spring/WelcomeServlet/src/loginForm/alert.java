package loginForm;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.http.HttpServletResponse;

public class alert {

	public static void successAlert( HttpServletResponse response) throws IOException
	{
		 PrintWriter out = response.getWriter(); 
		 out.println("<script src=\"Alert/jquery.min.js\"></script>");
		 out.print("<script https:\"//cdnjs.cloudflare.com/ajax/libs/limonte-sweetalert2/7.29.2/sweetalert2.min.js\"> </script>");
		// out.println("<script src=\"Alert/sweetslert2.all.js\"></script>");
		 out.println("<script>");
		 out.println("$(document).reday(function(){");
		 out.println(" swal(\r\n" + 
		 		"  'Good job!',\r\n" + 
		 		"  'You clicked the button!',\r\n" + 
		 		"  'success'\r\n" + 
		 		")");
		 out.println("});");
		 out.println("</script>");
	}
}
