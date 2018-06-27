#ifndef __STRING_OPS_H__
#define __STRING_OPS_H__
#endif

#include <iostream>
#include <string>
#include <vector>

typedef std::vector<std::string> StringVector;
typedef std::vector<int> IntVector;

namespace cool
{

class CoolStringOperation
{
public:
	/* Constructors and Destructors */
	CoolStringOperation();
	CoolStringOperation(std::string data);
	CoolStringOperation(const CoolStringOperation& sourceString);
	CoolStringOperation& operator=(const CoolStringOperation& sourceString);
	~CoolStringOperation();
public:
	std::string get();
	void set(std::string data);
	int size();
	
	/* This method replace all occurance of a substring in the string to the new substring */
	void replaceAllOccuranceOfSubstr(std::string subString, std::string newSubstring);

	/* This method is to split a string based on the passed delemeter. 
 	 * If nothig is passed as delemeter it will split the string based on space 
 	 */
	void splitString(StringVector& result, std::string delemeter = ""); 
	
	/* This method will return vector containing positions of the substring in the main string*/
	void findAllOccouranceOfSubstr(IntVector& posVect, std::string subString);
	
	/* This method will remove all occourance of the substring from the main string */
	void removeAllOccouranceOfSubstr(std::string subString);

	/* This method will remove first occourance of the substring from the main string*/
	void removeFirstOccouranceOfSubstr(std::string subString);

	/* This method will remove last occourance of the substring from the main string*/
	void removeLastOccouranceOfSubstr(std::string subString);
		
private:
	std::string data;
};

}

