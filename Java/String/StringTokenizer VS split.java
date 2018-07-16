import java.util.StringTokenizer;

class Untitled {
	public static void main(String args[]) {
		String str = "this is a test";
		System.out.println("----- StringTokenizer通过空格分隔 ------");
		StringTokenizer st = new StringTokenizer(str);
		//默认的分隔符是：空格、制表符（\t）、换行符(\n）、回车符（\r）
		while (st.hasMoreTokens()) {
			System.out.println(st.nextToken());
		}
		System.out.println("----- StringTokenizer通过 i 分隔 ------");
		StringTokenizer st2 = new StringTokenizer(str, "i");
		while (st2.hasMoreTokens()) {
			System.out.println(st2.nextToken());
		}
		System.out.println("----- split通过空格分隔 ------");
		String[] result = str.split("\\s");
		// \s = A whitespace character: [ \t\n\x0B\f\r]
		for (int x = 0; x < result.length; x++)
			System.out.println(result[x]);
		System.out.println("----- split通过 i 分隔 ------");
		String[] result2 = str.split("i");
		for (int x = 0; x < result2.length; x++)
			System.out.println(result2[x]);
	}
}
