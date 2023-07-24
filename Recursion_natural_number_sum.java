/*package whatever //do not write package name here */

import java.io.*;
import java.util.*;

class GFG {

	
	static int getSum(int n)
	{
		if(n == 0)
			return 0;

		return n + getSum(n - 1);

	}
    public static void main(String [] args) 
    {
    	int n = 4;
    	
    	System.out.println(getSum(n));
        
    }

}
