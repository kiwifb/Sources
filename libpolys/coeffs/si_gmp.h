#ifndef COEFFS_SI_GMP_H
#define COEFFS_SI_GMP_H

#include <stddef.h>

// just assume that factory have been built (cplusplus.h!)
// instead of duplicating cf_gmp.h here for now...
#include "factory/cf_gmp.h"

#ifndef mpz_size1
// This is taken from longrat.h: it seems to be generally GMP-related
#define mpz_size1(A) (ABS((A)->_mp_size))
#define mpz_sgn1(A) ((A)->_mp_size)
//#define mpz_size1(A) mpz_size(A)
#endif // mpz_size1


#endif /* ! COEFFS_SI_GMP_H */
