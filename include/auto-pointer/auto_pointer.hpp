#ifndef AUTO_POINTER_HPP
#define AUTO_POINTER_HPP

namespace auto_pointer
{

template <class T>
class auto_pointer
{
public:
	auto_pointer(T *pointer);

	~auto_pointer();

private:
	T *pointer_;
};

}

#endif // AUTO_POINTER_HPP
