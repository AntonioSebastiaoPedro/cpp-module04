/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 19:16:25 by ansebast          #+#    #+#             */
/*   Updated: 2025/04/12 10:22:58 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"

AMateria::AMateria()
{
	this->type = "Default";
}

AMateria::AMateria( const std::string type ) : type(type)
{
}

AMateria::AMateria( const AMateria& materia )
{
	*this = materia;
}

AMateria& AMateria::operator=( const AMateria& materia )
{
	if ( this != &materia )
	{
		this->type = materia.getType();
	}
	return ( *this );
}

AMateria::~AMateria()
{
}

std::string const & AMateria::getType() const
{
	return ( this->type );
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	std::cout << "Using a default materia\n";
}