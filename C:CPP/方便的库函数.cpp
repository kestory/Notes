/ / / / / / /   void * memset ( void * ptr, int value, size_t num );   / / / / / / /
/* memset example */
#include <stdio.h>
#include <string.h>//memset
int main ()
{
	char str[] = "almost every programmer should know memset!";
	memset (str, '-', 6);
	puts (str);
	return 0;
}
------------------------------------------------------------------------------------
------ every programmer should know memset!
------------------------------------------------------------------------------------
#include <iostream>
using namespace std;
int s[1024];
int main()
{
	memset(s, 0, sizeof(s)); //以后就不要写for循环来初始化了
	for (int i = 0; i < 1023; i++)	cout << s[i];
	return  0;
}
memset把整个数组初始化为全0了。
当然 int s[1024];  在main外面没初始化也会全为0
输出都是全0

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

/ / / / / / /   int getopt( int argc, char *const argv[], const char *optstring );   / / / / / / /
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
struct globalArgs_t {
	int noIndex;				/* -I option */
	char *langCode;				/* -l option */
	const char *outFileName;	/* -o option */
	FILE *outFile;
	int verbosity;				/* -v option */
	char **inputFiles;			/* input files */
	int numInputFiles;			/* # of input files */
} globalArgs;

static const char *optString = "Il:o:vh?";
int main( int argc, char *argv[] ) {
	int opt = 0;
	/* Initialize globalArgs before we get to work. */
	globalArgs.noIndex = 0;		/* false */
	globalArgs.langCode = NULL;
	globalArgs.outFileName = NULL;
	globalArgs.outFile = NULL;
	globalArgs.verbosity = 0;
	globalArgs.inputFiles = NULL;
	globalArgs.numInputFiles = 0;

	while ( (opt = getopt( argc, argv, optString )) != -1 ) {
		switch ( opt ) {
		case 'I': globalArgs.noIndex = 1;	/* true */
			puts("I");					break;

		case 'l': globalArgs.langCode = optarg;
			printf("option l:'%s'\n", optarg);		break;

		case 'o': globalArgs.outFileName = optarg;
			printf("option o:'%s'\n", optarg);		break;

		case 'v': globalArgs.verbosity++;
			printf("option v:'%d'\n", globalArgs.verbosity);	break;

		case 'h':	/* fall-through is intentional */
		case '?'://display_usage();
			puts("h/?");					break;

		default:
			/* You won't actually get here. */		break;
		}


	}
	return EXIT_SUCCESS;
}

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

/ / / / / / /   char* strtok( char* str, const char* delim );   / / / / / / /

#include <cstring>//strtok
#include <iostream>
using namespace std;
int main()
{
	char input[100] = "A bird came down the walk";
	char *token = strtok(input, " ");
	while (token != NULL) {
		cout << token << '\n';
		token = strtok(NULL, " ");
	}
}

------------------------------------------------------------------------------------
A
bird
came
down
the
walk
------------------------------------------------------------------------------------
用STL进行字符串的分割
涉及到string类的两个函数find和substr
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define D(x) cout<<#x<<"="<<x<<endl;

int main() {
	string str = "I am a student.";
	str += " ";
	vector<string> token;
	int len = str.size();
	for (int i = 0; i < len; ++i)
	{
		int pos = str.find(" ", i); //在 str[i]~end范围查找
		string s = str.substr(i, pos - i);
		token.push_back(s);
		i = pos; //for循环会每次++
	}
	for (int i = 0; i < token.size(); i++)
		D(token[i])

}
