package com.javatpoint;

public class Student {
	private String name;
	public String getName()
	{
		return name;
	}
	public Student(String name)
	{
		this.name=name;
	}
	public void displayInfo()
	{
		System.out.printf("Hello"+ name);
	}

	
}
