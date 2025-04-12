/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 09:42:03 by ansebast          #+#    #+#             */
/*   Updated: 2025/04/12 10:42:22 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat( void )
{
	this->type = "Cat";
	this->brain = new Brain();
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
		if (this->brain)
			delete brain;
		this->type = cat.getType();
		this->brain = new Brain(*cat.brain);
	}
	return ( *this );
}

Cat::~Cat( )
{
	delete brain;
	std::cout << "Cat Destructor called\n";
}

void Cat::makeSound( void ) const
{
	std::cout << "The Cat meowed\n";
}