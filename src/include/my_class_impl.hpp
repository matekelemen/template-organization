#ifndef MY_CLASS_IMPL_INCLUDE_GUARD
#define MY_CLASS_IMPL_INCLUDE_GUARD

// --- Project Includes ---
#include "my_class.hpp"

template <class T>
T MyClass<T>::myTemplatedFunction()
{
    return T(1) / T(2);
}

#endif
