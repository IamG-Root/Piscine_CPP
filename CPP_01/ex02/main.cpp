/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 21:29:17 by scastagn          #+#    #+#             */
/*   Updated: 2023/07/04 21:46:31 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string variable = "HI THIS IS BRAIN";

    std::string* stringPTR = &variable;
    std::string &stringREF = variable;

    std::cout<<&variable<<std::endl;
    std::cout<<stringPTR<<std::endl;
    std::cout<<&stringREF<<std::endl;

    std::cout<<variable<<std::endl;
    std::cout<<*stringPTR<<std::endl;
    std::cout<<stringREF<<std::endl;
}