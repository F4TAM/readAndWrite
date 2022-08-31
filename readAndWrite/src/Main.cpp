#include <iostream>




namespace Library 
{
	template <typename T> 
	void print(T t)
	{
		std::cout << t << "\n";
	}
}



int main()
{
	Library::print("Hej");
}