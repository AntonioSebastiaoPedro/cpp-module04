/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 17:40:45 by ansebast          #+#    #+#             */
/*   Updated: 2025/04/11 07:58:25 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CHARACATER_HPP
# define CHARACATER_HPP

# include <iostream>
# include "ICharacter.hpp"

class Character : virtual public ICharacter
{
	private:
		AMateria* inventory[4];
	
	public:
		Character();
		Character( const Character& character );
		Character& operator=( const Character& Character );
		~Character();
		
		void equip( AMateria& m );
		void unequip( int idx );
		void use( int idx, Character& target );
};

# endif