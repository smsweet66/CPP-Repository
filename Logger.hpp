#pragma once

#include "pch.hpp"

class Logger
{
public:
	Logger(const char* logName)
			: name(logName) {}

	void log(const std::string msg, ...) const;

	void warn(const std::string msg, ...) const;

	void error(const std::string msg, ...) const;

private:
	std::string name;
};