#ifndef __JJ_BASICARRAY__
#define __JJ_BASICARRAY__

#include <iostream>

namespace jj{

// interfaces of Dynamic Array class BasicArray
class BasicArray
{
private:
	double* data_; // the pointer to the array memory
	int		size_; // the size of the array
	//int		m_capacity; // the max memory of the array

public:
	BasicArray():data_(0),size_(0){
	} // default constructor
	BasicArray(int size, double value = 0);	// other constructor, set an array with default values. Of course, more constructors can be provided.
	BasicArray(const BasicArray& ba); // copy constructor (It is a best practice to provide copy constructor for all classes which contians members allocated dynamically)
	BasicArray& operator = (const BasicArray& ba);  	// overload "=" operator
	~BasicArray(){ delete[] data_;} // deconstructor

//public:	
	int size() const { return size_;}			// get the size of the array
	int resize(int num, double elem=0.0);		// re-set the size of the array. ע����size_С��ԭ�����С���ɽض�ȡǰsize_��Ԫ����Ϊ�������Ԫ�أ���size_����ԭ�����С��������Ԫ�ص�ֵ����ȱʡֵ0����

	double	at(int ind);				// get an element at an index
	double 	operator[] (int ind) const; 	// overload "[]" operator, get an element, such as double tmp = a[k]
	double& operator[] (int ind) ;	// overload "[]" operator, set value of specified position, such as a[k]=3.14;
	
	int push_back(double elem);		// add a new element at the end of the array, return the size of the array.
	int insert(int ind, double value);	// insert a new element at some index, return the size of the array
	void erase(int ind);			// delete an element at specified index

	friend std::ostream& operator <<(std::ostream& os, const BasicArray &ba); // print all elements

private:
	inline bool isValidateIndex(int ind);	// judge the validate of an index
};

std::ostream&  operator <<(std::ostream& os, const BasicArray &ba);
void selectionSort(BasicArray& a); // sort all elements using the selection sort algorithm
}
#endif //__JJ_BASICARRAY__