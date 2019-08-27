//extended eclidean algorithm


#include<gmp.h>

int main() {
	mpz_t a,b,d,e,x1,x2,y1,y2,r,x,y,q,t;
	mpz_inits(a,b,d,e,x1,x2,y1,y2,r,x,y,q,t,NULL);
	gmp_printf("a:");
	gmp_scanf("%Zd",&a);
	gmp_printf("b:");
	gmp_scanf("%Zd",&b);
	
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