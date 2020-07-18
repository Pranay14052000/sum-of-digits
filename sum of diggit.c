#include <stdio.h>
#include <stdlib.h>

 int  sumofdigits(int n)
{

if(n==0)
 {

     return 0;
 }
 else
    {
        return(n%10+sumofdigits(n/10));
    }
}

int main()
{
	int n;
	printf("Enter the no to find its sum of digits\n");
	scanf("%d",&n);
	int sum=sumofdigits(n);
	printf("sum of digits of %d is %d",n,sum);
	return 0;
}
