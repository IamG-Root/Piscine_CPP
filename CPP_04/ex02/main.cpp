/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:33:43 by scastagn          #+#    #+#             */
/*   Updated: 2023/09/07 15:00:45 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
    int qty = 4;
    AAnimal *animals[qty];

    //Instance of half cats and half dogs
    for(int i = 0; i < qty; i++)
    {
        if (i < qty/2)
            animals[i] = new Cat();
        else
            animals[i] = new Dog();
    }

    //Setting ideas of an animal
    std::cout<<std::endl<<std::endl<<"Let's create a new cat"<<std::endl;
    Cat *newCat = new Cat();
    Brain *newBrain = newCat->getBrain();
    newBrain->ideas[0] = "Hungry";
    newBrain->ideas[1] = "Thirsty";
    newBrain->ideas[2] = "Sad";
    newBrain->ideas[3] = "Happy";

    std::cout<<"Ideas of the new cat :"<<std::endl;
    std::cout<<newCat->getBrain()->ideas[0]<<std::endl;
    std::cout<<newCat->getBrain()->ideas[1]<<std::endl;
    std::cout<<newCat->getBrain()->ideas[2]<<std::endl;
    std::cout<<newCat->getBrain()->ideas[3]<<std::endl;

    //Try of a copy operator
    std::cout<<std::endl<<"Let's try a copy : "<<std::endl;
    Dog *newDog = new Dog();
    delete animals[2];
    animals[2] = new Dog(*newDog);

    std::cout<<std::endl<<"Destroying everyone: "<<std::endl;
    //Destruction of every animal
    for(int i = 0; i < qty; i++)
        delete animals[i];
}