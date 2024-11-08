#ifndef Warlock_HPP
# define Warlock_HPP

#include <iostream>

class Warlock{
	private:
		std::string name;
		std::string title;

		Warlock();
		Warlock(Warlock const &ref);
		Warlock &operator=(Warlock const &ref);
	public:
		Warlock(std::string const &name, std::string const &title);
		~Warlock();

		std::string const &getName() const;
		std::string const &getTitle() const;

		void setTitle(std::string const &wtitle);

		void introduce() const;
};


#endif