#include <iostream>


extern "C" int AdderASM(int a, int b, int c);
int AdderCPP(int a, int b, int c);


int main()
{
    int a = 10, b = 20, c = 30;
    int sum = AdderASM(a, b, c);

    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("c: %d\n", c);

    printf("sum: %d\n", sum);


    return 0;
}

int AdderCPP(int a, int b, int c)
{
    return a + b + c;
}
