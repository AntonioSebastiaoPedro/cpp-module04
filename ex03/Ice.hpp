/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 20:35:03 by ansebast          #+#    #+#             */
/*   Updated: 2025/04/11 08:11:08 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class Ice : virtual public AMateria
{
	public:
		Ice();
		Ice( const Ice& ice );
		Ice& operator=( const Ice& ice );
		~Ice();

		Ice* clone() const;
		void use(ICharacter& target);
};

# endif