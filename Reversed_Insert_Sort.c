#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 20000
int * reversed_insert_sort(int * arr1);
void create_arr(int* arr1);
void show_arr(int * arr1);

int main ()
{
    int arr1[N];

    srand(time(NULL));

    create_arr(arr1);

    show_arr(arr1);

    printf("\n\n\n\n");
    
    reversed_insert_sort(arr1);

    show_arr(arr1);


	return 0;
}


int *  reversed_insert_sort(int * arr1)
{
   int i=0,j=0;
   int key;

   for(i=1;i<N;i++)
   {
    key=arr1[i];


    for(j=0;j<i;j++)
    {
        if(key<arr1[j])
        {
        arr1[i] = arr1[j];
        arr1[j]=key;
        key=arr1[i];
        }
        
    }
    
   }

   return arr1;

}

void create_arr(int* arr1)
{
    int i=0;
    for(i=0;i<N;i++)
    {
        arr1[i]=rand()%100;

    }
    
}

void show_arr(int * arr1)
{
    int i=0;

 for(i=0;i<N;i++)
    {
        printf("%d  ",arr1[i]);
    }
	
}
