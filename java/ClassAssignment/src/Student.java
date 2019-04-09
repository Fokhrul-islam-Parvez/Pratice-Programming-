import java.util.*;
public class Student {
	String Student_id;
	String Student_name;
	double cgpa;
	Course c1,c2,c3;
	String waver;
	Student(String Student_name, String Student_id,Course c1, Course c2, Course c3)
	{
		this.Student_name=Student_name;
		this.Student_id=Student_id;
		this.c1=c1;
		this.c2=c2;
		this.c3=c3;
	}

}
class Course
{
	String Course_name;
	String Course_id;
	String Course_type;
	int Course_credit;
	double Course_marks;
	double gpa;
	Teacher t;
	Course(String Course_name,String Course_id,String Course_type,int Course_credit,Teacher t)
	{
		this.Course_name = Course_name;
		this.Course_id=Course_id;
		this.Course_type=Course_type;
		this.Course_credit=Course_credit;
		this.t=t;
	}
	
}

class Teacher
{
	Scanner sc=new Scanner(System.in);
	String Teacher_name;
	String Teacher_id;
	Boolean Teacher_salary;
	Course C;
	Teacher(String Teacher_name, String Teacher_id)
	{
		this.Teacher_name=Teacher_name;
		this.Teacher_id=Teacher_id;
	}
	void gives_marks(Course C)
	{
		this.C=C;
		System.out.print("Enter " + C.Course_name+"  Course Marks: ");
		C.Course_marks=sc.nextDouble();
	}
	
}
class Admin
{
	double Cgpa;
	Student s;
	void check_marks()
	{
		if(s.c1.Course_marks!=0)
		{
			s.c1.t.Teacher_salary=true;
			System.out.println("\nTeacher " + s.c1.t.Teacher_name + " Salary Eligible");
		}
		else
		{
			s.c1.t.Teacher_salary=false;
			System.out.println("\nTeacher " + s.c1.t.Teacher_name + " Salary not Eligible");
		}
		if(s.c2.Course_marks!=0)
		{
			s.c2.t.Teacher_salary=true;
			System.out.println("Teacher " + s.c2.t.Teacher_name + " Salary Eligible");
		}
		else
		{
			s.c2.t.Teacher_salary=false;
			System.out.println("Teacher " + s.c2.t.Teacher_name + " Salary not Eligible");
		}
		if(s.c3.Course_marks!=0)
		{
			s.c3.t.Teacher_salary=true;
			System.out.println("Teacher " + s.c3.t.Teacher_name + " Salary Eligible\n");
		}
		else
		{
			s.c3.t.Teacher_salary=false;
			System.out.println("Teacher " + s.c3.t.Teacher_name + " Salary not Eliogible\n");
		}
	}
		void calcuates_gpa()
		{
			if(s.c1.Course_marks>=80) {
				s.c1.gpa=4.0;
				System.out.println("\nCourse "+ s.c1.Course_name+" GPA = "+ s.c1.gpa);
				}
			else if(s.c1.Course_marks<80 && s.c1.Course_marks>=70) {
			    s.c1.gpa=3.5;
			    System.out.println("\nCourse "+ s.c1.Course_name+" GPA = "+ s.c1.gpa);
			}
			else {
				s.c1.gpa=3.0;
				System.out.println("\nCourse "+ s.c1.Course_name+" GPA = "+ s.c1.gpa);
			}
			
			if(s.c2.Course_marks>=80) {
				s.c2.gpa=4.0;
				System.out.println("Course "+ s.c2.Course_name+" GPA = "+ s.c2.gpa);
			}
			else if(s.c2.Course_marks<80 && s.c2.Course_marks>=70) {
			    s.c2.gpa=3.5;
			    System.out.println("Course "+ s.c2.Course_name+" GPA = "+ s.c2.gpa);
			}
			else {
				s.c2.gpa=3.0;
				System.out.println("Course "+ s.c2.Course_name+" GPA = "+ s.c2.gpa);
			}
			if(s.c3.Course_marks>=80) {
				s.c3.gpa=4.0;
				System.out.println("Course "+ s.c3.Course_name+" GPA = "+ s.c3.gpa);
			}
			else if(s.c3.Course_marks<80 && s.c3.Course_marks>=70) {
			    s.c3.gpa=3.5;
			    System.out.println("Course "+ s.c3.Course_name+" GPA = "+ s.c3.gpa);
			    }
			else {
				s.c3.gpa=3.0;
				System.out.println("Course "+ s.c3.Course_name+" GPA = "+ s.c3.gpa+"\n");
				}
		}

	void calculates_cgpa(Student s)
	{
		this.s=s;
	if(s.c1.Course_marks>40 && s.c2.Course_marks>40 && s.c3.Course_marks>40 )
		{calcuates_gpa();
			
		Cgpa=(s.c1.gpa*s.c1.Course_credit+s.c2.gpa*s.c2.Course_credit+s.c3.gpa*s.c3.Course_credit)/(s.c1.Course_credit+s.c2.Course_credit+s.c3.Course_credit);
		s.cgpa=Cgpa;
		System.out.println("\nStudent "+s.Student_name+ " has CGPA = "+ s.cgpa);
		Waver_check();}
	else
	{
		System.out.println("Fail");
	}
	}
	void Waver_check()
	{
		if(Cgpa>=3.9)
		{
			s.waver="50 % Waver ";
			System.out.println(s.Student_name +" Eligible for 50% Waver.\n");
		}
		else if(Cgpa<3.9 && Cgpa>=3.7)
		{
			s.waver=" 30% Waver ";
			System.out.println(s.Student_name +" Eligible for 30% Waver.\n");
		}
		else if(Cgpa<3.7 && Cgpa>=3.5)
		{
			s.waver="10 % Waver ";
			System.out.println(s.Student_name +" Eligible for 10% Waver.\n");
		}
		else
		{
			s.waver="0 % Waver ";
			System.out.println(s.Student_name +" have no Waver.\n");
			
		}
			
	}
}
class Main
{
	public static void main(String [] args)
	{
		Scanner sca=new Scanner(System.in);
		Teacher t1=new Teacher("Farzana Sadia","100-1700-199");
		Teacher t2=new Teacher("Rumel Khan","100-1700-200");
		Teacher t3=new Teacher("Prinka Mondol","100-1700-201");
		
		 Course c1=new Course("Object Oriented","SWE233","Lab",4,t1);
		 Course c2=new Course("Software Testing","SWE222","without Lab",3,t2);
		 Course c3=new Course("Discrete Math","SWE224","without Lab",3,t3);
		
		 System.out.print("How many Student : ");
		int n=sca.nextInt();
		
		 String name;
		 String id;
		 name=sca.nextLine();
		for(int i=0;i<n;i++)
		{
			System.out.println("\nPlease Enter "+ (i+1)+" Number Student Whole Information");
			System.out.print("Enter Student Name: ");
			name=sca.nextLine();
			System.out.print("Enter Student ID: ");
			id=sca.nextLine();
			 Admin a1=new Admin();
			 Student s1=new Student(name,id,c1,c2,c3);
		 t1.gives_marks(s1.c1);
		 t2.gives_marks(s1.c2);
		 t3.gives_marks(s1.c3);
		 a1.calculates_cgpa(s1);
		 if(i==n-1)
		 {
			 a1.check_marks();
		 }
		}

	}
}


