#include "stdafx.h"
template<typename T>
void MergeSort(vector<T> &vec, int n_left, int n_right) {
	if (n_right - n_left == 1) return;
	int n_vecMid = (n_right + n_left) / 2;
	MergeSort(vec, n_left, n_vecMid);
	MergeSort(vec, n_vecMid, n_right);
	__Merge(vec, n_left, n_vecMid, n_right);
}
template<typename T>
void __Merge(vector<T> &vec, int n_left, int n_mid, int n_right) {
	vector<T> l_vec, r_vec;
	for (int i = n_left; i < n_mid; i++) {
		l_vec.push_back(vec[i]);
	}
	for (int i = n_mid; i < n_right; i++) {
		r_vec.push_back(vec[i]);
	}
	int i = 0, j = 0, index = n_left;
	for (; i < l_vec.size() && j < r_vec.size(); index++) {
		if (l_vec[i] > r_vec[j]) {
			vec[index] = l_vec[i];
			i++;
		} else {
			vec[index] = r_vec[j];
			j++;
		}
	}
	while (i != l_vec.size()) vec[index++] = l_vec[i++];
	while (j != r_vec.size()) vec[index++] = r_vec[j++];
}
//πÈ≤¢≈≈–Ú∫Ø ˝ 

template<typename T>
void BubbleSort(vector<T> vec, int(*comp)(T &a, T &b)) {
	int swap = 1;
	while (swap) {
		swap = 0;
		vector<T>::iterator it1, it2;
		it1 = vec.begin();
		1t2 = it1 + 1;
		while (it2 != vec.end()) {
			if (comp(*it1, *it2)) {
				swap++;
				swap(it1, it2);
				it1++;
				it2++;
			}
		}
	}
}
template<typename T>
void BubbleSort(vector<T> &vec) {
	int swap = 1;
	while (swap) {
		swap = 0;
		vector<T>::iterator it1, it2;
		it1 = vec.begin();
		it2 = it1 + 1;
		while (it2 != vec.end()) {
			if (*it1 > *it2) {
				swap++;
				std::swap(*it1, *it2);
			}
			it1++;
			it2++;
		}
	}
}
//√∞≈›≈≈–Ú


template<typename T>
void ShellSort(vector<T> &vec) {
	int n_step = vec.size();
	for (n_step /= 2; n_step > 0; n_step /= 2)
		for (int i = n_step; i < vec.size(); i++)
			for (int j = i -n_step; j >= 0 && vec[j] > vec[j + n_step]; j -= n_step)
				swap(vec[j], vec[j + n_step]);   //÷±Ω”≤Â»Î≈≈–Ú

}
//œ£∂˚≈≈–Ú