import java.util.Hashtable;
import java.util.Set;

class Untitled {
	public static void main(String args[]) {
		// create an empty Hashtable
		Hashtable<Integer, String>  hashtable1 = new Hashtable<Integer, String>();
		//Hashtable hashtable1 = new Hashtable();

		// use put() method to put elements to the Hashtable
		hashtable1.put(1, "Element1");
		hashtable1.put(2, "Element2");
		hashtable1.put(3, "Element3");
		hashtable1.put(4, "Element4");
		hashtable1.put(5, "Element5");

		// create a set view
		Set<Integer> set = hashtable1.keySet();
		//Set set = hashtable1.keySet();

		//output
		System.out.println("**Keyset of \"hashtable1\"**");
		for (Integer val : set)
			System.out.println(val);
		System.out.println("result: " + set);
	}
}
