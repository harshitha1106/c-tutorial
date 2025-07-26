#include<stdio.h>
int main()
{
   int n,temp,r,rev=0;
   printf("enter n value:");
   scanf("%d",&n);
   temp=n;
   printf("the num is %d",n);
   while(n>0){
    r=n%10;                       
/*teration	n  	r (n % 10)	rev (rev * 10 + r)	n = n / 10
      1	   123	   3	       0 * 10 + 3 = 3	     12
      2	   12	     2	       3 * 10 + 2 = 32	   1
      3	   1	     1	       32 * 10 + 1 = 321   0     */
    rev=rev*10+r;
    n=n/10;
   }
   printf("\n the rev no. is :%d",rev);
   if(temp==rev){
    printf("\n no. %d is a palindrome",temp);
   }
    else{
    printf("\n no. %d is not a palindrome",temp);
    }
}