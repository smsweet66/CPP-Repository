#include "pch.hpp"

void smartMutex::lock()
{
	unsigned int myLocation = tail;    //location in the queue
	tail = (tail+1)%MAX_THREADS;
	if(myLocation != head)
	{
		std::unique_lock<std::mutex> conditionLock(conditionMutex);
		condition.wait(conditionLock, [&]{ return myLocation == head; });
	}
}

void smartMutex::unlock()
{
	head = (head+1)%MAX_THREADS;
	condition.notify_all();
}