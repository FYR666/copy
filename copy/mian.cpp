#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
void main()
{
	ifstream fin("D:\FYR1.txt");//��ȡ���ı��ļ�
	ofstream fout("D:\FYR2.txt");//���������ı��ļ�
	char str;
	while (fin.get(str))
	{
		fout << str;
	}
	fin.close();
	fout.close();
}