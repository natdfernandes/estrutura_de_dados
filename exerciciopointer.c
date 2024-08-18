#include <stdio.h>
#include <stdlib.h>

// prototipos de função
int lervalores1(char);
void lervalores2(int *, char);

int main()
{
    int a = 0;
    int b = 0;
    printf("a=%d, end. de a =%d, valor de a via end. a =%d\n", a & a, *&a);
    printf("b=%dn end. de b=%d, valor de b via end. b=%d\n", b & b, *&b);
    a = lervalores1('A');
    lervalores2(&b, 'b');
    printf("a=%d, end. de a =%d, valor de via pointer end.a = %d\n", a & a, &a);
    printf("b=%d, end. de b =%d, valor de via end.b = %d\n", b & b, &b);
    return 0;
}
// declarar o que a variavel faz

int lervalores1(char var)
{
    int ab = 0;
    printf("informar o valor de %c:", var);
    scanf(" %d ", &ab);
    return ab;
}
void lervalores2(int *p, char var)
{
    printf("p =%d\n", p);
    printf("informar o valor de %c:", var);
    scanf(" %d", p);
    return;
}

int *ptr;
ptr = &a;
lervalores3(ptr, A);
printf("a=&d, end. de a =%d, valor de via pointer= %d/n",&a, *ptr");
ptr= &b;
lervalores3(ptr, 'b')

//*ptr poiter

int *pta;
int *ptaux;
ptaux= pta;
pta=(int* ) malloc(2 * sizeof(int));
lervalores4(pta, A);
pta+=1;
lervalores4(pta, B);
printf("a= %d, end. de a = %d\n", *a, pta, *pta)
pta +=1;
printf()
return 0;
