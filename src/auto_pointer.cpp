#include <auto-pointer/auto_pointer.hpp>

namespace auto_pointer
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
