#include<iostream>
#include <ctime>
#include<cstdlib>
using namespace std;

void Merge(int a[], int low, int high, int mid)
{

int i=low,j=mid+1,k=0;
int temp[high-low+1];

while(i<=mid && j<= high)
{
if(a[i]>a[j])
temp[k++]=a[i++];

else
temp[k++]=a[j++];

}

while(i<=mid)
{
temp[k++]=a[i++];
}

while(j<=high)
{
temp[k++]=a[j++];
}

for(i=low;i<=high;i++)
{

a[i]=temp[i-low];

}
}


void MergeSort(int a[],int low, int high)
{
int mid;

if(low<high)
{
mid=(low+high)/2;

MergeSort(a,low,mid);
MergeSort(a,mid+1,high);

Merge(a,low,high,mid);
}

return;
}

void output(int a[],int n)
{
for(int i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
}

int main()
{
int n;
cout<<"Number of elements :";
cin>>n;
int Mithila[n];
cout<<endl;
cout<<"Generated numbers are :";
srand(time(0));
for(int i=0;i<n;i++){
Mithila[i] = rand() %500+1;
cout<<Mithila[i]<<" ";
}
cout<<endl;
int s = sizeof(Mithila) / sizeof(Mithila[0]);
cout<<endl;
MergeSort(Mithila,0,s);
cout<<endl;
cout<<"After using merge sort:";
output(Mithila,s);


}

