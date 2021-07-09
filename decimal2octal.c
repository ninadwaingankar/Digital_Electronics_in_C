//decimal to ocatal program in C

//till 10 bit octal number (0 to 1023 in decimal)

#include<stdio.h>
#include<math.h>

//converts decimal into octal
long long decimal2octal(int decimal)
{
	long long octal=0;
	int rem,temp=1;
	
	while(decimal!=0)
	{
		rem=decimal%8;
		decimal=decimal/8;
		octal=octal+rem*temp;
		temp=temp*10;
	}
	return octal;
}



int main()
{
	int decimal;
	printf("This program converts decimal number into binary & octal\n");
	printf("Enter a decimal number\n");
	scanf("%d",&decimal);
	printf("Equivalent octal number of %d is %lld\n",decimal,decimal2octal(decimal));
	return 0;
}


	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	