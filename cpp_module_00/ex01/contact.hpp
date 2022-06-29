#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <ctype.h>

class contact{
    private :
		int			index;
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    public :
        contact();
        std::string getfirstname();
		std::string getlastname();
		std::string getnickname();
		int			getindex();
        void        setfirstname(std::string name);
		void        setlastname(std::string name);
		void        setnickname(std::string name);
		void        setnumber(std::string name);
		void        setsecret(std::string name);
		void        setindex(int i);
};

#endif