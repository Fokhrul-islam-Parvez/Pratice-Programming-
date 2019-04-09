import java.util.Scanner;
public class AandBandChess {
	public static void main(String[] args) {
	Scanner sc=new Scanner(System.in);
	int b=0,w=0;
	char c[]=new char[8];
	for(int i=0;i<8;i++)
	{ 
		for(int j=0;j<8;j++)
		{
			c[j]=sc.next().charAt(0);
			//System.out.println(c[j]);
			if(c[j]=='Q')
                w=w+9;
            if(c[j]=='q')
                b=b+9;
            if(c[j]=='R')
                w=w+5;
            if(c[j]=='r')
                b=b+5;
            if(c[j]=='B')
                w=w+3;
            if(c[j]=='b')
                b=b+3;
            if(c[j]=='N')
                w=w+3;
            if(c[j]=='n')
                b=b+3;
            if(c[j]=='P')
                w=w+1;
            if(c[j]=='p')
                b=b+1;
		}
		System.out.println("GJUG\n");
	}

	 if(w>b)
	        System.out.println("White\n");
	    else if(w<b)
	    	System.out.println("Black\n");
	    else
	    	System.out.println("Draw\n");
	}

}
