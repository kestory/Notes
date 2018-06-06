class Untitled {
	public static void sort(int[] a) {
		int n = a.length;
		for (int i = 0; i < n; i++) {
			int min = i;
			for (int j = i + 1; j < n; j++)
				if (a[j] < a[min])	min = j;
			int  t = a[i];
			a[i] = a[min];
			a[min] = t;
		}
	}

	private static void show(int[] a) {
		for (int i = 0; i < a.length; i++)
			System.out.print(a[i] + " ");
		System.out.println();
	}

	public static void main(String[] args) {
		int[] a = { 1, 4, 2, 8, 5, 7};
		sort(a);
		show(a);
	}
}
