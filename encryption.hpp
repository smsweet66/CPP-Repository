#pragma once

#include <string>
#include <fstream>
#include <sstream>

static void encrypt(const std::string &inputFileName, const std::string &outputFileName, const uint16_t &key)
{
	std::ifstream inputFile = std::ifstream(inputFileName);
	std::stringstream buffer;
	buffer << inputFile.rdbuf();
	std::string rawText = buffer.str();

	unsigned char a = key%256;
	unsigned char b = key >> 8;

	for(char &c : rawText)
	{
		c -= a;
		c ^= b;
	}

	std::ofstream outputFile = std::ofstream(outputFileName);
	outputFile << rawText;
}

static void decrypt(const std::string &inputFileName, const std::string &outputFileName, const uint16_t &key)
{
	std::ifstream inputFile = std::ifstream(inputFileName);
	std::stringstream buffer;
	buffer << inputFile.rdbuf();
	std::string rawText = buffer.str();

	unsigned char a = key%256;
	unsigned char b = key >> 8;

	for(char &c : rawText)
	{
		c ^= b;
		c += a;
	}

	std::ofstream outputFile = std::ofstream(outputFileName);
	outputFile << rawText;
}