//extended eclidean algorithm


#include<gmp.h>
#include<time.h>

int main() {
	mpz_t a,b,d,e,x1,x2,y1,y2,r,x,y,q,t;
	mpz_inits(a,b,d,e,x1,x2,y1,y2,r,x,y,q,t,NULL);
	gmp_randstate_t as;
	unsigned long int seed;
	seed = time(NULL);
	gmp_randinit_default(as);
	gmp_randseed_ui(as,seed);
	mpz_urandomb(a,as,10);
	gmp_printf("a: %Zd",a);
	mpz_urandomb(b,as,10);
	gmp_printf("b: %Zd",b);
	
	if(mpz_cmp_ui(b,0)==0)
	{
		mpz_set(d,a);
		mpz_set_ui(x,1);
		mpz_set_ui(y,0);
	}
	else
	{
		mpz_set_ui(x2,1);
		mpz_set_ui(x1,0);
		mpz_set_ui(y1,1);
		mpz_set_ui(y2,0);

		while(mpz_cmp_ui(b,0)>0)
		{
			mpz_fdiv_q(q,a,b);
			mpz_mul(e,q,b);
			mpz_sub(r,a,e);
			mpz_mul(e,q,x1);
			mpz_sub(a,x2,e);
			mpz_mul(e,q,y1);
			mpz_sub(y,y2,e);

			mpz_set(a,b);
			mpz_set(b,r);
			mpz_set(x2,x1);
			mpz_set(x1,x);
			mpz_set(y2,y1);
			mpz_set(y1,y);
		}

		mpz_set(d,a);
		mpz_set(x,x2);
		mpz_set(y,y2);
	}

	gmp_printf("gcd is: %Zd \n x is: %Zd \n y is: %Zd \n",d,x,y);
	return 0;
}