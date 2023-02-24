#include<iostream>

struct Animal {
	std::string name;
	std::string type;
	int age;

	Animal();

	Animal(
		std::string name,
		std::string type,
		int age)
		:name(name), type(type), age(age)
	{

	}
	Animal(const Animal& st) :name(st.name), type(st.type), age(st.age)
	{
	}
	~Animal() {}
};

void printAnimal(Animal st)
{
	std::cout << st.type << " Lyagushka " << st.name << " prazdnuet svoj " << st.age << " birth day ";
}

void elderAnimal(Animal* st)
{
	st->age = st->age + 1;
}
int main(int argc, char* argv[])
{
	Animal Lyagushka("Bora-Bora", "Yavanskaya", 2);
	printAnimal(Lyagushka);
	elderAnimal(&Lyagushka);
	std::cout << std::endl;
	printAnimal(Lyagushka);

	return EXIT_SUCCESS;
}