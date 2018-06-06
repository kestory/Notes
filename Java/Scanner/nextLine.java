import java.util.*;
class Untitled {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int i = s.nextInt();
		String word = s.next();//读到空白符
		s.nextLine();//clear buffer
		s.nextLine();//clear buffer
		s.nextLine();//clear buffer
		word = s.nextLine();
		s.close();
		System.out.println(i);
		System.out.println(word);
	}
}


/*
1
2
3
4
5
---
1
5
*/
