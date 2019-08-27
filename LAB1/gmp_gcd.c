#include<gmp.h>

void main(){
	
	//decalartion of variables
	mpz_t a,b,c;

	//initializing variables
	mpz_inits(a,b,c,NULL);
	gmp_printf("insert integer a:");
	gmp_scanf("%Zd",a);
	gmp_printf("Insert integer b:");
	gmp_scanf("%Zd",b);

	mpz_gcd(c,a,b);

	gmp_printf("\nGCD of a & b:%Zd", c);

}