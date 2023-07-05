/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scastagn <scastagn@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:54:54 by scastagn          #+#    #+#             */
/*   Updated: 2023/07/05 21:51:59 by scastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <ios>

int main(int argc, char **argv)
{
    //Check for valid arguments
    if (argc != 4 || !strlen(argv[1]) || !strlen(argv[2]) || !strlen(argv[3]))
    {
        std::cout<<"Invalid arguments"<<std::endl;
        return (1);
    }

    //Initializing strings
    std::string filename = argv[1];
    filename = filename + ".replace";
    std::string toreplace = argv[2];
    std::string newstr = argv[3];
    std::string datastream;

    //Initializing filestreams
    std::fstream infile;
    std::ofstream outfile;

    //Initializing iterators
    std::size_t pos;
    std::size_t i = 0;
    
    //Open input and output files
    infile.open(argv[1], std::ios::in);
    if (!infile)
        return (1);
    outfile.open(filename.c_str(), std::ofstream::out);
    if (!outfile)
        return (1);
    
    //Take the entire file, check repeatly for toreplace and copy to outfile properly
    getline(infile, datastream, '\0');
    pos = datastream.find(toreplace);
    if (pos != std::string::npos)
    {
        while (pos != std::string::npos)
        {
            for (;i < pos; i++)
                outfile << datastream[i];
            outfile << newstr;
            i += toreplace.length();
            pos = datastream.find(toreplace, i);
        }
    }
    for (;i < datastream.length();i++)
        outfile << datastream[i];
    
    //Close files
    infile.close();
    outfile.close();
    return 0;
}