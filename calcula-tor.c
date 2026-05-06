#include <stdio.h>
#include <float.h>

int main () {
  char op;
double a, b, res;

//reads the operator
printf("Enter a symbol (+, -, *, /):");
scanf("%c", &op);

//reads the two numbers entered
printf("Enter two numbers: ");
scanf("%lf %lf", &a, &b);

//defines all four operations in switch cases
switch (op) {
case '+':
res = a + b;
break;
case '-':
res = a - b;
break;
case '*':
res = a * b;
break;
case '/':
res = a / b;
break;
default:
printf("Error! Incorrect value! PLease enter another value.\n");
res = -DBL_MAX;
  }
if(res!=-DBL_MAX) {
  printf("%.2lf", res);

return 0;
}
}
