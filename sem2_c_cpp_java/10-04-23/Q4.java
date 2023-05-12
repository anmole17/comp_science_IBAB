// 4. Create a java library, which has a class with 4 methods to calculate square,cube,square root and cube root.
//No built in libraries should be used to achieve these .
//package Q4;
//public 
class Q4{
    public float square(float num){
        return (num*num);
    }
    
    public float cube(float num){
        return (num*num*num);
    }
    public float sqrt(float num){
		float ans=0;
		float i=num/2;
		while(i*i>num){
			i-=0.0001; 
			if (i*i==num){
				return i;
		}
		if(i*i>num*100){i=i/10;}
		}
		return (i);
	}

	public float cbrt(float num){
		float ans=0;
		float i=num/2;
		while(i*i*i>num){
			i-=0.00001; 
			if (i*i*i==num){
				return i;
		}
		if(i*i*i>num*1000){i=i/10;}
		}
		return (i);
	}
    
        
};
