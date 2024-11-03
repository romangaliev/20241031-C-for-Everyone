/* compute a number of blanks digits letters and others
in the given file.
The files is directed to the program and we will learn how*/

/* Я догадался как впихнуть данные в этот файл!
Варианта два:
1:  my_program.exe < filename_to_calculate.c  
2) 2.1: my_program.exe
2.2: после этого печатаем текст с циферками и букамвками
можно даже переходать на новую строку нажимая ентер.
Когда закончил набирать текст, нажал ctrl + c и программа 
закончила чтение моего текста и выдала результат. Крутяк блин!
При этом нажатия на esc или ctrl + enter не помогали.
*/

#include <stdio.h>

int main(void)
{
	int blanks = 0, digits = 0, letters = 0, others = 0;
	int c; // used for int value of character
	while ( (c = getchar()) != EOF ) //EOF is End Of File
	{
		if (c == ' ') 
			++blanks;
		else if ( c >= '0' && c <= '9')
			++digits;
		else if ( c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
			++letters;
		else 
			++others;
	}
	printf(" blanks = %d, digits = %d, letters = %d\n",
		blanks, digits, letters);
	printf(" others = %d\n\n", others);
return 0;
}
	