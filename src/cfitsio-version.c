#include <fitsio.h>
int main (int argc, char **argv)
{
   float v;
   (void) argc; (void) argv;
   fits_get_version (&v);
   printf ("#define COMPILED_CFITSIO_VERSION %f\n", v);
   return 0;
}

