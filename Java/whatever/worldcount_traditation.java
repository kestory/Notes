import java.util.*;
class Untitled {
	public static void main(String[] args) {
		String[] text = new String[]
		{ "the weather is good", "today is good", "good weather is good", "today has good weather" };
		Hashtable ht = new Hashtable();//Hashtable(Y) HashTable(X)
		for (int i = 0; i <= 3; ++i) {//<=3(Y) <3(X)
			StringTokenizer st = new StringTokenizer(text[i]);
			while (st.hasMoreTokens()) {
				String word = st.nextToken();
				if (!ht.containsKey(word)) { ht.put(word, new Integer(1)); } else {
					int wc = ((Integer)ht.get(word)).intValue() + 1; // 计数加1
					ht.put(word, new Integer(wc));
				}
			}
		}
		for (Iterator itr = ht.keySet().iterator(); itr.hasNext(); ) {//keySet(Y) KeySet(X)
			String word = (String)itr.next();
			System.out.print(word + ": " + (Integer)ht.get(word) + "; ");
		}
	}
}
