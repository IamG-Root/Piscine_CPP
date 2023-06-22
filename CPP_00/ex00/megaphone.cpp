/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 10:10:34 by scastagn          #+#    #+#             */
/*   Updated: 2023/06/22 10:52:11 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    if (argc == 1)
        std::cout<<"* LOUD AND UNBREAKABLE FEEDBACK NOISE *";
    else
        for (int i = 1; argv[i]; i++)
            for (int k = 0; argv[i][k]; k++)
                std::cout<<(char)toupper(argv[i][k]);
    std::cout<<std::endl;
    return 0;
}