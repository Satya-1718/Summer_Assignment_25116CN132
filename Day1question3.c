#include <stdio.h>
int main() {
  int n;
long long factorial=1;
printf("Enter a number: ");
sacnf("%d",&n);
for (int i=1; i<=n; i++) {
factorial *= i;
}
printf("Factorial of %d = %11d\n",n,factorial);
return 0;
}
