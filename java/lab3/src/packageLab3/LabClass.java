package packageLab3;

public class LabClass {
	public static double returnType(int tkicpr, int opt){
		if(opt==1)
		{double a=(tkicpr*4*10)/100;
		return a;
		}
		else
		{
			double b=(tkicpr*4)-100;
			return b;
		}
	}
	public static void main(String [] args){
		System.out.println(returnType(450,1));
	}

}
