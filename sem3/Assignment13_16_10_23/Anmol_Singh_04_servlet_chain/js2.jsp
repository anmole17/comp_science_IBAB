<% int i;
int intArray[];    
intArray = new int[12];
String nu;
for(i=1; i<=12;i++){
nu="num"+i;
String s1=request.getParameter(nu);
intArray[i-1] = Integer.parseInt(s1);				
}
out.println("The numbers are");
for(i=0;i<12;i++){
out.print(intArray[i]+" ");
}
out.println("<br/>");
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
out.println("The Numbers in Ascending order:");	
for(i=0; i<12; i++)
{
out.print(intArray[i]+" ");
}
%>

