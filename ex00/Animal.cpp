/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 09:42:03 by ansebast          #+#    #+#             */
/*   Updated: 2025/04/09 10:39:53 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

Animal::Animal( void )
{
	std::cout << "Animal Default constructor called\n";
}

Animal::Animal( const Animal& animal )
{
	std::cout << "Animal Copy constructor called\n";
	*this = animal;
}

Animal& Animal::operator=(const Animal& animal)
{
	if (this != &animal)
	{
		this->type = animal.type;	
	}
	return ( *this );
}

Animal::~Animal( )
{
	std::cout << "Animal Destructor called\n";
}

void Animal::setType( std::string type )
{
	this->type = type;
}

std::string Animal::getType( void ) const
{
	return ( this->type );
}

void Animal::makeSound( void ) const
{
	std::cout << "The Animal makes a song\n";
}
