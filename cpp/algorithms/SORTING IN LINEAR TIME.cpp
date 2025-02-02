#include<iostream>
using namespace std;

void linearTime(int a[])
{
    int low,high,mid;
    mid = (low+high)/2;
    while(mid<=high)
    {
        if(a[mid]==0)
        {
            swap(a[low],a[mid]);
            low++;
            mid++;
        }
        else if(a[mid]==1)
        {
            mid++;
        }
        else{
            swap(a[mid],a[high]);
            high--;
        }
    }
}
void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] <<endl;
}
int main()
{
    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    linearTime(a);
    print(a,n);

	return 0;
}
