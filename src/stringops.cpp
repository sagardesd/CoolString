#include "stringops.h"

namespace coolstringops 
{
	void replace_all(std::string& sourceString, std::string subString, std::string newSubstring)
	{
		std::string tempString;
		int startPos = 0;
		int pos = sourceString.find(subString, startPos);
		while(pos != std::string::npos)
		{
			tempString += sourceString.substr(startPos, pos - startPos);
			tempString += newSubstring;
			startPos = pos + subString.size();
			pos = sourceString.find(subString, startPos);
		}
		if(startPos <  sourceString.size())
		{
			tempString += sourceString.substr(startPos);
		}
		sourceString = tempString;
	}

	StringVector split(std::string sourceString, std::string delemeter)
	{
		StringVector result;
		if(delemeter.empty())
		{
			delemeter = " ";
		}
		int delemeterSize = delemeter.size();
		std::string token;
		int startPos = 0;
		int pos = sourceString.find(delemeter);
		while(pos != std::string::npos)
		{
			token = sourceString.substr(startPos, pos - startPos);
			result.push_back(token);
			startPos = pos + delemeterSize;
			pos = sourceString.find(delemeter, startPos);
		}
		if(startPos < sourceString.size())
		{
			result.push_back(sourceString.substr(startPos));
		}	
		return result;
	}

	IntVector find_all_occourance(std::string sourceString, std::string subString)
	{
		IntVector result;
		if(subString.empty() || (subString.size() > sourceString.size()))
		{
			return result;
		}
		int substringSize = subString.size();
		int pos = sourceString.find(subString);
		while(pos != std::string::npos)
		{
			result.push_back(pos);
			pos = sourceString.find(subString, pos + substringSize);
		}
		return result;
	}

	void remove_all_occourance(std::string& sourceString, std::string subString)
	{
		if(subString.empty() || (subString.size() > sourceString.size()))
		{
			return;
		}	
		int startPos = 0;
		int substrPos = 0;
		int substrSize = subString.size();
		while((substrPos = sourceString.find(subString, startPos)) != std::string::npos)
		{
			sourceString.erase(substrPos, substrSize);
		}
	}

	void remove_first_occourance(std::string& sourceString, std::string subString)
	{
		if(subString.empty() || (subString.size() > sourceString.size()))
		{
			return;
		}
		int pos = sourceString.find(subString);
		if(pos != std::string::npos)
		{
			sourceString.erase(pos, subString.size());
		}
	}

	void remove_last_occourance(std::string& sourceString, std::string subString)
	{
		if(subString.empty() || (subString.size() > sourceString.size()))
		{
			return;
		}
		int startPos = 0;
		int oldPos = 0;
		int pos = 0;
		while((pos = sourceString.find(subString, startPos)) != std::string::npos)
		{
			oldPos = pos;
			startPos = pos + subString.size();
		}	
		if(oldPos < sourceString.size())
		{
			sourceString.erase(oldPos, subString.size());
		}
	}
}

