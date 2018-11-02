#include<stdio.h>
/*To find the number is prime or not*/
main()
{ int num,i;
printf("Enter a number");
scanf("%d",&num);
 i=2;
 while(i<=num-1)
 {
 	if(num%i==0)
 	{
 		printf("Not a prime number");
 		break;
	 }
	 i++;
 }
 if(i==num)
 printf("Prime number");
}
