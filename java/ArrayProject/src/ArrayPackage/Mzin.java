package ArrayPackage;
import java.util.ArrayList;
public class Mzin {
	public static void main(String[] args) 
	{
	Order o1 = new Order(20000);
	Order o2 = new Order(2000);
	ArrayList <Order> OL = new ArrayList <Order>();
	OL.add(o1);
	OL.add(o2);
	Client c1 = new Client(OL);
	Client c2 = new Client(OL);
	Manager m1 = new Manager();
	m1.cl.add(c1);
	m1.cl.add(c2);
	m1.check();
	} 
	}
	class Order
	{
	private int amount;
	int getamount()
	{
	return amount;
	}
	Order(int a)
	{
	amount = a;
	}
	}
	class Client
	{
	private ArrayList <Order> OL;
	Client(ArrayList <Order> OL)
	{
	this.OL = OL;
	}
	ArrayList <Order> getOrder()
	{
	return OL;
	}
	}
	class Manager
	{
	ArrayList <Client> cl = new ArrayList <Client>();
	void check()
	{
	for(Client c : cl)
	{
	for(Order o : c.getOrder())
	{
	if(o.getamount()>10000)
	{
	System.out.println("Ok");
	}
	else
	{
	System.out.println("No");
	}
	}
	}
	}


}
