#include <stdio.h>
// prototipos de função
int lervalores1(char);
void lervalores2(int *, char);

int main()
{
    int a = 0;
    int b = 0;
    printf("a=%d, end. de a=%p, valor de a via end. a=%d\n", a, &a, *&a);
    printf("b=%d, end. de b=%p, valor de b via end. b=%d\n", b, &b, *&b);
    char A = 'a';
    a = lervalores1(A);
    lervalores2(&b, 'b');
    printf("a=%d, end. de a=%p, valor de via end. a= %d\n", a, &a, *&a);
    printf("b=%d, end. de b=%p, valor de via end. b= %d\n", b, &b, *&b);
    return 0;
}
// declarar o que a variavel faz

int lervalores1(char var)
{
    int ab = 0;
    printf("informar o valor de %c:", var);
    scanf("%d", &ab);
    return ab;
}
void lervalores2(int *ab, char var)
{
    printf("ab=%d\n", *ab);
    printf("informar o valor de %c: ", var);
    scanf("%d", ab);
    return;
}