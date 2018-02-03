/* Create a case insensitive string compare
Coded by Yuchen Liu */

#ifndef _STRICMP_H__
#define _STRICMP_H__

bool _stricmp(string a, string b)
{
	transform(a.begin(),a.end(),a.begin(),::toupper);
	transform(b.begin(),b.end(),b.begin(),::toupper);
	if(a == b) return false;
	return true;
}

#endif
