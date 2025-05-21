/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 17:24:05 by hclaude           #+#    #+#             */
/*   Updated: 2025/05/21 21:27:59 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template <typename T>
class Array
{
	private :

		size_t	_size;
		T*		_array;

	public :

		Array(): _size(0), _array(0){}
		Array(const unsigned int n): _size(n), _array(new T[n]()){}
		Array(const Array& cpy)
		{
			_size = cpy._size;
			_array = new T[cpy._size];
			for (size_t i = 0; i < _size; ++i)
				_array[i] = cpy._array[i];
		}
		~Array()
		{
			delete[] _array;
		}

		Array operator=(const Array& src)
		{
			if (this != &src)
			{
				delete[] _array;
				_size = src._size;
				_array = new T[_size];
				for (size_t i = 0; i < _size; ++i)
					_array[i] = src._array[i];
			}
			return (*this);
		}

		T&	operator[](int n)
		{
			if (n < 0 || static_cast<size_t>(n) >= _size)
				throw std::out_of_range("Index out of range");
			return (_array[n]);
		}
		const T&	operator[](int n) const
		{
			if (n < 0 || static_cast<size_t>(n) >= _size)
				throw std::out_of_range("Index out of range");
			return (_array[n]);
		}

		size_t	size() const
		{
			return (_size);
		}
};

#endif

//Développez un template de classe Array qui contient des éléments de type T et qui implémente les comportements et fonctions suivants :

//Construction sans paramètre : Crée un tableau vide.
//Construction avec un paramètre unsigned int n : Crée un tableau de n éléments initialisés par défaut. Astuce : Essayez de compiler int * a = new int(); puis affichez *a.
//Constructeur de copie et opérateur d’affectation : Dans les deux cas, modifier soit le tableau original, soit sa copie après la copie ne doit pas affecter l’autre tableau.
//Vous DEVEZ utiliser l’opérateur new[] pour allouer la mémoire. L’allocation préventive (allouer de la mémoire à l’avance) est interdite. Votre programme ne doit jamais accéder à de la mémoire non allouée.
//Les éléments doivent être accessibles via l’opérateur d’indice [ ].
//Lorsqu’on accède à un élément avec l’opérateur [ ], si l’indice est hors limites, une std::exception doit être levée.
//Une fonction membre size() qui retourne le nombre d’éléments du tableau. Cette fonction membre ne prend aucun paramètre et ne doit pas modifier l’instance courante.
//Comme d’habitude, assurez-vous que tout fonctionne comme prévu et rendez un fichier main.cpp qui contient vos tests.