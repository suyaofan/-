#include <iostream>
#include <Windows.h>

using namespace std;
int main(void) {
	int row;
	cout << "-----金字塔模式-----"<<endl;
	cout << "请输入行数:";
	cin >> row;
	
		
	
	for (int a = 0; a < row; a++) {

		for (int x = 0; x < row - a; x++) {
			cout << " ";
		}       

				for (int b = 0; b <= a + a; b++) {
				cout << "*";
				}
			
			cout << endl;
		}


	//先输出 7个 空格符  在输出1个"*"
	// 再输出6个 空格符  再输出 3个"*"
	//.......5个........        5 个 
	// .......4.........         7个



	system("pause");
	return 0;
}