#pragma once
<<<<<<< HEAD
class Singleton
{
};

=======

template <typename Class>
class Singleton
{
	static Class instance;

public:
	static Class GetInstance()
	{
		return instance;
	}
};

template <typename Class>
Class Singleton<Class>::instance;

>>>>>>> Damien-branch
