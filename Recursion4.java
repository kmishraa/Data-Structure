/*package whatever //do not write package name here */

import java.io.*;
import java.util.*;

class GFG {

	
	static void fun1()
	{
		System.out.println("fun1");
	}

	static void fun2()
	{
		System.out.println("Before fun1");

		fun1();

		System.out.println("After fun1");
	}

	public static void main (String[] args) {
		
		System.out.println("Before fun2");

		fun2();

		System.out.println("After fun2");

	}
}
