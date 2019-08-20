// mpz program for moduler arithmatic with random inputs.

#include<gmp.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main() 
{

	mpz_t a,b,n,t1,t2,t3,r1,r2;
	mpz_inits(a,b,n,t1,t2,t3,r1,r2,NULL);
	gmp_randstate_t state;
	gmp_randinit_mt(state);

	unsigned long seed;

	seed = time(NULL);
	gmp_randseed_ui(state,seed);
	int bits=10;

	mpz_rrandomb(a,state,bits);
	mpz_rrandomb(b,state,bits);
	mpz_rrandomb(n,state,bits);

	gmp_printf("\na is: %Zd \nb is: %Zd \n n is: %Zd \n",a,b,n);

	//addition 
	//((amodn)+(bmodn))modn= ((a+b)modn)
	gmp_printf("Addition:\n\n");
	mpz_fdiv_r(t1,a,n);
	mpz_fdiv_r(t2,b,n);
	mpz_add(t3,t1,t2);
	mpz_fdiv_r(r1,t3,n);
	gmp_printf("((amodn)+(bmodn))modn is: %Zd \n",r1);

	mpz_add(t1,a,b);
	mpz_fdiv_r(r2,t1,n);
	gmp_printf("((a+b)modn) is: %Zd \n",r2);

	if(mpz_cmp(r1,r2)==0)
		gmp_printf("So ((amodn)+(bmodn))modn)) = ((a+b)modn)\n\n\n");

	//substraction 
	//((amodn)-(bmodn))modn= ((a-b)modn)
	gmp_printf("Substraction:\n\n");
	mpz_fdiv_r(t1,a,n);
	mpz_fdiv_r(t2,b,n);
	mpz_sub(t3,t1,t2);
	mpz_fdiv_r(r1,t3,n);
	gmp_printf("((amodn)-(bmodn))modn is: %Zd \n",r1);

	mpz_sub(t1,a,b);
	mpz_fdiv_r(r2,t1,n);
	gmp_printf("((a-b)modn) is: %Zd \n",r2);

	if(mpz_cmp(r1,r2)==0)
		gmp_printf("So ((amodn)-(bmodn))modn) = ((a-b)modn)\n\n\n");

	//multiplication 
	//((amodn)*(bmodn))modn= ((a*b)modn)
	gmp_printf("Multiplication:\n\n");
	mpz_fdiv_r(t1,a,n);
	mpz_fdiv_r(t2,b,n);
	mpz_mul(t3,t1,t2);
	mpz_fdiv_r(r1,t3,n);
	gmp_printf("((amodn)*(bmodn))modn is: %Zd \n",r1);

	mpz_mul(t1,a,b);
	mpz_fdiv_r(r2,t1,n);
	gmp_printf("((a*b)modn) is: %Zd \n",r2);

	if(mpz_cmp(r1,r2)==0)
		gmp_printf("So ((amodn)*(bmodn))modn) = ((a*b)modn)\n\n");

	return 0;
}