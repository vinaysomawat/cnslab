#include<gmp.h>

void gcdExtended(mpz_t a, mpz_t b, mpz_t x, mpz_t y)
{
	if(a==0)
	{
		x =0;
		y=1;
		return b;
	}
	mpz_t x1,y1;

	mpz_t gcd = gcdExtended(b%a,a,x1,y1);

	x=y1 - (b/a)*x1;
	y=x1;

	return gcd;
}

void main()
{
	
	//decalartion of variables
	mpz_t a,b,d;

	//initializing variables
	mpz_inits(a,b,d,NULL);
	gmp_printf("insert integer a:");
	gmp_scanf("%Zd",a);
	gmp_printf("Insert integer b:");
	gmp_scanf("%Zd",b);

	d = gcdExtended(a,b,&x, &y);

	gmp_printf("gcd(%Zd, %Zd) = %Zd",a,b,d);

	return 0;

}