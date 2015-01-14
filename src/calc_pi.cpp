//============================================================================
// Name        : openmp_hello.cpp
// Author      : dusty
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <omp.h>

using namespace std;

int main() {
	int tid, nthreads;
#pragma omp parallel private(tid)
	{
	tid = omp_get_thread_num();
	if(tid==0)
	{
		nthreads = omp_get_num_threads();
		cout << nthreads << " threads running" << endl;
	}
	else
	cout << "Thread# "<<tid<<" !!!Hello World!!!" << endl; // prints !!!Hello World!!!
	}
	return 0;
}
