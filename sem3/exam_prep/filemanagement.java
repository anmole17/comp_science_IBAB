// check how many times word exist in a file
try{
FileInputStream fis=new FileInputStream("/opt/tomcat/webapps/myAPP/src/q1.txt");
i=0;    
while((i=fis.read())!=-1){    
file=file+Character.toString((char)i);    
}
fis.close();
}catch(Exception e){p1.println(e);} 
p1.println(file.split(str1, -1).length-1);