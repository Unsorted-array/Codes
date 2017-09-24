#include <iostream>
using namespace std;
void inputArray(int ar[],int n)
{
	for (int i = 0; i < n; ++i)
	{
		cin>>ar[i];
	}
}
void PrintArray(int ar[],int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout<<ar[i]<<" ";
	}
}
void mymerge(int ar[],int be,int end)
{
	int mid=(be+end)/2;
	int arl[100],arR[100];

	for(int i=be;i<=mid;++i)
	{
		arl[i-be]=ar[i];
	}
	for (int i =mid+1  ;i <=end ; ++i)
	{
		arR[i-(mid+1)] =ar[i];


	}
	PrintArray(arl,mid+1);
	cout<<endl;
	PrintArray(arR,end+1);
	cout<<endl;
	int i=be,j=mid+1,k=be;
	while(i<=mid&&j<=end)
	{
		if(arl[i]<arR[j])
		{
			ar[k]=arl[i-be];
			i++;
			k++;

		}
		else
		{
			ar[k]=arR[j-(mid+1)];
			j++;
			k++;
		}
	}
	while(j<=end)
	{

			ar[k]=arR[j-(mid+1)];
			j++;
			k++;
	}
	while(i<=mid)
	{
		ar[k]=arl[i-be];
			i++;
			k++;

	}

}
void MergeSort(int ar[],int be,int end)
{
	while(be<end)
	{
		int mid = (be+end)/2;

		MergeSort(ar,be,mid);
		MergeSort(ar,mid+1,end);
		mymerge(ar,be,end);
	}
}


int main()
{
	int n,m,ar[100],ar2[100];
	cin>>n;
	inputArray(ar,n);
	//inputArray(ar2,m);
	//merge(ar,n,ar2,m);
	PrintArray(ar,n);
	MergeSort(ar,0,n-1);

}
