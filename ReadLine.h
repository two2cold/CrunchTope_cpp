/* Read each word in a line
Coded by Yuchen Liu*/

#ifndef READ_LINE_H__
#define READ_LINE_H__

int ReadLine(string stringLine, vector<string>& words) {
    istringstream iss(stringLine);
    string tempWord;
    while(iss >> tempWord) { // Read a string word by word
        if(*tempWord.c_str() != '!') { // Ignore anything starts with !
            words.push_back(tempWord);
        }else {
            break;
        }
    }
    return words.size(); // Return the number of words in the string
}

#endif
