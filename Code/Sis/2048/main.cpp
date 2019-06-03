//所有程序所需的库
#include <iostream>
#include <cstdlib>//产生随机数用    rand()
#include <ctime>//产生随机数用  ，可以产生一个种子。
#include <conio.h>//getch使用的库
#include <cmath>
#include <iomanip>//setw()函数使用的库


#include <windows.h>//颜色
#include <stdio.h>//颜色
#include <stdlib.h>//颜色

using namespace std;



void displayout(int a[][4], int score, int clean) {
	int num;
	HANDLE hOut;
	//  获取输出流的句柄a
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	if (clean == 0) {
		system("CLS");
	}
	else if (clean == 1) {}
	else {
		cout << "clean参数错误" << endl;
		goto close;
	}
	int i, j;
	SetConsoleTextAttribute(hOut,
		FOREGROUND_GREEN);// |        // 前景色_绿色

	// cout << "********************************************" << endl;
	// cout << "***************2 0 4 8 游 戏****************" << endl;
	// cout << "********************************************" << endl;
	const char *welcome; 
	welcome=
		"   /\\\\\\\\\\\\\\\\\\          /\\\\\\\\\\\\\\                /\\\\\\         /\\\\\\\\\\\\\\\\\\ \n"
		"  /\\\\\\///////\\\\\\      /\\\\\\/////\\\\\\            /\\\\\\\\\\       /\\\\\\///////\\\\\\ \n"
		"  \\///      \\//\\\\\\    /\\\\\\    \\//\\\\\\         /\\\\\\/\\\\\\      \\/\\\\\\     \\/\\\\\\ \n"
		"             /\\\\\\/    \\/\\\\\\     \\/\\\\\\       /\\\\\\/\\/\\\\\\      \\///\\\\\\\\\\\\\\\\\\/ \n"
		"           /\\\\\\//      \\/\\\\\\     \\/\\\\\\     /\\\\\\/  \\/\\\\\\       /\\\\\\///////\\\\\\ \n"
		"         /\\\\\\//         \\/\\\\\\     \\/\\\\\\   /\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\   /\\\\\\      \\//\\\\\\ \n"
		"        /\\\\\\/            \\//\\\\\\    /\\\\\\   \\///////////\\\\\\//   \\//\\\\\\      /\\\\\\ \n"
		"        /\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\   \\///\\\\\\\\\\\\\\/              \\/\\\\\\      \\///\\\\\\\\\\\\\\\\\\/ \n"
		"        \\///////////////      \\///////                \\///         \\///////// ";
	SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	SetConsoleTextAttribute(hOut,
		FOREGROUND_GREEN |
		FOREGROUND_INTENSITY);
	cout << welcome << endl;
	SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	cout << "   +--------+--------+--------+--------+    " << endl;
	for (i = 0; i <= 3; i++) {
		cout << "   |        |        |        |        |    " << endl;
		cout << "   |";
		for (j = 0; j <= 3; j++) {
			if (j > 0) {
				cout << "|";
			}
			if (a[i][j] != 0) {
				cout << setw(5);
				if (a[i][j] == 2) {
					SetConsoleTextAttribute(hOut,
						FOREGROUND_GREEN |
						FOREGROUND_BLUE |
						FOREGROUND_INTENSITY);
					cout << a[i][j];
					SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
				}
				else if (a[i][j] == 4) {
					SetConsoleTextAttribute(hOut,
						FOREGROUND_RED |
						FOREGROUND_BLUE |
						FOREGROUND_INTENSITY);
					cout << a[i][j];
					SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
				}
				else if (a[i][j] == 8) {
					SetConsoleTextAttribute(hOut,
						FOREGROUND_RED |
						FOREGROUND_INTENSITY);
					cout << a[i][j];
					SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
				}
				else if (a[i][j] == 16) {
					SetConsoleTextAttribute(hOut,
						FOREGROUND_BLUE |
						FOREGROUND_INTENSITY);
					cout << a[i][j];
					SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
				}
				else if (a[i][j] == 32) {
					SetConsoleTextAttribute(hOut,
						FOREGROUND_GREEN |
						FOREGROUND_INTENSITY);
					cout << a[i][j];
					SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
				}
				else if (a[i][j] == 64) {
					SetConsoleTextAttribute(hOut,
						FOREGROUND_GREEN |
						FOREGROUND_RED);
					cout << a[i][j];
					SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
				}
				else if (a[i][j] == 128) {
					SetConsoleTextAttribute(hOut,
						FOREGROUND_GREEN |
						FOREGROUND_BLUE);
					cout << a[i][j];
					SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
				}
				else if (a[i][j] == 256) {
					SetConsoleTextAttribute(hOut,
						FOREGROUND_GREEN |
						FOREGROUND_BLUE);
					cout << a[i][j];
					SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
				}
				else if (a[i][j] == 512) {
					SetConsoleTextAttribute(hOut,
						FOREGROUND_GREEN |
						FOREGROUND_BLUE);
					cout << a[i][j];
					SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
				}
				else if (a[i][j] == 1024) {
					SetConsoleTextAttribute(hOut,
						FOREGROUND_GREEN |
						FOREGROUND_BLUE);
					cout << a[i][j];
					SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
				}
				else
					cout << a[i][j];

			}
			else {
				cout << "     ";
			}
			cout << "   ";
		}
		cout << "|    " << endl;
		cout << "   |        |        |        |        |    " << endl;
		cout << "   +--------+--------+--------+--------+    " << endl;
	}
	SetConsoleTextAttribute(hOut,
		FOREGROUND_RED |        // 前景色_红色
		FOREGROUND_INTENSITY);
	cout << "                                            " << endl;
	cout << "你获得的分数是：" << setw(6) << score << "                      " << endl;
	cout << "                                            " << endl;
	SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
close:;
}

