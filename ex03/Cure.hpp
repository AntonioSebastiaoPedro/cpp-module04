/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 08:00:54 by ansebast          #+#    #+#             */
/*   Updated: 2025/04/11 08:11:08 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure : virtual public AMateria
{
	public:
		Cure();
		Cure( const Cure& Cure );
		Cure& operator=( const Cure& Cure );
		~Cure();

		Cure* clone() const;
		void use(ICharacter& target);
};

# endif