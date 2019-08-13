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

	while(mpz_cmp_ui(b,0)!=0)
	{
		mpz_set(c,b);
		mpz_mod(c,a,b);
		mpz_set(c,a);
	}

	gmp_printf("\nGCD of a & b:%Zd", c);

}