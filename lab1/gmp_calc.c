#include<gmp.h>

void main()
{
	//decalartion of variables
	mpz_t a,b,c;

	//initializing variables
	mpz_inits(a,b,c,NULL);
	gmp_printf("insert integer a:");
	gmp_scanf("%Zd",a);
	gmp_printf("Insert integer b:");
	gmp_scanf("%Zd",b);

	//addition 
	mpz_add(c,a,b);
	gmp_printf("Addition of a & b is: %Zd\n",c);
	
	//substration
	mpz_sub(c,a,b);
	gmp_printf("substration of a & b is: %Zd\n", c);

	//multiplication
	mpz_mul(c,a,b);
	gmp_printf("multiplication of a & b is: %Zd\n", c);

	//dividation
	mpz_div(c,a,b);
	gmp_printf("dividation of a & b is: %Zd\n", c);

	//mod
	mpz_mod(c,a,b);
	gmp_printf("mod of a & b is: %Zd\n", c);

}