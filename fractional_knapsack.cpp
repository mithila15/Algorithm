#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef struct {
    int profit;
    int weight;
    float density;
}Item;

void input(Item items[],int sizeOfItems){
    cout << "Enter total "<< sizeOfItems <<" Item's Profit and weight:- " << endl;
    for(int i=0; i<sizeOfItems; i++){
        cout << "Enter "<< i+1 << " Profit: ";
        cin >> items[i].profit;
        cout << "Enter "<< i+1 << " Weight: ";
        cin >> items[i].weight;
    }
}

void display(Item items[],int sizeOfItems){
  cout << ": Profit  ";
  for(int i=0; i<sizeOfItems; i++){
      cout << items[i].profit << "\t";
  }

  cout << endl << "weight:   ";
  for(int i=0; i<sizeOfItems; i++){
      cout << items[i].weight << "\t";
  }
  cout << endl;
}

bool compare(Item i1, Item i2){
    return (i1.density > i2.density);
}

float knapsack(Item items[],int sizeOfItems, int W){
    float totalProfit=0, totalWeight=0;

    //calculating density of each item
    for(int i=0; i<sizeOfItems; i++){
        items[i].density = items[i].profit/items[i].weight;
    }

    //sorting w.r.t to density using compare function
    sort(items, items+sizeOfItems,compare);

  for(int i=0; i<sizeOfItems; i++){
    if(totalWeight + items[i].weight<= W){
      totalProfit += items[i].profit ;
      totalWeight += items[i].weight;
    } else {
      int wt = W-totalWeight;
      totalProfit += (wt * items[i].density);
      totalWeight += wt;
      break;
    }
}
  cout << "total weight in bag: " << totalWeight<<endl;
  return totalProfit;
}
int main()
{
  int W,n;
  cout<<"Enter number Of Items : ";
  cin>>n;
  Item items[n];
  input(items,n);
  cout << "Entered data \n";
  display(items,n);
  cout<< "Enter Knapsack weight :";
  cin >> W;
  float mxVal = knapsack(items,n,W);
  cout << "Max value for "<< W <<" weight is "<< mxVal;

  return 0;
}



