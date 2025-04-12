/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 08:00:49 by ansebast          #+#    #+#             */
/*   Updated: 2025/04/12 10:23:23 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure( const Cure& cure ) : AMateria(cure)
{
}

Cure& Cure::operator=( const Cure& cure )
{
	if ( this != &cure )
	{
		AMateria::operator=(cure);
	}
	return ( *this );
}

Cure::~Cure()
{
}

AMateria* Cure::clone() const
{
	return ( new Cure(*this) );
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}
