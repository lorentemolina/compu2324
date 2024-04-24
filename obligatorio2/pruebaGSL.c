#include <stdio.h>
#include "gsl/rng/gsl_rng.h"

int main() {
    const gsl_rng_type *T;
    gsl_rng *r;

    gsl_rng_env_setup();
    T = gsl_rng_default;
    r = gsl_rng_alloc(T);

    for (int i = 0; i < 10; ++i) {
        printf("%f\n", gsl_rng_uniform(r));
    }

    gsl_rng_free(r);
    
    return 0;
}