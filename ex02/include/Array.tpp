#ifndef ARRAY_TPP
# define ARRAY_TPP

template<typename T>
Array<T>::Array():
	_size(0),
	_arr(NULL) 
{
#if DEBUG
	std::cerr << "Array have been constructed (default)" << std::cerr;
#endif
}

template<typename T>
Array<T>::Array(unsigned int n):
	_size(n),
	_arr(new T[n]) 
{
#if DEBUG
	std::cerr << "Array have been constructed (unsigned int)" << std::cerr;
#endif
}

template<typename T>
Array<T>::Array(const Array &other):
	_size(other._size),
	_arr(new T[other._size]) 
{
	for (size_t i = 0; i < other._size; i++) {
		_arr[i] = other._arr[i];
	}
#if DEBUG
	std::cerr << "Array have been constructed (copy)" << std::cerr;
#endif
}

template<typename T>
Array<T>::~Array() {
	delete [] _arr;
}

template<typename T>
Array<T> &Array<T>::operator=(const Array &other) {
	if (this != &other) {
		delete [] _arr;
		_size = other._size;
		_arr = new T[_size];
		for (int i = 0; i < other._size; i++) {
			_arr[i] = other._arr[i];
		}
	}
	return (*this);
}

template<typename T>
T	&Array<T>::operator[](unsigned int i) const {
	if (i >= _size)
		throw OutOfBoundsException();
	return (_arr[i]);
};

template<typename T>
unsigned int	Array<T>::size() const {
	return (_size);
}

template<typename T>
const char *Array<T>::OutOfBoundsException::what() const throw() {
	return ("You were about to segfault, index is out of bounds");
}

#endif
