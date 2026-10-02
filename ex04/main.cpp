/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 18:48:26 by vade-mel          #+#    #+#             */
/*   Updated: 2026/10/02 17:53:39 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

int main(int argc, char **argv)
{
	if(argc != 4)
	{
		std::cerr << "Invalid numbers of params." << std::endl;
		std::cerr << "run: ./sed <file> <search> <replace>" << std::endl;
		return 1;
	}

	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	if (s1.empty())
		return 1;

	std::ifstream infile(argv[1]);

	if (!infile.is_open())
	{
		std::cerr << "Failed to open the file." << std::endl;
		return 1;
	}

	std::ostringstream buffer;
	buffer << infile.rdbuf();
	std::string content = buffer.str();
	// std::cout << "content: " << content << std::endl;


	size_t pos = content.find(s1);

	size_t start = 0;
	std::string result;

	while (pos != std::string::npos)
	{
		result += content.substr(start, pos - start);
		result += s2;
		start = pos + s1.length();

		pos = content.find(s1, pos + s1.length());
	}

	result += content.substr(start);
	// std::cout <<"result: " << result << std::endl;

	std::string filename_out = filename + ".replace";
	std::ofstream outfile(filename_out.c_str());

	if(!outfile.is_open())
	{
		std::cerr << "Failed to open the file." << filename + ".replace" << std::endl;
		return 1;
	}

	outfile << result;

	outfile.close();
	infile.close();
	return 0;
}
