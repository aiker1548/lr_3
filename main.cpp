#include"lib.h"


int main()
{
	Stack stk;
	Data data;
	Stack list;
	bool f = true;
	int method, pos;

	while (f)
	{
		cout << "choose Stack method: " << endl;
		cout << "1: Display" << endl;
		cout << "2: push" << endl;
		cout << "3: Pop" << endl;
		cout << "4: Double" << endl;
		cout << "5: MakeNull" << endl;
		cout << "6: Exit" << endl;

		cin >> method;

		switch (method)
		{
		case 1:
			system("cls");

			stk.Display();
			cout << endl;
			break;
		case 2:
			system("cls");

			data.EnterData();
			stk.push(data);
			system("cls");
			cout << "Complite!" << endl;
			cout << endl;
			break;
		case 3:
			system("cls");

			stk.pop();
			system("cls");
			cout << "Complite!" << endl;
			cout << endl;
			break;
		case 4:
			system("cls");

			list=Double(stk);
			list.Display();
			cout << endl;
			break;
		case 5:
			system("cls");

			stk.MakeNull();
			cout << "Complite!" << endl;
			cout << endl;
			break;
		case 6:
			f = false;
			break;
		}
	}


	return 0;
}