#     Cool String Operations
--------------------------------
This project is created to solve some of the general string problems which programmers face in work. Currently many string operations are not supported directly by the standard c++ string or STL library algorithms. By the use of STL, string functions, and algorithm i have impliemented some functions to solve these problems. Though such opeartions of string can be done in c++ using boost or any other third party library, the functions implimented here are for those who want to stick to standrad c++ library.

The opeartions currently supported are:
1. void replace_all(std::string& sourceString, std::string subString, std::string newSubstring)
   - This api will replace all occourance of the subString in sourceString by the passed newSubstring.
   
2. StringVector split(std::string sourceString, std::string delemeter)
   - This api will spilt the sourceString bsaed on the delemeter passed and returns a vector of string tokens.
   - If no delemeter is passed then it will split the sourceString on the basis of space.

3. IntVector find_all_occourance(std::string sourceString, std::string subString)
   - This api will return a vector of integers that contains all the occourance position of the subString in the sourceString.
   
4. void remove_all_occourance(std::string& sourceString, std::string subString)
   - This api will remove all occourance of the subString from the soureceString.
   
5. void remove_first_occourance(std::string& sourceString, std::string subString)
   - This api will remove the first occourance of the subString from the sourceString.
   
6. void remove_last_occourance(std::string& sourceString, std::string subString)
   - This api will remove the last occourance of the subString from the sourceString.

