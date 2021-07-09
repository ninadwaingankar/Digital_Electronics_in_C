//decimal to binary program in C

//till 10 bit binary number (0 to 1023)

#include<stdio.h>
#include<math.h>

//converts decimal into binary
long long decimal2binary(int decimal)
{
	long long binary=0;
	int rem,temp=1;
	
	while(decimal!=0)
	{
		rem=decimal%2;
		decimal=decimal/2;
		binary=binary+rem*temp;
		temp=temp*10;
	}
	return binary;
}

int main()
{
	int decimal;
	printf("This program converts decimal number into binary & octal\n");
	printf("Enter a decimal number\n");
	scanf("%d",&decimal);
	printf("Equivalent binary number of %d is %lld\n",decimal,decimal2binary(decimal));
	return 0;
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	