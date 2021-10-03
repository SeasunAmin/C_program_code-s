#include<stdio.h>
int imax( int, int );       //" function "prototype" listed before main int main(int argc, char" argv[){

int a, b, c;

a = atoi (argv[1]); b = atoi(argv[2]):

c = imax(a,b);

printf("%s: %d, The max value is: ", c);

}

// our first non-main function
 int imax( int val1, int val2 ) {

if (vall > val2)

return(vall);

else!

return(val2); }
}
