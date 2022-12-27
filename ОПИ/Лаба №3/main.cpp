#include <iostream>

//UhlianitsaMikhail2005
//55686c69616e697473614d696b6861696c32303035
//\x55\x68\x6c\x69\x61\x6e\x69\x74\x73\x61\x4d\x69\x6b\x68\x61\x69\x6c\xx3532\x30\x30\
//00550068006c00690061006e0069007400730061004d0069006b006800610069006c0032003000300035

//УгляницаМихаил2005
//d3e3ebffede8f6e0cce8f5e0e8eb32303035
//\xd0\xa3\xd0\xb3\xd0\xbb\xd1\x8f\xd0\xbd\xd0\xb8\xd1\x86\xd0\xb0\xd0\x9c\xd0\xb8\xd1\x85\xd0\xb0\xd0\xb8\xd0\xbb\x32\x30\x30\x35
//04230433043b044f043d043804460430041c0438044504300438043b0032003000300035

//Угляница2005Mikhail
//d3e3ebffede8f6e0323030354d696b6861696c
//\xd0\xa3\xd0\xb3\xd0\xbb\xd1\x8f\xd0\xbd\xd0\xb8\xd1\x86\xd0\xb0\x32\x30\x30\x35\x4d\x69\x6b\x68\x61\x69\x6c
//04230433043b044f043d0438044604300032003000300035004d0069006b006800610069006c

int main()
{
	int number = 0x12345678;
	char hello[] = "Hello, ";
	char lfie[] = "UhlianitsaMikhail2005";
	char rfie[] = "УгляницаМихаил2005";
	char lr[] = "Угляница2005Mikhail";

	wchar_t Lfie[] = L"UhlianitsaMikhail2005";
	wchar_t Rfie[] = L"УгляницаМихаил2005";
	wchar_t LR[] = L"Угляница2005Mikhail";

	std::cout << hello << lfie << std::endl;
	return 0;
}