#ifndef TEMPLATE_H
#define TEMPLATE_H

template<typename T>
bool Is_Sorted(T a[], int n) {
	bool flag = true;
	for (int i = 0; i < n - 1; ++i)
		if (a[i] > a[i + 1])
			flag = false;
	return flag;

}

#endif // TEMPLATE_H
