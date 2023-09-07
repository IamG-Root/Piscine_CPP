/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:33:43 by scastagn          #+#    #+#             */
/*   Updated: 2023/09/07 12:16:35 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;

    const WrongAnimal* wrongmeta = new WrongAnimal();
    const WrongAnimal* wrongcat = new WrongCat();
    std::cout << wrongmeta->getType() << " " << std::endl;
    std::cout << wrongcat->getType() << " " << std::endl;
    wrongmeta->makeSound();
    wrongcat->makeSound();
    delete wrongmeta;
    delete wrongcat;
    return 0;
}