#ifndef __STRING_OPS_H__
#define __STRING_OPS_H__
#endif

#include <iostream>
#include <string>
#include <vector>

typedef std::vector<std::string> StringVector;
typedef std::vector<int> IntVector;

namespace coolstringops
{

	/* This method replace all occurance of a substring in the string to the new substring */
	void replace_all(std::string& sourceString, std::string subString, std::string newSubstring);

	/* This method is to split a string based on the passed delemeter. 
	 * If nothig is passed as delemeter it will split the string based on space 
	 */
	StringVector split(std::string sourceString, std::string delemeter = ""); 

	/* This method will return vector containing positions of the substring in the main string*/
	IntVector find_all_occourance(std::string sourceString, std::string subString);

	/* This method will remove all occourance of the substring from the main string */
	void remove_all_occourance(std::string& sourceString, std::string subString);

	/* This method will remove first occourance of the substring from the main string*/
	void remove_first_occourance(std::string& sourceString, std::string subString);

	/* This method will remove last occourance of the substring from the main string*/
	void remove_last_occourance(std::string& sourceString, std::string subString);
}

