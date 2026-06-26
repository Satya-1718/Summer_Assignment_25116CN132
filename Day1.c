#include <stdio.h>
int main() {
  int n ;
printf("Enter a number:");
scanf("%d",&n);
printf("Mulktiplication table of %d:\n",n);
for(int i=1; i<=10; i++) {
rintf("%d*%d=%d\n",n,i,n*i);
}
return 0;
}
