//You will be given two numbers stored in variables 'a' and 'b'. Your task is to swap the values present and print them.
//Example
//input: 
//4 5
//output: 
//5 4

#include<stdio.h>

int main()
{
    int a, b, temp;
    scanf("%d%d", &a, &b);

    //Write your code here

    printf(" The Value of a and b before swapping is %d %d\n", a, b);
    
    temp = a;
    a = b;
    b = temp;


    printf(" The Value of a and b after swapping is %d %d\n", a, b);
    
    return 0;
}
