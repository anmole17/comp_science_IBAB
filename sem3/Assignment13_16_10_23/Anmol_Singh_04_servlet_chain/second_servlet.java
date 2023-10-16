import java.io.*;
import java.util.*;
import jakarta.servlet.*;
import jakarta.servlet.http.*;
import jakarta.servlet.annotation.*;

@WebServlet("/chain2")

public class second_servlet extends HttpServlet
{
	public void doGet(HttpServletRequest req1 , HttpServletResponse res1)throws IOException, ServletException
	{	int i;
		int intArray[];    
		intArray = new int[12];
		String nu;
		for(i=1; i<=12;i++){
		nu="num"+i;
		String s1 = req1.getParameter(nu);
		intArray[i-1] = Integer.parseInt(s1);				
		}
		PrintWriter p1 =res1.getWriter();
		p1.println("The numbers are");
		for(i=0;i<12;i++){
		p1.print(intArray[i]+" ");
		}
		p1.println(" ");
	int j,c;
	for(j=0; j<12; j++)
	{
		for(i=0; i<11; i++)
		{
			if(intArray[i]>intArray[i+1])
			{
				c=intArray[i];
				intArray[i]=intArray[i+1];
				intArray[i+1]=c;
			}
		}	
	}
	
	p1.println("The Numbers in Ascending order:");
	
	for(i=0; i<12; i++)
        {
                p1.print(intArray[i]+" ");
        }
	
		
		
		
	}
};
