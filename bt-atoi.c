#include <stdio.h>
#include <stdint.h>
#include <String.h>
#include <stdlib.h>
int test_atoi(char const *str){
    int val;
    val=atoi(str);
    return val;

}
int main(int argc, char const *argv[])
{
    char str[100];
    strcpy(str,"4511672.5557");
    printf ("%d",test_atoi(str));
    
    return 0;
}