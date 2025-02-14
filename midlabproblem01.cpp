#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//This function mechanism follows BinarySearch Algorithm
int binarySearch(int arr[], int x, int low, int high) {

while (low <= high){
//calculating middle position of the array
int mid = (low + high ) / 2;
//condition checking whether the key value is equal to middle position

if (arr[mid] == x)
return mid;
//condition checking whether the key value is greater than middle position
if (arr[mid] < x)
low = mid + 1;

else
high = mid - 1;
}
return -1;
}

int main()
{
int n,key;
cout<<"Number of elements:";
cin>>n;
int arr[n];
int sortarr[n];
for(int i =0;i<n;i++)
{
cin>>arr[i];

}
//sorting random value of the array
int m = sizeof(arr) / sizeof(arr[0]);
sort(arr, arr + m);

//Print value after sorting
cout << "Array after sorting : \n";
for (int j = 0; j < n; ++j)
{

sortarr[j] =arr[j];
cout <<sortarr[j] << " ";
}
cout<<endl;

cout<<"Enter a value to find:";
cin>>key;
//function calling
int result = binarySearch(sortarr, key, 0, n-1);
if (result == -1){
cout<<"Not found";

}

else{
cout<<key<<" Element is found at index "<<result;

}

}









