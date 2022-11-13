/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner sc=new Scanner(System.in);
	    int n=sc.nextInt();

	    for(int i=0;i<n;i++){
	        int q=0;
	        int x=sc.nextInt();
	        String s=sc.next();
	        if(x%2!=0){
	            System.out.println("NO");
	        }
	        else{
	        char a[]=s.toCharArray();
	        Arrays.sort(a);
	        for(int j=0;j<(a.length)-1;j++){
	            if(a[j]!=a[j+1]){
	                System.out.println("NO");
	                q=1;
	                break;
	            }
	            j++;
	        }
	        if(q==0){
	        System.out.println("YES");}
	        }
	    }
		// your code goes here
	}
}
