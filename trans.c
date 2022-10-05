#include <stdio.h>
int main(){
    printf("My name is Khan");
    int star ;
    scanf("%d",&star);
    int *j = &star;
    printf("%d",*(j));
    return 0;
}