#pragma once

#include <condition_variable>

class smartMutex
{
private:
	std::condition_variable condition;
	std::mutex conditionMutex;
	std::atomic<unsigned int> head, tail;

	//allows head and tail to wrap around (will never actually be reached)
	const std::atomic<unsigned int> MAX_THREADS = 10000;

public:
	smartMutex()
	: head(0), tail(0) {}

	void lock();
	void unlock();
};