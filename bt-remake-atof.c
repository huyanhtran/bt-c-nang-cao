#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <String.h>

float str_to_float(char *arr){
    int i,j,flag;
    float val;
    char c;
    i=0;
    j=0;
    val=0;
    flag=0;
    while ((c = *(arr+i))!='\0'){
        if (c!='.'){
            val =(val*10)+(c-'0');
            if (flag == 1){
                --j;
            }
        }
        if (c=='.'){ if (flag == 1) return 0; flag=1;}
        ++i;
    }
    val = val*pow(10,j);
    return val;
}
int main(int argc, char const *argv[])
{
    
    char arr[20];
    float x;
    strcpy( arr,"16.8779");
    x=str_to_float(arr);
    printf ("%f",x);
}
