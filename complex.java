package package1;

import java.util.Scanner;

import p1.com;
import p1.complex;
public class complex 
{
	double real ,img ;
	complex(double r, double i)
	{
		real=r; img =i;
	}
	public static complex sum(complex c1,complex c2) 
	{
		complex temp = new complex(0,0) ;
		temp.real =c1.real + c2.real;
		temp.img = c1.real+c2.img;
		return temp;
	}
	public static void main(String[] args)
	{
		double p,q,m,n;
		double real ,img ;
		Scanner s = new Scanner(System.in);
		System.out.print ("Enter the first real part :");
		p=s.nextInt();
		System.out.print ("Enter the first img part :");
		q=s.nextInt(); 
		System.out.print ("Enter the second real part :");
		m=s.nextInt();
		System.out.print ("Enter the second img part :");
		n=s.nextInt(); 
		complex c1 = new complex(p,q);
		complex c2 = new complex(m,n);
		complex temp =sum(c1,c2);
		System.out.printf("sum is: "+ temp.real+ "+" +temp.img + "i");
	}

}
