#include <gmock-sample/auto_pointer.hpp>

namespace gmock_sample
{

template <class T>
auto_pointer<T>::auto_pointer(T *pointer) : pointer_(pointer)
{
}


template <class T>
auto_pointer<T>::~auto_pointer()
{
	delete pointer_;
}


template <class T>
T *auto_pointer<T>::get()
{
	return pointer_;
}


template <class T>
void auto_pointer<T>::reset(T *new_pointer)
{
	delete pointer_;
	pointer_ = new_pointer;
}

}
