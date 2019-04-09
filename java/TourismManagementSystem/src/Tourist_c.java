
public class Tourist_c {
	int id;
	String name;
	String email;
	String phn;
	String from;
	private int cost;
	Tourist_c(String from)
	{
		this.from=from;
	}
      Tourist_c(String n,String e,String p,String f,int i)
      {
    	  name=n;
    	  email=e;
    	  phn=p;
    	  from=f;
    	  id=i;
    	  
      }
      public int tk()
      {
    	  if(from.equals("Dhaka to Cox_bazar"))
    		  return 1400;
    	  if(from.equals("Dhaka to Comilla"))
    		  return 2000;
    	  if(from.equals("Dhaka to Laksam"))
    		  return 1200;
    	  else 
    			  return 0;
    	  
      }
      void set_cost(int c)
      {
    	  cost=c;
      }
      
}
