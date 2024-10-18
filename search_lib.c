/*
this library defines a few commonly used search algorithms.
*/
#include "search_lib.h"

int sequential_search_no_appended_key(int x[],int k,int array_size){
	int N = array_size;
	int i = 0;
	while(i < N && x[i] != k){
		i++;
	}
	if(i < N)
		return i;
	else
		return -1;
}

int sequential_search_appended_key(int x[],int k,int array_size){
	int N = array_size;
	x[N] = k;
	int i = 0;
	while(x[i] != k){
		i++;
	}
	if(i < N)
		return i;
	else
		return -1;
}

int binary_search(int x[], int k,int array_size){
	int N = array_size;
	int l = 0 ,r = N - 1,m;
	while(l <= r){
		m = (l+r)/2;
		if (k == x[m])
			return m;
		else if (k < x[m])
			r = m - 1;
		else
			l = m + 1;
	}
	return -1;
}
