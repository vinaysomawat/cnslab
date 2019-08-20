// mpz program for moduler arithmatic with random inputs.

#include<stdio.h>
#include<gmp.h>

int main() 
{
	//generate random number
	mpz_t rand_Num;
	gmp_randstate_t state;

	mpz_init(rand_Num);
	gmp_randinit_default(state);

	unsigned long int max, seed;
	seed = time(NULL);

	//random state seeding
	gmp_randseed_ui(state, seed);


	mpz_set_ui(max,100000);
	mpz_urandomb(rand_Num,state,max);

	gmp_printf("%Zd\n", rand_Num);

	//free all memory
	gmp_randclear(state);
    mpz_clear(rand_Num);
	return 0;
}