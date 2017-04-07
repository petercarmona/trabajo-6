#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

/*
    *Inicializar un arregla de enteros de n elementos
        - Suma de los elementos del arreglo
        - Promedio de los elementos del arerglo
        - Invertir el arreglo
        - Ordenar los elementos del arreglo
*/
void initializeArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"pos["<<i<<"]->";
        cin>>arr[i];
    }
}
int suma(int arr[], int n)
{
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
    }
    return sum;
}
float prome(int n, int suma)
{
    return (float(suma)/float(n));
}
void invertArray(int arr[], int n)
{
    n--;
    int tmp = 0;
    for(int i=0;i<(n/2);i++)
    {
        tmp = arr[(n)-i];
        arr[n-i] = arr[i];
        arr[i] = tmp;
    }
}
void sortArray(int arr[], int n)
{
    int tmp = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}
void printArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"Pos["<<i<<"]->"<<arr[i]<<endl;
    }
}
void sizeOfString(char arrOfChars[], int n)
{
    int counter=0;
    for(int i=0;arrOfChars[i]!=0;i++)
    {
        cout<<arrOfChars[i];
        counter++;
    }
    cout<<"  size of string = "<<counter-1<<endl;
}
int main()
{
    int n; //size
    cout<<"length of array: ";
    cin>>n;
    int arr[n];
    int sum = 0;
    float prom = 0.0;
    char arrOfChars[] = "hello";

    initializeArray(arr, n);

    sum = suma(arr, n);
    cout<<"suma="<<sum<<endl;

    prom = prome(n,sum);
    cout<<"promedio="<<prom<<endl;

    invertArray(arr, n);
    printArray(arr, n);

    sortArray(arr, n);
    printArray(arr, n);

    sizeOfString(arrOfChars, n);
    _getch();



    return 0;
}
