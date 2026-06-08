#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <exception>

template<typename T>
class Array {
	private:
		size_t	_size;
		T		*_arr;
	
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &other);
		~Array();

		Array			&operator=(const Array &other);
		T				&operator[](unsigned int i) const;

		unsigned int	size() const;

		class OutOfBoundsException: public std::exception {
			public:
				virtual const char *what() const throw();

		};
};

# include "Array.tpp"

#endif
