/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 08:00:49 by ansebast          #+#    #+#             */
/*   Updated: 2025/04/11 08:08:46 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cure.hpp"

Cure::Cure()
{
	std::cout << "Cure default constructor called\n";
	this->type = "Cure";
}

Cure::Cure( const Cure& Cure )
{
	std::cout << "Cure Copy constructor called\n";
	*this = Cure;
}

Cure& Cure::operator=( const Cure& Cure )
{
	if ( this != &Cure )
	{
		this->type = Cure.getType();
	}
	return ( *this );
}

Cure::~Cure()
{
	std::cout << "Cure destructor called\n";
}

Cure* Cure::clone() const
{
	return ( new Cure() );
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << " wounds *";
}
