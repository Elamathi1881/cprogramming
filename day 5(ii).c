note down:-

// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int num[5]={11,12,22,33,44};
    int *point=num;
    printf("%d \n",*point);
    printf("%d \n",*(point+1));
    printf("%d \n",*(point+2));
    printf("%d \n",*(point+3));
    printf("%d \n",*(point+4));
    printf("%d \n",*(point+5));
    point++;
    printf("%d \n",*point);
    point--;
        printf("%d \n",*point);
point+=2;
printf("%d \n",*point);

    return 0;
}
__________________________________________________________________________________________

loop using pointer:-

#include <stdio.h>

int main() {
    int a[5]={0,1,2,3,4};
    int *point=a;
    for(int i=0;i<5;i++){
    printf("%d \n",*point);
    point++;
}
    return 0;
}
--------------------------------------------------------------------------------------------------
  pointer to pointer:-


   
#include <stdio.h>

int main() {
    int number =10;

    int *point=&number;
    int **secondpoint=&point;
    printf("%d \n",number);//to show the value of variable
    printf("%d \n",*point);//to show the value of pointer
    printf("%d\n",**secondpoint);//to show the address of second pointer
    printf("%p \n",point);//to show the address of pointer
    printf("%p \n",secondpoint);//to show the address of second pointer
    **secondpoint=20;
    printf("%p \n",secondpoint);//to show the address of second pointer
    printf("%d\n",**secondpoint);//to show the address of second pointer



    return 0;
}
______________________________________________________________________________________________________
