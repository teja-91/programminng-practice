/**
This program simulates a slot machine which has nSlots number of slots and a set of nails
in a triangular shape enclosed with the slots. A ball is thrown in to the machine.
Each time the ball hits the nail it has a 50% probability of falling either the right or left side.
The user gives the number of slots and number of balls dropped as the inputs.
the ouput is the path taken by each of the balls and the histogram type representaion of the balls in the slots
I have used a string to store the availabality of the balls in the slots of the machine.
Each time when the balls falls either left or right the string is concatenated 'N' either the right or left side respectively.
In this way at thhe end of the loop I get the string with exactly on character giving the location of the ball.
This process is repeated for every ball.

              | 0 |
              |   |
			  / * \               Slot Machine
             / * * \
            / * * * \ 
           / * * * * \
          / * * * * * \
          |_|_|_|_|_|_|			
*/
import java.util.*;
import java.lang.*;
public class SlotMachine{
	public static void main(String[] args){
		int nSlots,nBalls;
		char side;
		String str;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the number of slots");
		nSlots = sc.nextInt();
		System.out.println("Enter the number of balls");
		nBalls = sc.nextInt();
		int[]slot=new int[nSlots];
		System.out.println();
		
		for(int i=0 ; i < nBalls; i++){
			side=getSideRandom();
			str=(side=='R')?"NR":"RN";//In order to get the position I started with 2 slots 
			for(int j=1;j<nSlots;j++){
				side=getSideRandom();
				if(side=='R')
					str="N"+str;// for every iteration the string is shifted left or 
				//right by appending 'N'
				else
					str=str+"N";
				System.out.print(side);
			}
			System.out.println();//for new line
			slot[str.indexOf('R')]++;
			//System.out.println(str);
		}
		printHist(slot,nBalls);
	}
	/**
	Program used to display the number of balls in each slot in the following way 
	  0
	  00
	0000 
	*/
	public static void printHist(int[] slot,int nBalls){
		System.out.println();
		String s;
		for(int i=10;i>0;i--){
			s="";
			for(int j=0;j<slot.length;j++){
				s+=(slot[j]>=i)?"0":" ";
			}
			System.out.println(s);
		}
	}
	/**Program to randomly select left or right side*/
	public static char getSideRandom(){
		return (Math.random()>=0.5)?'R':'L';
	}
}
