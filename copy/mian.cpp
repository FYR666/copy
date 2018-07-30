#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
void main()
{
	ifstream fin("D:\FYR1.txt");//读取该文本文件
	ofstream fout("D:\FYR2.txt");//拷贝到该文本文件
	char str;
	while (fin.get(str))
	{
		fout << str;
	}
	fin.close();
	fout.close();
}