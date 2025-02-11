#include<iostream>
using namespace std;
void knapsack(int v[],int w[],int n,int W){

int k[20][20],i,j;
for(i = 0; i<=n;i++)
{
    for(j = 0; j<=W;j++)
    {
        if(i == 0 || j == 0)
        {
            k[i][j] = 0;
        }
        else if(j<w[i])
        {
            k[i][j] = k [i-1][j];

        }
        else{

            if(k[i-1][j]>k[i-1][j-w[i]]+v[i])
            {
                k[i][j] = k [i-1][j];

            }
            else {

                k[i][j] = k[i-1][j-w[i]]+v[i];
            }

        }
    }
}
for(i=0;i<=n;i++)
{
    for(j =0;j<=W;j++)
    {
        cout<<" "<<k[i][j] ;
    }
    cout<<("\n");
}
cout<<"Maximum possible profit "<<k[n][W];



}


int main()
{
    int v[20],w[20],i,j,n,W;
    void knapSack(int [],int [],int ,int);
    cout<<"Number of items:";
    cin>>n;
    cout<<"Capacity of Knapsack: ";
    cin>>W;
    for(i =1;i<=n;i++){

        cout<<"Enter Weight and Profit  : ";
        cin>>w[i];
        cin>>v[i];
    }
    knapsack(v,w,n,W);

}


