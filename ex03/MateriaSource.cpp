/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 08:46:57 by ansebast          #+#    #+#             */
/*   Updated: 2025/04/12 10:21:49 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		this->materias[i] = NULL;
	}
}

MateriaSource::MateriaSource( const MateriaSource& matSource )
{
	for (int i = 0; i < 4; i++)
	{
		if (matSource.materias[i]){
			this->materias[i] = matSource.materias[i]->clone();
		} else {
			this->materias[i] =  NULL;
		}
	}
}

MateriaSource& MateriaSource::operator=( const MateriaSource& matSource )
{
	if (this != &matSource)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->materias[i])
				delete this->materias[i];
			if (matSource.materias[i]){
				this->materias[i] = matSource.materias[i]->clone();
			} else {
				this->materias[i] = NULL;
			}
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if ( this->materias[i] )
		{
			delete this->materias[i];
			this->materias[i] = NULL;
		}
	}
}

void MateriaSource::learnMateria( AMateria* newMateria)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->materias[i]){
			this->materias[i] = newMateria;
			return;
		}
	}
	delete newMateria;
}

AMateria* MateriaSource::createMateria( const std::string & type )
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materias[i])
		{
			if (this->materias[i]->getType() == type)
			{
				return this->materias[i]->clone();
			}
		}
	}
	return (0);
}
