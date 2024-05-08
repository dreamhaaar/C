#include <stdio.h>

void fun(int arr[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}

void func(int *pArr)
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(pArr + i));
    }
}

void fun1(int *ptr)
{
    *ptr = 30;
    printf("\n%d", *ptr);
}

void fun2(int *ptr)
{
    *ptr -= 50;
    printf("\n%d", *ptr);
}
int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    fun(arr);  // normal array passing
    func(arr); // array of pointers

    int x = 10;
    int *ptr;  //error if you initialize and declare together eg. int *ptr = 10;
    *ptr = 10; // this is allowed;
    fun1(&x);  // normal  variable to passed in pointer
    fun2(ptr); // pointer to pointer
}