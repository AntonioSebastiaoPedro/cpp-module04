/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 17:28:06 by ansebast          #+#    #+#             */
/*   Updated: 2025/04/10 19:01:54 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef MATERIA_HPP
# define MATERIA_HPP

# include <iostream>
# include "Character.hpp"

class AMateria
{
	protected:
		std::string type;
	public:
		AMateria();
		AMateria( const std::string type );
		AMateria( const AMateria& materia );
		AMateria& operator=( const AMateria& materia );
		virtual ~AMateria();

		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

# endif