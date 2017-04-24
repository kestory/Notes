#include <algorithm>
#define dprint(expr) printf(#expr "= %d\n",expr)
#define D(x) cout<<#x<<"="<<x<<endl;
#define exchange(a,b)     (a=a^b,b=a^b,a=a^b)
ios::sync_with_stdio(false);
~~~~~~~~~~~~~~~~~~~~~~~~~去除字符串中空格~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <iostream>
#include <cstring>
#define D(x) cout<<#x<<"="<<x<<endl;
using namespace std;
int main(int argc, char *argv[]) {
	char a[]="  7 349 472	  7 758 1";
	char b[1024];
	for(int i=0,j=0;i<strlen(a);i++){
		if(a[i]==' '||a[i]=='\t')
			continue;
		else{
			b[j]=a[i];
			j++;
		}
	}
	cout<<b;
}

~~~~~~~~~~~~~~~~~~~~~~~~~~~二分查找(循环)~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <iostream>
using namespace std;
int binarySearch(int a[],int first,int last, int key){
	while(first<=last){//last-first+1>=1
		int mid=first+((last-first)>>1);//To prevent overflow
		if(key==a[mid])
			return mid;
		else if(key<a[mid])
			last=mid-1;
		else
			first=mid+1;
	}
	return -1;
}
int main(int argc, char *argv[]) {
	int a[11] = {1,4,7,9,11,14,16,23,45,67,78};
	int n = sizeof(a)/sizeof(a[0]);
	cout<<n<<endl;
	for(int i=0;i<n;i++)
		cout<<binarySearch(a,0,n-1,a[i]);
	return 0;
}

~~~~~~~~~~~~~~~~~~~~~~~~~~~冒泡排序(数组)~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void BubbleSort_int(int pData[], int count)
{
	//int temp;
	for (int i = 1; i < count; i++)
	{
		for (int j = count - 1; j >= i; j--)
		{
			if (pData[j] < pData[j - 1])
			{
				int temp = pData[j - 1];
				pData[j - 1] = pData[j];
				pData[j] = temp;
			}
		}
	}
}

BubbleSort_int(a,n);

~~~~~~~~~~~~~~~~~~~~~~~~~~~归并排序()~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void merge(int a[], int temp[], int first, int mid, int last){
	int i=first;
	int x=first;
	int j=mid+1;
	while(i<=mid&&j<=last){
		if (a[i]>a[j]){
			temp[x++]=a[j++];
			//s+=mid-i+1;
		}
		else
			temp[x++]=a[i++];
	}

	while(i<=mid)	temp[x++]=a[i++];
	while(j<=last)	temp[x++]=a[j++];
	for (int ii = first; ii <= last; ++ii)		a[ii]=temp[ii];
}
void mergeSort(int E[], int temp[], int first, int last){
	if (first<last){
		int mid=(first+last)>>1;// just/2
		mergeSort(E, temp, first, mid);
		mergeSort(E, temp, mid+1, last);
		merge(E, temp, first, mid, last);
	    }
	return;
}

	int a[MAX];
	int temp[MAX];
	mergeSort(a,temp,0,n-1);

~~~~~~~~~~~~~~~~~~~~~~~最大公因数(recurrence&&iteration)~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
int gcd(int a,int b){
	while(b!=0){
		int t=a%b;
		a=b;
		b=t;
	}
	return a;
}
int Gcd(int a, int b){
	if(b == 0)
		return a;
	return Gcd(b, a % b);
}
~~~~~~~~~~~~~~~~~~~~~~~~~~数字变成字符串(itoa)~~~~~~~~~~~~~~~~~~~~~~~~~~~
	char str[255];
	int numbers=1234;
	sprintf(str, "%d", numbers);
~~~~~~~~~~~~~~~~~~~~~~~~~~atoi()~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <cstdlib>
	char str[255]="4321";
	int numbers=atoi(str);
~~~~~~~~~~~~~~~~~~~~~~~~~~quickSort()~~~~~~~~~~~~~~~~~~~~~~~~~~~
/takes the first element as pivot

int partition (int arr[], int low, int high){
	int pivot = arr[low];
	int i = low;
	for (int j = low + 1; j <= high; j++){
		if (arr[j] <= pivot){
			i++;
			swap(arr[i], arr[j]);//#include <algorithm>
		}
	}
	swap(arr[i], arr[low]);
	return i;
}

void quickSort(int arr[], int low, int high){
	if (low < high){
		int pi = partition(arr, low, high);
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

/takes middle element as pivot
//http://www.algolist.net/Algorithms/Sorting/Quicksort

void quickSort(int arr[], int left, int right) {
	int i = left, j = right;
	int pivot = arr[(left + right) / 2];
	/* partition */
	while (i <= j) {
		while (arr[i] < pivot)	i++;
		while (arr[j] > pivot)	j--;
		if (i <= j)	swap(arr[i++], arr[j--]);//#include <algorithm>
	};
	/* recursion */
	if (left < j)	quickSort(arr, left, j);
	if (i < right)	quickSort(arr, i, right);
}

