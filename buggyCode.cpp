#include <iostream>
#include <string.h>
#include <stdio.h>
#include <vector>
#include <list>
#include <stdlib.h>

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

	if (e = 2147483647)
		cout << "ok";

	char buf[5];
	strcpy(buf, "polikl\0");

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

	char* r = (char*)malloc(2147483647);


	double* t;
	t = (double*)malloc(sizeof(t));

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
	cout << *p;

}


