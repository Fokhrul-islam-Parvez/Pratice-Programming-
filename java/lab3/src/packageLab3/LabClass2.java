package packageLab3;

public class LabClass2 {
	public static double returnType(int a,int m){
		if(m>=5){
		if(a>=2000)
			return (a*5)/100;
		else
			return (a*1)/100;
		}
		else{
			return (a*1)/100;
		}
		
	}
	public static void main(String [] args){
		System.out.println(returnType(2000,7));
	}

}
