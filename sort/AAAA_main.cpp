#include "stdafx.h"
#include "MySortFunc.h"


void print(int it) {
	cout << it << endl;
}
void  main() {

	cout << RAND_MAX << endl;
	vector<int> vec(10, 0);
	for (vector<int>::iterator it = vec.begin(); it < vec.end(); it++)
		*it = rand();
//	for_each(vec.begin(), vec.end(), print);
	/*CMergeSorter::MergeSort(vec, 0, vec.size());*/
	//BubbleSort(vec);
	ShellSort(vec);
/*
	vector<int> t = { 3,4 };
	vector<int>::iterator it1, it2;
	it1 = t.begin();
	it2 = it1 + 1;
	//swap(it1,it2);
	swap(*it1, *it2);
	cout << *it1 << *it2 << endl;
	cout << *(it1+1) << endl;*/

for_each(vec.begin(), vec.end(), print);	//for_each 函数的使用

}

//sla
