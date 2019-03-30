#ifndef FUNCTIONTEMPLATE
#define FUNCTIONTEMPLATE

template <typename Type>void Sort(Type a[], int n)
{
	for (int i = 1; i < n; i++)
	{
		for (int j = n - 1; j >= i; j--)
		{
			if (a[j] < a[j - 1])
			{
				Type temp = a[j - 1];
				a[j - 1] = a[j];
				a[j] = temp;
			}
		}
	}
}

#endif // FUNCTIONTEMPLATE

/*
//取第i个元素
elements[i]
//比较第i个和第j个元素的大小
elements[i] < elements [j]
//交换第i个和第j个元素
T temp = elements [i];
elements[i] = elements [j];
elements[j] = temp;


void BubbleSort_int(int pData[], int n)
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

BubbleSort_int(a, n);
*/
