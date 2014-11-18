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

}