bool vacancy(int a[][4]) {
	int x, y;
	for (y = 0; y < 4; y++) {
		for (x = 0; x < 4; x++) {
			if (a[y][x] == 0) {//判断还有没有空位了
				return 0;//如果还有空位，则游戏可以继续运行
			}
		}
	}
	return 1;
}



bool gameoverleft(int a[][4]) {
	int x, y;
	if (vacancy(a)) {//如果没有空位，则进行下一步的判断
		for (y = 0; y < 4; y++) {
			for (x = 0; x < 3; x++) {
				if (a[y][x] == a[y][x + 1]) {
					return 0;//游戏还可以进行下去
				}
			}
		}
	}
	else {
		return 0;
	}
	return 1;
}



bool gameoverup(int a[][4]) {
	int x, y;
	if (vacancy(a)) {//如果没有空位，则进行下一步的判断
		for (x = 0; x < 4; x++) {
			for (y = 0; y < 3; y++) {
				if (a[y][x] == a[y + 1][x]) {
					return 0;//游戏还可以进行下去
				}
			}
		}
	}
	else {
		return 0;
	}
	return 1;
}
bool gameover(int a[][4]) {
	int NS, EW;
	NS = gameoverup(a);
	EW = gameoverleft(a);
	if (NS == 1 && EW == 1) {
		return 1;
	}
	else {
		return 0;
	}
}


void xtoy(int(*a)[4]) {
	int x = 0, y = 0;
	int temp[4][4];
	for (y = 0; y < 4; y++) {
		for (x = 0; x < 4; x++) {
			temp[x][y] = a[y][x];
		}
	}
	for (y = 0; y < 4; y++) {
		for (x = 0; x < 4; x++) {
			a[y][x] = temp[y][x];
		}
	}
}


void xtox(int(*a)[4]) {
	int x = 0, y = 0;
	int temp[4][4];
	for (y = 0; y < 4; y++) {
		for (x = 0; x < 4; x++) {
			temp[y][3 - x] = a[y][x];
		}
	}
	for (y = 0; y < 4; y++) {
		for (x = 0; x < 4; x++) {
			a[y][x] = temp[y][x];
		}
	}
}
void ytoy(int(*a)[4]) {
	int x = 0, y = 0;
	int temp[4][4];
	for (y = 0; y < 4; y++) {
		for (x = 0; x < 4; x++) {
			temp[3 - y][x] = a[y][x];
		}
	}
	for (y = 0; y < 4; y++) {
		for (x = 0; x < 4; x++) {
			a[y][x] = temp[y][x];
		}
	}
}

