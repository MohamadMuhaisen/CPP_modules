#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <limits>

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &other);
		ScalarConverter &operator=(const ScalarConverter &other);
		~ScalarConverter();
		enum eType
        {
            TYPE_CHAR,
            TYPE_INT,
            TYPE_FLOAT,
            TYPE_DOUBLE,
            TYPE_INVALID
        };
		static eType detectType(const std::string &str);
		static void handleChar(const std::string &str);
		static void handleInt(const std::string &str);
		static void handleFloat(const std::string &str);
		static void handleDouble(const std::string &str);
	public:
		static void convert(const std::string &str);
};

#endif
