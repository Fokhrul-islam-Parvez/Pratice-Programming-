package packageLab3;
public class GetDiscount {
	 private int price ;

	String setdiscount(int price2){
		price=price2;
		if(price>500)
			return "5% Discount.";
		else 
			return "0% Discount.";
	}
}
