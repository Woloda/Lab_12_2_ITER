#include <iostream>
#include <Windows.h>

using namespace std;

typedef int inform;

struct Spusok
{
	Spusok* link1;
	inform inf;
};

void Creata(Spusok*& first, Spusok*& last, inform inf);
void COUT(Spusok*& T);
void Process(Spusok*& T, int x);

int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Spusok* first = NULL;
	Spusok* last = NULL;

	for (int i = 0; i < 4; i++)
		Creata(first, last, i);

	Spusok* T = first;
	COUT(T);
	T = first;

	int x;
	cout << "Введіть певне значення, для збільшення величини інформаційного поля кожного елемента: ";
	cin >> x;
	Process(T, x);

	return 0;
}

void Creata(Spusok*& first, Spusok*& last, inform inf)
{
	Spusok* tmp = new Spusok;

	tmp->inf = inf;
	tmp->link1 = NULL;
	if (first == NULL)
		first = tmp;
	else
		last->link1 = tmp;
	last = tmp;
}

void COUT(Spusok*& T)
{
	inform inf;

	cout << "Вивід інформації про кожен сформований елемент: " << endl << endl;
	while (T != NULL)
	{
		inf = T->inf;
		cout << inf << "   ";
		T = T->link1;
	}
	cout << endl << endl;
}

void Process(Spusok*& T, int x)
{
	inform inf;

	cout << endl;
	cout << "Вивід інформації про кожен модифікований елемент " << endl << endl;
	while (T != NULL)
	{
		inf = T->inf;            // 1(відбувається копіювання значення елемента з списку в змінну 'inf')
		T->inf = inf + x;        // 2(запис модфікованого значення(збільшене на 'x') в елемент списку)
		cout << T->inf << "   ";
		T = T->link1;            // 3(перехід вказівника на наступну позицію для виконання операцій з наступним елемнтом)
	}
	cout << endl;
}