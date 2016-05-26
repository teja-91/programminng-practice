import java.lang.*;
import java.util.*;
public class ComputeAreaCs{
	public static void main(String[] args){
		double radius,area;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the Radius of the circle");
		radius=sc.nextDouble();//reads the next value from the console
		area=3.414*(radius*radius);
		System.out.println("Area of the Circle is "+ area );
	}
}