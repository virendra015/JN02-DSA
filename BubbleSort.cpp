/*Program to Demonstrate The Bubble Sort*/
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
   
    cout<<"Enter the number of elements in array\n";
    int n ;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++ )
        {   
            cout<<"Enter Element is array:";
            cin>>array[i];
        }
    int counter = 1;
    while(counter<n){
        for (int i=0;i<n-counter;i++)   {
                if(array[i]>array[i+1]){
                    int temp = array[i];
                    array[i]=array[i+1];
                    array[i+1]=temp;

                }
        }
        counter ++ ;
        }   
        cout<<"**********Sorted Array Using Bubble Sory**********\n";
    for(int i=0;i<n;i++ ) {
        cout<<array[i]<<"";
        cout<<endl;
    }


    


}

