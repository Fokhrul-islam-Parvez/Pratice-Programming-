package outerPackage;

class OuterClass3 {
    int a;
	int b;
	 class InnerClass{
     	int c;
         int d;
       	 void print(){
       		 a=56;
       		 b=90;
       	    	c=4;
       		d=45;
       	  	System.out.println(c+"   "+d);
       		print2();
       	   }
          }
       void print2(){
    	   System.out.println(a);
    	  
       }
}
class Main007{
	public static void main(String [] args){
		OuterClass3 pj;
		pj=new OuterClass3();
		pj.print2();
	}
	
}