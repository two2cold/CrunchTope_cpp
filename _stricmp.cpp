/* Create a case insensitive string compare
Coded by Yuchen Liu */

bool _stricmp(string a, string b)
{
	transform(a.begin(),a.end(),a.begin(),::toupper);
	transform(b.begin(),b.end(),b.begin(),::toupper);
	if(a == b) return false;
	return true;
}
