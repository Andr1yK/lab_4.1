// lab_4.1.cpp
// Кобетяк Андрій
// Лабораторна робота № 4.1
// Цикли
// Варіант 12

#include <iostream>;

using namespace std;

int main()
{
	int i, N;
	double S;

	cout << "N = "; cin >> N;

	S = 0;
	i = N;

	while (i <= 22)
	{
		S += sqrt(i * i + N * N) / i;
		i++;
	}
	cout << "S = " << S << " (while)" << endl;

	S = 0;
	i = N;

	do
	{
		S += sqrt(i * i + N * N) / i;
		i++;
	} while (i <= 22);
	cout << "S = " << S << " (do ... while)" << endl;

	S = 0;
	i = N;

	for (int i = N; i <= 22; i++)
	{
		S += sqrt(i * i + N * N) / i;
	}
	cout << "S = " << S << " (for i++)" << endl;

	S = 0;

	for (int i = 22; i >= N; i--)
	{
		S += sqrt(i * i + N * N) / i;
	}
	cout << "S = " << S << " (for i--)" << endl;

	return 0;
}