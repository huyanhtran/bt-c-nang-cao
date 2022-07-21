#include <stdio.h>
#include <stdint.h>
#include <String.h>
#include <stdlib.h>
int test_atoi(char const *str){
    int val;
    val=atoi(str);
    return val;

}
void test_atof( char const *str){
    double va;
    va = atof(str);
    printf ("%lf",va);
    
}
int main(int argc, char const *argv[])
{
    char str[30];
    strcpy(str,"7.1555");
    printf ("%d\n",test_atoi(str));
    test_atof(str);
    
    return 0;
}