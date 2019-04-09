package arrayPackage1;
import java.util.ArrayList;
public class Order{
	int amount;
	Order(int amount)
	{
	this.amount=amount;
	}
	}
	class client
	{
	Order o;
	ArrayList<Order> obj=new ArrayList<Order>();
	}
	class Manager
	{
	ArrayList<client> obj1=new ArrayList<client>();
	client c;
	void check_amount(){
	if(c.o.amount>10000)
	{
	System.out.println("OK\n");
	}
	}
	}
	class Main
	{
	public static void main(String [] a)
	{
	Order o1=new Order(400000);
	Order o2=new Order(500000);
	Order o3=new Order(100000);
	Order o4=new Order(600000);
	client c1=new client();
	client c2=new client();
	c1.obj.add(o4);
	c1.obj.add(o3);
	c1.obj.add(o2);
	c1.obj.add(o1);
	c2.obj.add(o4);
	c2.obj.add(o3);
	c2.obj.add(o2);
	c2.obj.add(o1);
	Manager m=new Manager();
	m.obj1.add(c1);
	m.obj1.add(c2);
	for(client c : m.obj1)
	{
	m.c=c;
	for( Order o: m.c.obj)
	{
	m.c.o=o;
	m.check_amount();
	}
	}


	}
}
