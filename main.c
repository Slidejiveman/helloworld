#include <stdio.h>
#include "omp.h" // Make Open MP functions available

int main()
{
    omp_set_num_threads(1000); // the number of threads to use

    // Note that the threads area created serially, but they
    // won't finish in serial order, so the output will be
    // out of order
#pragma omp parallel // run the next code block in parallel
    {
        int id = omp_get_thread_num();
        printf("Hello, World! Thread Number: (%d)\n", id);
    };

    return 0;
}