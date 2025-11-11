#include "app.h"

/*
Variant 1
f(x) = 3^x

0<=x<=1

N = 5

S = n=0 ln^n 3/n! * x^n

a_n = ln^n 3/n! * x^n
a_n+1 = ln^n+1 3/(n+1)! * x^n+1
q_n = a_n+1/a_n = x*ln3/n+1
Variant 38 
f(x) = x/(1-x^2)

0<x<2

N = 10

S = n=1 x^2n-1

a_n = x^2n-1
a_n+1 = x^2n+1 
q_n = x^2
 * */

#define LAB02_1_VAR_1
//#define LAB02_1_VAR_38

#ifdef LAB02_1_VAR_1

#define COUNT 5
#define START_FROM 0 
#define INIT_VALUE(x) (1)

#define FUNC(x) (pow(3, x))

#define Q(x, n) ((log(3) * (x)) / ((n) + 1))

#define RESULT(x, S) (S)

#elifdef LAB02_1_VAR_38

#define COUNT 10
#define START_FROM 1
#define INIT_VALUE(x) (x)

#define FUNC(x) ((x) / (1 - pow((x), 2)))

#define Q(x, n) (pow((x), 2)) 
#define RESULT(x, S) (S)
#endif

int main() {

    double x = 0.5;

  {
    double etalon = FUNC(x);

    printf("f(%.2f)=%.5f\n", x, etalon);
  }

 {
    double a = INIT_VALUE(x), S = a;

    int n;

    for (n = START_FROM; n <= COUNT; n++)
    {
      a *= Q(x, n);
      S += a;
    }

    S = RESULT(x, S);

    printf("S(%.2f)=%.5f\n", x, S);
 }

 return 0;
}