int left(int(*a)[4]) {
	int can_play[4][4];
	int x = 0, y = 0;
	int m = 0, n = 0;
	int i = 0, j = 0, k = 0;
	int add_score = 0;
	int judge = 0;
	for (y = 0; y < 4; y++) {
		for (x = 0; x < 4; x++) {
			can_play[y][x] = a[y][x];
		}
	}
	for (y = 0; y < 4; y++) {
		for (x = 0; x < 4; x++) {
			if (a[y][x] != 0) {
				for (i = 1; i <= 3 - x; i++) {
					if (a[y][x] == a[y][x + i]) {
						if (i == 1) {
							a[y][x] = a[y][x] * 2;
							a[y][x + i] = 0;
							add_score += a[y][x];
						}
						else if (i == 2) {
							if (a[y][x + 1] == 0) {
								a[y][x] = a[y][x] * 2;
								a[y][x + i] = 0;
								add_score += a[y][x];
							}
						}
						else {
							if (a[y][x + 1] == 0 && a[y][x + 2] == 0) {
								a[y][x] = a[y][x] * 2;
								a[y][x + i] = 0;
								add_score += a[y][x];
							}
						}
						i = 999;//防止多次运算，
						x = x + 1;//防止多次运算，
					}
				}
			}
		}
	}
	for (k = 0; k < 3; k++) {
		for (y = 0; y <= 3; y++) {
			for (x = 0; x <= 3; x++) {
				if (a[y][x] == 0 && a[y][x + 1] != 0 && x + 1 <= 3) {
					a[y][x] = a[y][x + 1];
					a[y][x + 1] = 0;
				}
			}
		}
	}
	for (y = 0; y < 4; y++) {
		for (x = 0; x < 4; x++) {
			if (can_play[y][x] == a[y][x]) {
				judge++;
			}
		}
	}
	if (judge == 16) {
		return -1;
	}
	return add_score;
}


int up(int(*a)[4]) {
	int add_score_temp = 0;
	xtoy(a);
	add_score_temp = left(a);
	xtoy(a);
	return add_score_temp;
}


int right(int(*a)[4]) {
	int add_score_temp = 0;
	xtox(a);
	add_score_temp = left(a);
	xtox(a);
	return add_score_temp;
}


int down(int(*a)[4]) {
	int add_score_temp = 0;
	ytoy(a);
	xtoy(a);
	add_score_temp = left(a);
	xtoy(a);
	ytoy(a);
	return add_score_temp;
}


int suiji(int b) {
	b++;
	int temp;
	temp = rand();
	return temp % b;
}

int suiji(int a, int b) {
	int temp;
	b++;
	while (1) {
		temp = rand();
		if (temp % b >= a) {
			break;
		}
	}
	return temp % b;
}

int game_input(int(*a)[4], int cycle) {
	// if (cycle > 0) {
	// 	_getch();//清空键盘缓存区
	// }
	int wasd;
	int add_score = 0;
wasd_wrong:;//在36行
	// cout << endl << "请输入wasd代表方向" << endl;
	wasd = _getch();
	switch (wasd) {
	case ('w') : add_score = up(a); break;
	case ('a') : add_score = left(a); break;
	case ('s') : add_score = down(a); break;
	case ('d') : add_score = right(a); break;
	case 0xE0:
		switch (wasd = _getch())
		{
		case 72:  add_score = up(a); break;
		case 80:  add_score = down(a); break;
		case 75:  add_score = left(a); break;
		case 77:  add_score = right(a); break;
		default:
			break;
		}
		break;
	default:{
		cout << "输入错误，请输入w、a、s、d或上下左右键" << endl;
		_getch();
	}

		goto wasd_wrong;//在25行
		break;
	}
	return add_score;
}


int torf() {
	if (suiji(1) == 1) {
		return 2;
	}
	else {
		return 4;
	}
}


void putin(int(*a)[4], int quantity) {
	int x, y, j;
	for (j = 1; j <= quantity; j++) {
		while (1) {
			x = suiji(4);
			y = suiji(4);
			if (a[y][x] == 0) {
				a[y][x] = torf();
				break;
			}
		}
	}
}


int fun_score(int cycle, int add_score, int score) {
	if (add_score != -1) {
		if (cycle > 0) {
			score += add_score;
		}
		else {
			score = 0;
		}
	}
	return score;
}



void BeforeStart() {
	cout << "\n\t    游戏说明\n";
	cout << "************************************\n";
	cout << "\t欢迎进入2048小游戏" << endl;
	cout << "\t在本游戏中，您将通" << endl;
	cout << "\t过控制键盘上的方向" << endl;
	cout << "\t键来实现数字方块的" << endl;
	cout << "\t移动，当出现2048时" << endl;
	cout << "\t您将获得胜利 ^_^" << endl;
	cout << "************************************\n";
	cout << "\t输入Enter进入游戏" << endl;

}



int main() {
	srand(time(0));//为后续的随机函数   设定随机数种子
	int a[4][4] = { 0 };
	int cycle = 0;
	int score = 0;
	int add_score = 0;
	BeforeStart();
	getchar();
	putin(a, suiji(2, 3));//初始化游戏数据(给出初始值）
	while (1) {
		score = fun_score(cycle, add_score, score);
		if (gameover(a)) {
			displayout(a, score, 0);
			cout << endl;
			cout << "游戏结束，请按“回车”键退出" << endl;
			getchar();
			break;
		}
		displayout(a, score, 0);
		add_score = game_input(a, cycle);
		if (add_score != -1) {
			putin(a, 1);
		}
		cycle++;
	}
	return 0;
}
