/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 09:42:03 by ansebast          #+#    #+#             */
/*   Updated: 2025/04/10 17:04:02 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

AAnimal::AAnimal( void )
{
	std::cout << "Animal Default constructor called\n";
}

AAnimal::AAnimal( const AAnimal& animal )
{
	std::cout << "Animal Copy constructor called\n";
	*this = animal;
}

AAnimal& AAnimal::operator=(const AAnimal& animal)
{
	if (this != &animal)
	{
		this->type = animal.type;	
	}
	return ( *this );
}

AAnimal::~AAnimal( )
{
	std::cout << "Animal Destructor called\n";
}

void AAnimal::setType( std::string type )
{
	this->type = type;
}

std::string AAnimal::getType( void ) const
{
	return ( this->type );
}

void AAnimal::makeSound( void ) const
{
	std::cout << "The Animal maded a sound\n";
}
