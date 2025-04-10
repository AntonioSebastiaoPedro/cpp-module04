/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 19:03:13 by ansebast          #+#    #+#             */
/*   Updated: 2025/04/10 19:05:43 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "Materia.hpp"

class IMateriaSource
{
	virtual ~IMateriaSource(){}
	virtual void learnMateria( AMateria* ) = 0;
	virtual AMateria* createMateria( const std::string & type ) = 0;
};

# endif
