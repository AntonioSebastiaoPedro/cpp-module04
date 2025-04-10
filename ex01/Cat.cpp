/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 09:42:03 by ansebast          #+#    #+#             */
/*   Updated: 2025/04/09 11:26:41 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat( void )
{
	this->type = "Cat";
	std::cout << "Cat Default constructor called\n";
}

Cat::Cat( const Cat& cat )
{
	std::cout << "Cat Copy constructor called\n";
	*this = cat;
}

Cat& Cat::operator=(const Cat& cat)
{
	if (this != &cat)
	{
		this->type = cat.getType();	
	}
	return ( *this );
}

Cat::~Cat( )
{
	std::cout << "Cat Destructor called\n";
}

void Cat::makeSound( void ) const
{
	std::cout << "The Cat meowed\n";
}