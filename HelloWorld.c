/* Print Hello World from multiple threads */

/* Include OpenMP header file */
#include <omp.h>
#include <stdio.h>


/* Main function */

int main(int *argc, char *argv[])
{
    /*  Specify the block that needs to be executed in parallel */
    #pragma omp parallel
    {
        printf("Hello World !!!!!")
    }


    return 0;
}