#include <iostream>
#include <ctime>
#include<cstdlib>
  using namespace std;

  void heapify(int arr[], int n, int i) {

    int largest = i;
    int left = 2 * i ;
    int right = 2 * i + 1;

    if (left < n && arr[left] > arr[largest])
      largest = left;

    if (right < n && arr[right] > arr[largest])
      largest = right;

    if (largest != i) {
      swap(arr[i], arr[largest]);
      heapify(arr, n, largest);

    }
  }


  void heapSort(int arr[], int n) {

    for (int i = n / 2 - 1; i >= 0; i--)
      heapify(arr, n, i);

    for (int i = n - 1; i >= 0; i--) {
      swap(arr[0], arr[i]);
      heapify(arr, i, 0);
    }
  }

  void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i)
      cout << arr[i] << "  ";

  }

 int main(){
     int element;
     cout<<"Number of elements: ";
     cin>>element;
     cout<<endl;

     int Mithila[element];
     cout<<"Generated numbers are: ";
     srand(time(0));

    for(int i=0;i<element;i++){
       Mithila[i] = rand() %500+1;
       cout<<Mithila[i]<<"  ";

}
    cout<<endl;
    int n = sizeof(Mithila) / sizeof(Mithila[0]);
    heapSort(Mithila, n);
    cout<<endl;

    cout << "After using Heapsort: " ;
    printArray(Mithila, n);
}



