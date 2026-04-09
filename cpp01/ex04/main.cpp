/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kqueiroz <kqueiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 15:01:52 by kqueiroz          #+#    #+#             */
/*   Updated: 2026/04/08 22:06:10 by kqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void replace(std::string filename, std::string str1, std::string str2)
{
    std::ifstream inFile((filename).c_str());
    std::string line;
    size_t pos;

    if (inFile.is_open())
    {
        std::ofstream outFile((filename + ".replace").c_str());
        while (getline(inFile, line))
        {
            pos = line.find(str1);
            while (pos != std::string::npos)
            {
                line.erase(pos, str1.length());
                line.insert(pos, str2);
                pos = line.find(str1, pos + str2.length());
            }
            outFile << line << std::endl;
        }
        inFile.close();
        outFile.close();
    }
    else
        std::cerr << "Could not open file: " << filename << std::endl;
}

int main (int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Wrong number of arguments..." << std::endl
         << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
        return 1;
    }
    replace(argv[1], argv[2], argv[3]);
    return 0;
}
