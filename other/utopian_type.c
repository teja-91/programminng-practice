/*The Utopian Tree goes through 2 cycles of growth every year. Each spring, it doubles in height. Each summer, its height increases by 1 meter.

Laura plants a Utopian Tree sapling with a height of 1 meter at the onset of spring. How tall will her tree be after NN growth cycles?

Input Format

The first line contains an integer, TT, the number of test cases. 
TT subsequent lines each contain an integer, NN, denoting the number of cycles for that test case.

Constraints 
1=T=101=T=10 
0=N=600=N=60
Output Format

For each test case, print the height of the Utopian Tree after NN cycles. Each height must be printed on a new line.*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t;int height,n[60]; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){ 
        scanf("%d",n+a0);
    }
    for(int a0=0;a0<t;a0++){
        height=1;
        for(int i=0;i<n[a0];i=i+2){
           height+=((i+1)<n[a0])?(height+1):height;   
        }
        printf("%d\n",height);
    }
    return 0;
}

