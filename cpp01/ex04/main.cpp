/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuhaise <mmuhaise@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 16:53:18 by mmuhaise          #+#    #+#             */
/*   Updated: 2025/01/11 20:47:16 by mmuhaise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

void openFiles(std::string inputFileName, std::string outputFileName, std::ifstream *inputFile, std::ofstream *outputFile)
{
    inputFile->open(inputFileName.c_str());
    outputFile->open(outputFileName.c_str());
}

void searchAndReplace(std::ifstream *inputFile, std::ofstream *outputFile, char **av)
{
    std::string readLine;
    std::string searchStr = av[2];
    std::string replaceStr = av[3];
    size_t pos;

    while (std::getline(*inputFile, readLine))
    {
        std::string writeLine;
        pos = 0;
        while ((pos = readLine.find(searchStr, pos)) != std::string::npos)
        {
            writeLine += readLine.substr(0, pos);
            writeLine += replaceStr;
            readLine = readLine.substr(pos + searchStr.length());
            pos = 0;
        }
        writeLine += readLine;
        *outputFile << writeLine << std::endl;
    }
}

int main(int ac, char **av)
{
    std::string inputFileName;
    std::string outputFileName;
    std::ifstream inputFile;
    std::ofstream outputFile;
    
    if (ac != 4)
    {
        std::cout << "Wrong args" << std::endl;
        return (1);
    }
    inputFileName = av[1];
    outputFileName = std::string(av[1]) + ".replace";
    openFiles(inputFileName, outputFileName, &inputFile, &outputFile);
    searchAndReplace(&inputFile, &outputFile, av);
    inputFile.close();
    outputFile.close();
    return (0);
}
