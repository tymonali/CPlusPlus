#include"NodeD.h"
template <typename T>
Node<T>::Node()
{
	value = NULL;
	next = prev = nullptr;
}