#include <iostream>
#include <Windows.h>

using namespace std;
int main(void) {
	int row;
	cout << "-----������ģʽ-----"<<endl;
	cout << "����������:";
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


	//����� 7�� �ո��  �����1��"*"
	// �����6�� �ո��  ����� 3��"*"
	//.......5��........        5 �� 
	// .......4.........         7��



	system("pause");
	return 0;
}