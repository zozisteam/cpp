
#ifndef CONTACT_H
# define CONTACT_H
#include <iostream>
#include <string>


class Contact {
private:
	std::string fName;
	std::string lName;
	std::string nickName;
	std::string phoneNumber;
	std::string secret;

public:
	Contact();
	~Contact();
	void setfName(std::string fname);
	void setlName(std::string lname);
	void setNickname(std::string nickname);
	void setPhoneNum(std::string num);
	void setSecret(std::string secret);

	std::string getfName();
	std::string getlName();
	std::string getNickname();
	std::string getPhoneNum();
	std::string getSecret();
};

#endif