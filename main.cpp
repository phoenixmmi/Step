#include<iostream>
using namespace std;

//#define POINTERS_BASICS
//#define DECLARATION_OF_POINTERS
#define POINTERS_AND_ARRAYS

void main()
{
	setlocale(LC_ALL, "");
#ifdef POINTERS_BASICS
	int a = 2;
	int* pa = &a;//Âåíãåðñêîé íîòàöèè
	//pa - pointer to a.
	//& - îïåðàòîð âçÿòèÿ àäðåñà (Address-of operator)
	cout << a << endl;
	cout << &a << endl;
	cout << pa << endl;
	cout << *pa << endl;
	//* - Оператор разыменования (Dereference operator).
	//*
	int* pb;
	int b = 3;
	pb = &b;
	b;//(int)
	pb;//(int*)
	cout << pb << endl;
	cout << *pb << endl;
	//int - int
	//int* - Указатель на int.
	//double - double.
	//double* - Указатель на double
	.  
#endif // POINTERS_BASICS

#ifdef DECLARATION_OF_POINTERS
	int a, b, c;	//Îáúÿâëåíèå òðåõ ïåðåìåííûõ îäíèì âûðàæåíèåì.
	int* pa, * pb, * pc;	//Îáúÿâëåíèå òðåõ óêàçàòåëåé îäíèì âûðàæåíèåì.
	int* pd, pe, pf;	//Îáúÿâèòñÿ îäèí óêàçàòåëü íà int (pd), 
						//è äâå ïåðåìåííûå òèïà int (pe è pf).
#endif

	const int n = 5;
	short Arr[n] = { 3, 5, 8, 13, 21 };
	cout << *Arr << endl;
	for (int i = 0; i < n; i++)
	{
		cout << *(Arr + i) << "\t";
	}
	cout << endl;
	//+, -, ++, --;
}

/*
type function(parameter1, parameter2, ...)
{

}
1.
2. NUll, INT_MAX, int(), ...
*/