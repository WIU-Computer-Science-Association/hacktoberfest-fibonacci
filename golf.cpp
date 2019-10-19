#include <cstdio>
int g(int n){if(n==0)return 1;if(n==1)return 1;return g(n-1)+g(n-2);}int main(){for(int i=0;i<25;i++){printf("%d\n",g(i));}return 0;}