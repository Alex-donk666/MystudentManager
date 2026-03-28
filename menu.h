#pragma once
#include<iostream>
using namespace std;
int menu();
enum MenuOptions
{
	Quit,      //退出系统
	Cin,       //输入信息
	Print,     //打印信息
	Save,      //保存信息
	Read,	   //读取信息
	Statistic, //统计信息
	Find,      //查找信息
	Alter,     //修改信息
	Delete,    //删除信息
};