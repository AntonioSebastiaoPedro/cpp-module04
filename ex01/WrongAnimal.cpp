/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 09:42:03 by ansebast          #+#    #+#             */
/*   Updated: 2025/04/09 13:22:58 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{
	std::cout << "WrongAnimal Default constructor called\n";
}

WrongAnimal::WrongAnimal( const WrongAnimal& Wronganimal )
{
	std::cout << "WrongAnimal Copy constructor called\n";
	*this = Wronganimal;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& Wronganimal)
{
	if (this != &Wronganimal)
	{
		this->type = Wronganimal.type;	
	}
	return ( *this );
}

WrongAnimal::~WrongAnimal( )
{
	std::cout << "WrongAnimal Destructor called\n";
}

void WrongAnimal::setType( std::string type )
{
	this->type = type;
}

std::string WrongAnimal::getType( void ) const
{
	return ( this->type );
}

void WrongAnimal::makeSound( void ) const
{
	std::cout << "The WrongAnimal maded a sound\n";
}
