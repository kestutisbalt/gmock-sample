#ifndef AUTO_POINTER_HPP
#define AUTO_POINTER_HPP

namespace gmock_sample
{

template <class T>
class auto_pointer
{
public:
	auto_pointer(T *pointer);

	~auto_pointer();

	T *get();

	void reset(T *new_pointer = nullptr);
private:
	T *pointer_;
};

}

#endif // AUTO_POINTER_HPP
