/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 08:43:31 by ansebast          #+#    #+#             */
/*   Updated: 2025/04/12 07:47:54 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"

class IMateriaSource;
class AMateria;

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *materias[4];
	public:
		MateriaSource();
		MateriaSource( const MateriaSource& matSource );
		MateriaSource& operator=( const MateriaSource& matSource );
		~MateriaSource();
		
		void learnMateria( AMateria* );
		AMateria* createMateria( const std::string & type );
};

# endif