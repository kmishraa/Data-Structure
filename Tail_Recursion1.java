/*package whatever //do not write package name here */

import java.io.*;
import java.util.*;

class GFG {

	
	static int fact(int n, i   nt k)
	{
		if(n == 0 || n == 1)
			return k;

		return fact(n - 1, k * n);

	}
    public static void main(String [] args) 
    {

    	System.out.println(fact(3, 1));
        
    }

}
