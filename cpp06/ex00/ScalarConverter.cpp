#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &other) { (void)other; }

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
	(void)other;
	return (*this);
}

ScalarConverter::~ScalarConverter() {}

ScalarConverter::eType ScalarConverter::detectType(const std::string &str)
{
	char *endPtr = NULL;

	if (str.length() == 1 && !isdigit(str[0]))
		return (TYPE_CHAR);
	std::strtol(str.c_str(), &endPtr, 10);
	if (*endPtr == '\0')
		return (TYPE_INT);
	endPtr = NULL;
	if (str == "-inff" || str == "+inff" || str == "nanf")
		return (TYPE_FLOAT);
	std::strtof(str.c_str(), &endPtr);
	if (*endPtr == 'f' && *(endPtr + 1) == '\0')
		return (TYPE_FLOAT);
	endPtr = NULL;
	if (str == "-inf" || str == "+inf" || str == "nan")
		return (TYPE_DOUBLE);
	std::strtod(str.c_str(), &endPtr);
	if (*endPtr == '\0')
		return (TYPE_DOUBLE);
	return (TYPE_INVALID);
}

void ScalarConverter::handleChar(const std::string &str)
{
	std::cout << "char: '" << str[0] << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
	std::cout << "float: " << static_cast<float>(str[0]) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(str[0]) << ".0" << std::endl;
}

void ScalarConverter::handleInt(const std::string &str)
{
	int i = std::atoi(str.c_str());
	double value = std::strtod(str.c_str(), NULL);
	std::cout << "char: ";
	if (i >= 32 && i <= 126)
		std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
	std::cout << "int: ";
	if (value < static_cast<double>(std::numeric_limits<int>::min()) ||
	value > static_cast<double>(std::numeric_limits<int>::max()) ||
	std::isnan(value) || std::isinf(value))
    {
        std::cout << "impossible" << std::endl;
    }
	else
		std::cout << i << std::endl;
	std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
}

void ScalarConverter::handleFloat(const std::string &str)
{
	float f = std::strtof(str.c_str(), NULL);
	std::cout << "char: ";
	if (f >= 32 && f <= 126 && !std::isnan(f) && !std::isinf(f))
		std::cout << "'" << static_cast<char>(f) << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
	std::cout << "int: ";
	if (std::isnan(f) || std::isinf(f))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(f) << std::endl;
	std::cout << "float: " << f << std::endl;
	std::cout << "double: " << static_cast<double>(f) << std::endl;
}

void ScalarConverter::handleDouble(const std::string &str)
{
	double d = std::strtod(str.c_str(), NULL);
	std::cout << "char: ";
	if (d >= 32 && d <= 126 && !std::isnan(d) && !std::isinf(d))
		std::cout << "'" << static_cast<char>(d) << "'" << std::endl;
	else
		std::cout << "impossible" << std::endl;
	std::cout << "int: ";
	if (std::isnan(d) || std::isinf(d))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(d) << std::endl;
	std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}

void ScalarConverter::convert(const std::string &str)
{
	eType type = detectType(str);
	switch (type)
	{
		case TYPE_CHAR:
			handleChar(str);
			break ;
		case TYPE_INT:
			handleInt(str);
			break ;
		case TYPE_FLOAT:
			handleFloat(str);
			break ;
		case TYPE_DOUBLE:
			handleDouble(str);
			break ;
		default:
			std::cout << "Invalid input" << std::endl;
			break;
	}
}
