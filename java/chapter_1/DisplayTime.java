import java.util.*;
public class DisplayTime{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		//ask user for input
		System.out.println("Enter the time in seconds");
		//read input
		int seconds=sc.nextInt();
		int minutes=seconds/60;// find minutes
		int remainingSeconds=seconds%60;//find remaining seconds
		System.out.println(seconds + "Seconds is " + minutes + " minutes and " + remainingSeconds + " seconds");
	}
}