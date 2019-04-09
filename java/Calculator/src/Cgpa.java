
public class Cgpa {
double java, algo, data;
Cgpa(double j, double a, double d){
	java=j;
	algo=a;
	data=d;
}
double cal(){
	return (java*4+algo*4+data*4)/12;
}
}
