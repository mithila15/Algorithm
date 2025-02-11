#include<iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void heapify(int mithilaArr[], int n, int i)
{
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    int smallest = i;
    if (l < n && mithilaArr[l] < mithilaArr[smallest])
    {
        smallest = l;
    }
    if (r < n && mithilaArr[r] < mithilaArr[smallest])
    {
        smallest = r;
    }
    if (smallest != i)
    {
        swap(mithilaArr[i], mithilaArr[smallest]);
        heapify(mithilaArr, n, smallest);
    }
}
void buildHeap(int mithilaArr[], int n)
{
    for (int i = (n / 2) - 1; i >= 0; i--)
    {
        heapify(mithilaArr, n, i);
    }
}
void Heap_sort(int mithilaArr[], int n)
{
    buildHeap(mithilaArr,n);
    for(int i=n - 1; i >= 0; i--)
    {
        swap(mithilaArr[0],mithilaArr[i]);
        heapify(mithilaArr, i, 0);
    }
}

print(int mithilaArr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << mithilaArr[i] << "\t";
    }
}

int main()
{
    int n;
    cout << " Random Number of elements: ";
    cin >> n;
    int mithilaArr[n];
    cout<<endl;
    cout<<endl;
    cout << "Generated Random numbers are: ";
    srand(time(0));
    for(int i=0; i<n; i++)
    {
        mithilaArr[i]=rand()%500+1;
        cout << mithilaArr[i]<< "\t";
    }
    cout<<endl;
    cout<<endl;
    Heap_sort(mithilaArr, n);
    cout << "After using Heapsort with Descendingorder : ";
    print(mithilaArr,n);
    cout<<endl;
    cout<<endl;
    return 0;
}



