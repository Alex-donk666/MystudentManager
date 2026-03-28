#include "menu.h"
int menu() {
	cout << "******************************" << endl;
	cout << "** 欢迎使用学生管理系统V1.0 ** " << endl;
	cout << "******************************" << endl;
	cout << "**        请选择功能        **" << endl;
	cout << "******************************" << endl;
	cout << "**      1.录入学生信息      **" << endl;
	cout << "**      2.打印学生信息      **" << endl;
	cout << "**      3.保存学生信息      **" << endl;
	cout << "**      4.读取学生信息      **" << endl;
	cout << "**      5.统计学生信息      **" << endl;
	cout << "**      6.查找学生信息      **" << endl;
	cout << "**      7.修改学生信息      **" << endl;
	cout << "**      8.删除学生信息      **" << endl;
	cout << "**      0.退出系统          **" << endl;
	cout << "******************************" << endl;
	cout << "Slect>" << endl;
	int select = -1;
	cin >> select;
	return select;
}