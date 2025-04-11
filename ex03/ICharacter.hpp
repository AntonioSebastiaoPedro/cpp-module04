/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 17:40:45 by ansebast          #+#    #+#             */
/*   Updated: 2025/04/11 08:25:40 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ICHARACATER_HPP
# define ICHARACATER_HPP

# include <iostream>
# include "AMateria.hpp"

class AMateria;
class ICharacter
{
	public:
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip( AMateria& m ) = 0;
		virtual void unequip( int idx ) = 0;
		virtual void use( int idx, ICharacter& target ) = 0;
};

# endif