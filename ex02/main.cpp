/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 09:42:03 by ansebast          #+#    #+#             */
/*   Updated: 2025/04/10 16:59:41 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "Cat.hpp"
# include "Dog.hpp"
# include "Brain.hpp"

int main( void )
{
	const int length_animals = 10;
	Animal **animals = new Animal*[length_animals];
	
	for (int i = 0; i < length_animals; i++)
	{
		if (i < length_animals / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	for (int i = 0; i < length_animals; i++)
	{
		animals[i]->makeSound();
	}
	for (int i = 0; i < length_animals; i++)
	{
		delete animals[i];
	}
	delete[] animals;
	return (0);
}
