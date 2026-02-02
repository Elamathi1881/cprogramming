pointers:



     // Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int num=10;
    int *point=&num;
    printf("%d \n",num);
    printf("%p \n",point);
    printf("%p\n",&num);
    printf("%d\n",*point);

    return 0;
}

----------------------------------------------------------------------------------------------------------

calculate compound growth of money:


// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>

int main() {
    int year;
    float pa,rp,fm;
    printf("Enter the principal amount:\n");
    scanf("%f",&pa);
    printf("Enter the rate power:\n");
    scanf("%f",&rp);
    printf("Enter the year:\n");
    scanf("%d",&year);
    fm=pa*pow((1+rp/100),year);
    printf("the final amount is %f\n",fm);




    return 0;
}


------------------------------------------------------------------------------------------------
swaping using function & pointers:


   // Online C compiler to run C program online
#include <stdio.h>
int a,b;
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
    

int main() {
    // Write C code here
    
    printf("enter the value of a :%d \n",a);
    scanf("%d",&a);
        printf("enter the value of b :%d \n",b);
    scanf("%d",&b);
    swap(&a,&b);
    printf("the value of a is:%d",a);
        printf("the value of b is:%d",b);


    

    return 0;
}

-------------------------------------------------------------------------------------------------------
array using pointer:


   // Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a[5]={1,2,3,4,5};
    for(int i=0;i<=5;i++){
            printf("%p\n",&a[i]);

    }

    return 0;
}


-------------------------------------------------------------------------------------------------------------

malloc:-

#include <stdio.h>
#include<stdlib.h>
int main() {
    int n,i;
    int *array;
    int sum=0;
    printf("Enter the number of element:");
    scanf("%d",&n);
    array=(int*)malloc(n *sizeof(int));
    if(array==NULL){
        printf("memory not allocated \n");
        return 0;
    }else{
        printf("memory allocated and the allocated memory is %d \n",n);
    }
    printf("enter %d numbers by adding a gap for each number \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
        sum+=array[i];
    }
    printf("The sum of all elements is :%d \n",sum);
    free(array);
    printf("memory deleted successfully");
    

    return 0;
}

----------------------------------------------------------------------------------------------------