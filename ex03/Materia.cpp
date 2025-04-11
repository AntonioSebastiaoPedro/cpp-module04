/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 19:16:25 by ansebast          #+#    #+#             */
/*   Updated: 2025/04/11 07:58:12 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Materia.hpp"

AMateria::AMateria()
{
	std::cout << "Material default constructor called\n";
	this->type = "Default";
}

AMateria::AMateria( const std::string type ) : type(type)
{
	std::cout << "Material Type constructor called\n";
}

AMateria::AMateria( const AMateria& materia )
{
	std::cout << "Material Copy constructor called\n";
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
	std::cout << "Material destructor called\n";
}

std::string const & AMateria::getType() const
{
	return ( this->type );
}

void AMateria::use(ICharacter& target)
{
	std::cout << "Using a default materia\n";
}