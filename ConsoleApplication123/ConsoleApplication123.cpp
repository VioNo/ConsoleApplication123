#include <iostream>
#include <fstream>
#include<string>
#include<iomanip>
#include<vector>
#include<algorithm>
#include <windows.h>
using namespace std;
	
//struct Student{
//	public:
//		int id{};
//		string fio{};
//		string gruppa{};
//    private:
//		char pol{};
//		int year{};
//		int stependia{};
class Student{
public:
		int id{};
		string fio{};
		string gruppa{};
    private:
		char pol{};
		int year{};
		int stependia{};
public:

	void Gender(char gen)
	{
		gen = pol;
	}
	char Gen(char gen)
	{
		return gen;
	}
	};
int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Student Ivan;
	Ivan.id = { 1 };
	Ivan.fio = { "иванов иван" };
	Ivan.gruppa = { "2исип-222" };

	cout << Ivan.id << " " << Ivan.fio;
	 
	return 0;
}