
import java.io.*;
import java.util.*;
import jakarta.servlet.*;
import jakarta.servlet.http.*;
import jakarta.servlet.annotation.*;


@WebServlet("/Q5")

public class q5 extends HttpServlet
{	public long DeciToBin(int n) {

    long binNum = 0;
    int remainder, i = 1, step = 1;

    while (n!=0) {
      remainder = n % 2;
        n /= 2;
        binNum += remainder * i;
        i *= 10;
        
    }
    return binNum;
	}
	
	
	public void doGet(HttpServletRequest req1 , HttpServletResponse res1)throws IOException, ServletException
	{	PrintWriter p1 =res1.getWriter();
	int i;
		String bin1 = req1.getParameter("bin1");
		String bin2 = req1.getParameter("bin2");
		String bin3 = req1.getParameter("bin3");
		String bin4 = req1.getParameter("bin4");
		String bin5 = req1.getParameter("bin5");
		String bin6 = req1.getParameter("bin6");
		String bin7 = req1.getParameter("bin7");
		String bin8 = req1.getParameter("bin8");
		String bin9 = req1.getParameter("bin9");
		String bin10 = req1.getParameter("bin10");
		p1.println("<html><body>");
		p1.println("<h3>Binary nums:"+bin1+", "+bin2+", "+bin3+", "+bin4+", "+bin5+", "+bin6+", "+bin7+", "+bin8+", "+bin9+", "+bin10+"</h3>");
		String newbin1= bin1+bin2;
		String newbin2= bin3+bin4;
		String newbin3= bin5+bin6;
		String newbin4= bin7+bin8;
		String newbin5= bin9+bin10;
		p1.println("<h3>After concatenation:"+newbin1+", "+newbin2+", "+newbin3+", "+newbin4+", "+newbin5+"</h3>");
		
		Vector<Integer> vec = new Vector<Integer>();
		vec.add(Integer.parseInt(newbin1,2));
		vec.add(Integer.parseInt(newbin2,2));
		vec.add(Integer.parseInt(newbin3,2));
		vec.add(Integer.parseInt(newbin4,2));
		vec.add(Integer.parseInt(newbin5,2));
		p1.println("<h3>After conv to base10:"+vec+"</h3>");
		int len = vec.size();
		//for(i=0; i<len;i++){
		//	p1.print(vec.get(i)+",");
		//}
		//p1.println("</h3>");
		Collections.sort(vec);
		
		vec.remove(0); 
		p1.println("<h3>After removing:"+vec+"</h3>");
		//for(i=0; i<len;i++){
		//	p1.print(vec.get(i)+",");
		//}
		//p1.println("</h3>");
		
		Vector<Integer> vec2 = new Vector<Integer>();
		for(i=0; i<len;i++){
			vec2.add((vec.get(i)+18));
		}p1.println("<h3>After adding:"+vec2+"</h3>");
		Collections.sort(vec2);
		int len2 = vec2.size();
		
		p1.println("<h3>New Numbers Sorted after adding 18:"+vec2+"</h3>");
		//for(i=0; i<len2;i++){
		//	p1.print(vec2.get(i)+",");
		//}
		//p1.println("</h3>");
		p1.println("<h3>New Numbers Sorted conv to Binary: ");
		for(i=0; i<len2-1;i++){
			p1.print(DeciToBin(vec2.get(i))+",");
		}
		p1.println("</h3>");
		

}
};



