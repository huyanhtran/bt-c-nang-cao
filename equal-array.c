#include <stdio.h>


#define SIZE_OF_ARRAY(array)  (sizeof(array)/sizeof(array[0])) /* note: sizeof(array) tra ve so bytes maf mang can ,sizeof(array[0])tra ve size cua 1 phan tu nen kq se ra dc so phan tu trong array*/

void array_equal(char array1[], size_t size1, char array2[], size_t size2){
    
     
    
    for (size_t i = 0; i < size1; ++i) {
        if (array1[i] == array2[i]){ 
         printf("giong vi tri a[%d]=%c,ma hex 0x%x\n",i,array1[i],array1[i]) ; 
        }else {
         printf ("hong giong vi tri a[%d],%c khac %c\n",i,array1[i],array2[i]);
        }
    }
}
int main(void)
{
    char array1[] = "con meo meo gau!";
    char array2[] = "con cho gau gau!!";
   array_equal(array1, SIZE_OF_ARRAY(array1), array2 , SIZE_OF_ARRAY(array2));
    return 0;
}