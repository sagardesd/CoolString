#include "stringops.h"

namespace cool
{
	CoolStringOperation::CoolStringOperation():data("")
	{
	}
	
	CoolStringOperation::CoolStringOperation(std::string data):data(data)
	{
	}

	CoolStringOperation::CoolStringOperation(const CoolStringOperation& sourceString)
	{
		this->data = sourceString.data;
	}
	
	CoolStringOperation& CoolStringOperation::operator=(const CoolStringOperation& sourceString)
	{
		this->data = sourceString.data;
		return *this;
	}

	CoolStringOperation::~CoolStringOperation()
	{
	}
	
	std::string CoolStringOperation::get()
	{
		return this->data;
	}
	
	void CoolStringOperation::set(std::string data)
	{
		this->data = data;
	}

	int CoolStringOperation::size()
	{
		return this->data.size();
	}
	
	
	void CoolStringOperation::replaceAllOccuranceOfSubstr(std::string subString, std::string newSubstring)
	{
		std::string tempString;
		int startPos = 0;
		int pos = this->data.find(subString, startPos);
		while(pos != std::string::npos)
		{
			tempString += this->data.substr(startPos, pos - startPos);
			tempString += newSubstring;
			startPos = pos + subString.size();
			pos = this->data.find(subString, startPos);
		}
		if(startPos <  this->data.size())
		{
			tempString += this->data.substr(startPos);
		}
		this->set(tempString);
	}

	void CoolStringOperation::splitString(StringVector& result, std::string delemeter)
	{
		if(delemeter.empty())
		{
			delemeter = " ";
		}
		int delemeterSize = delemeter.size();
		std::string token;
		int startPos = 0;
		int pos = this->data.find(delemeter);
		while(pos != std::string::npos)
		{
			token = this->data.substr(startPos, pos - startPos);
			result.push_back(token);
			startPos = pos + delemeterSize;
			pos = this->data.find(delemeter, startPos);
		}
		if(startPos < this->data.size())
		{
			result.push_back(this->data.substr(startPos));
		}	
	}
	
	void CoolStringOperation::findAllOccouranceOfSubstr(IntVector& posVect, std::string subString)
	{
		if(subString.empty())
		{
			return;
		}
		int substringSize = subString.size();
		int pos = this->data.find(subString);
		while(pos != std::string::npos)
		{
			posVect.push_back(pos);
			pos = this->data.find(subString, pos + substringSize);
		}
	}
	
	void CoolStringOperation::removeAllOccouranceOfSubstr(std::string subString)
	{
		if(subString.empty())
		{
			return;
		}	
		int startPos = 0;
		int substrPos = 0;
		int substrSize = subString.size();
		while((substrPos = this->data.find(subString, startPos)) != std::string::npos)
		{
			this->data.erase(substrPos, substrSize);
		}
	}
	
	void CoolStringOperation::removeFirstOccouranceOfSubstr(std::string subString)
	{
		if(subString.empty())
		{
			return;
		}
		int pos = this->data.find(subString);
		if(pos != std::string::npos)
		{
			this->data.erase(pos, subString.size());
		}
	}

	void CoolStringOperation::removeLastOccouranceOfSubstr(std::string subString)
	{
		if(subString.empty())
		{
			return;
		}
		int startPos = 0;
		int oldPos = 0;
		int pos = 0;
		while((pos = this->data.find(subString, startPos)) != std::string::npos)
		{
			oldPos = pos;
			startPos = pos + subString.size();
		}	
		if(oldPos < this->data.size())
		{
			this->data.erase(oldPos, subString.size());
		}
	}
	
}

