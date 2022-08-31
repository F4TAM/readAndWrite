#include <iostream>
#include <fstream>
#include <string>



namespace Library 
{
	template <typename T> 
	void print(T t)
	{
		std::cout << t << "\n";
	}

	void WriteToFile(std::string filepath)
	{
		std::ofstream file(filepath);
		std::string fileContent;
		std::getline(std::cin, fileContent);
		file << fileContent;
		file.close();
	}




}



int main()
{
	Library::print("Hej");
	Library::WriteToFile("minfil.txt");
}