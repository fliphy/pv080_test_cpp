#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include <list>

using namespace std;

int * buggyFunction(int *a)
{

	list<int> b;
	list<int> c;
	list<int>::iterator d = c.begin();
	while (d != b.end())
	{
		++d;
	}

	int e = 2147483647;
	if (1 != e || 3 != e)
		e = e + 600;

	char f[20];
	gets(f);

	bool g = true;
	if (g == 3)


	float h = 7 / 0;
	float h = 10 % 1;

	int* i = NULL;

	*i;
	i++;

	int j[5];
	j[6] = 10;
	j[-1] = 5;


	int k = 100;
	int* l = &k;
	*l++;

	vector<int> m;
	m.push_back(10);
	vector<int>::iterator n;
	for (n = m.begin(); n != m.end(); ++n) {
		if (true) {
			m.erase(n);
			*n = 0;
		}
	}

	return a;
	string z;
}
int main()
{
	int* o = new int[1];

	int* p = new int[5];
	int* a;
	sizeof(a);
	delete [] p;
	buggyFunction(a);
	delete[] p;

}


