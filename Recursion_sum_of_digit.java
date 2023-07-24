/*package whatever //do not write package name here */

import java.io.*;
import java.util.*;

class GFG {

	
	static int fun(int n)
	{
		if(n < 10)
			return n;

		return fun(n / 10) + n % 10;
	}
    public static void main(String [] args) 
    {
    	
    	System.out.println(fun(253));
        
    }

}
