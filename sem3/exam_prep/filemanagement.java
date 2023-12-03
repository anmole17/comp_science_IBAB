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

// copy one file to 2
public void copy_2(FileInputStream fis, FileOutputStream fos1, FileOutputStream fos2){
        int i;
        try{
        while((i=fis.read())!=-1)
		{
			fos1.write((char)i);
            fos2.write((char)i);
		}
        }catch(Exception e1){System.out.println(e1);}
    }
public static void main(String args[])
	{
		 Q1 q = new Q1();
		try
		{// Make sure to have in1.txt and in2.txt ready with content beforehand
		FileInputStream fis1 =new FileInputStream("in1.txt"); 
		FileOutputStream fos1 = new FileOutputStream("out1_1.txt");
		FileOutputStream fos2 = new FileOutputStream("out1_2.txt");
		q.copy_2(fis1,fos1,fos2);
		}
		catch(Exception e1){System.out.println(e1);}
	}
// concatenate 3 files into one
public SequenceInputStream concat(
    FileInputStream fis1,
    FileInputStream fis2, 
    FileInputStream fis3){
        SequenceInputStream sis1 = new SequenceInputStream(fis1,fis2);
        SequenceInputStream sis2 = new SequenceInputStream(sis1,fis3);
		
        return sis2;
    
    }
    // in main
    FileInputStream fis1 = new FileInputStream(s1);
	FileInputStream fis2 = new FileInputStream(s2);
	FileInputStream fis3 = new FileInputStream(s3);
	
	int i;
	SequenceInputStream sis= q2.concat(fis1,fis2,fis3);

	while((i=sis.read())!=-1)
	{
		
        System.out.print((char)i);

	}
    // write into a file
    while((i=sis.read())!=-1)
	{
		fos1.write((char)i);
	}
///// revesrse a file
public String str_rev(FileInputStream fis){
        int i; 
        String s1=new String();
        try{
        while((i=fis.read())!=-1)
		{
			s1=Character.toString((char)i)+s1;
		}
        System.out.println("Reverse:\n"+s1);
        }catch(Exception e1){System.out.println(e1);}
        return s1;
    }
    try
		{// Make sure to have in1.txt ready with content beforehand
        FileInputStream fis =new FileInputStream("in1.txt"); 
		file_rev=q.str_rev(fis);
        fis.close();
        FileOutputStream fos =new FileOutputStream("in1.txt"); 
        byte [] b1 = file_rev.getBytes();
        fos.write(b1);
		}catch(Exception e1){System.out.println(e1);}
// string manipulation
String s3 = s1.toLowerCase();
String s2 = s1.toUpperCase();
String s2=s1.replace('L','m');// L is old, m is new char
// check if a string contains a substring
s1.contains("How")

// can be used to get index of all H or count humber of times H occurs
int pos = s1.indexOf('H');
		while (pos >= 0)
		{
		System.out.println(pos);
		pos=s1.indexOf('H',pos+1);
		}

// create substrings
s1.substring(1,4)

// filereader and write
try
		{
		FileWriter fwr1 = new FileWriter("out.txt");
		String s1;
		int cnt;
		Scanner sc1 = new Scanner(System.in);

		for(cnt=0;cnt<4;cnt++)
		{
			s1=sc1.nextLine();
			fwr1.write(s1+"\n");
		}

		fwr1.close();

		FileReader fr1 = new FileReader("out.txt");
		char [] a1 = new char [100]; 
		fr1.read(a1);
		System.out.println(a1);
		}catch(Exception e1){}
// Buffered reader
try
		{
		FileWriter fwr1 = new FileWriter("out.txt");
		String s1;
		int cnt;
		Scanner sc1 = new Scanner(System.in);

		for(cnt=0;cnt<4;cnt++)
		{
			s1=sc1.nextLine();
			fwr1.write(s1+"\n");
		}

		fwr1.close();

	BufferedReader fr1 = new BufferedReader(new FileReader("out.txt"));
		char [] a1 = new char [100];
	      	
	while((s1=fr1.readLine()) != null){
		System.out.println(s1);}
		}catch(Exception e1){}