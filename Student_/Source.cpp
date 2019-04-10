#include "Student_.h"

void main()
{

	student_ s("Petya", 18);
	s.info();
	student_ s2(s);
	s2.info();

	system("pause");
}