#include <iostream>

using namespace std;

void countingSort(int inputarray[], int s, int r)
{
    int outputarray[s];
    int countingarray[r];
    
    for(int i =0; i<r;i++)
    {
        countingarray[i]=0;
    }
    for(int i=0; i<s;i++)
    {
        ++countingarray[inputarray[i]];
    }
    for(int i=1;i<r;i++)
    {
        countingarray[i]=countingarray[i]+countingarray[i-1];
    }
    for(int i=0;i<s;i++)
    {
        outputarray[--countingarray[inputarray[i]]]= inputarray[i];
    }
    for (int i=0;i<s;i++)
    {
        inputarray[i]= outputarray[i];
    }
}

int main()
{
   int size=0;
  int range=10;
  cout<<"enter the size of the array";
  cin>>size;
  int myarray[size];
  cout<< "enter the array :";
  for(int i =0;i<size;i++)
  {
      cin>>myarray[i];
  }
  cout<<"array befor sorting : ";
  for (int i=0; i<size;i++)
  {
      cout<<myarray[i]<<" ";
  }
  
  countingSort(myarray,size,range);
   cout<<"after befor sorting : ";
  for (int i=0; i<size;i++)
  {
      cout<<myarray[i]<<" ";
  }
  
    return 0;
}
