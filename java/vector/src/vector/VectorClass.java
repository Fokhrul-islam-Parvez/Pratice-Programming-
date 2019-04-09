package vector;
import java.util.*;
public class VectorClass {
	public static void main(String [] arg){
       Vector v =new Vector();
       int i1=v.size();
       System.out.println(i1);
       int i2=v.capacity();
       System.out.println(i2);
       v.ensureCapacity(50);
       int i3=v.capacity();
       System.out.println(i3);
       v.addElement("Parvez");
       v.addElement("Paru");
       v.addElement("Saru");
       v.addElement("Munmun");
       v.addElement("Inder");
       v.addElement("Bithy");
       for(int i=0;i<v.size();i++)
       {
    	   System.out.println(v.elementAt(i));
       }
       int i4=v.size();
       System.out.println(i4);
       v.set(4, "Risu");
       for(int i=0;i<v.size();i++)
       {
    	   System.out.println(v.elementAt(i));
       }
       System.out.println("\n");
       System.out.println( v.get(4));
       System.out.println("\n");
       v.insertElementAt("Apon",6);
       for(int i=0;i<v.size();i++)
       {
    	   System.out.println(v.elementAt(i));
       }
       v.removeElementAt(5);
       System.out.println("\n");
       for(int i=0;i<v.size();i++)
       {
    	   System.out.println(v.elementAt(i));
       }
       v.remove(4);
       System.out.println("\n");
       for(int i=0;i<v.size();i++)
       {
    	   System.out.println(v.elementAt(i));
       }
       v.remove("Saru");
       System.out.println("\n");
       for(int i=0;i<v.size();i++)
       {
    	   System.out.println(v.elementAt(i));
       }
      // v.clear();
//       for(int i=0;i<v.size();i++)
//       {
//    	   System.out.println(v.elementAt(i));
//       }
       System.out.println("\n");
      System.out.println(v.firstElement());
      System.out.println(v.lastElement());
       boolean be=v.isEmpty();
       System.out.println("\n");
       System.out.println(be);
       boolean be1=v.contains("Parvez");
       System.out.println("\n");
       System.out.println(be1);
       int po=v.indexOf("Parvez");
       System.out.println("\n");
       System.out.println(po);
       v.addElement("Parvez");
       System.out.println("\n");
       for(int i=0;i<v.size();i++)
       {
    	   System.out.println(v.elementAt(i));
       }
       int pos=v.lastIndexOf("Parvez");
       System.out.println("\n");
       System.out.println(pos);
     ///  v.addElement(89);
       System.out.println("\n");
       for(int i=0;i<v.size();i++)
       {
    	   System.out.println(v.elementAt(i));
       }
       String a[]=new String[v.size()];
       v.copyInto(a);
       System.out.println("\n");
       for(int i=0;i<a.length;i++)
       {
    	   System.out.println(a[i]);
       }
       v.addElement(89);
       v.addElement(8.9);
       v.addElement('y');
       System.out.println("\n");
       for(int i=0;i<v.size();i++)
       {
    	   System.out.println(v.elementAt(i));
       }
	}
}