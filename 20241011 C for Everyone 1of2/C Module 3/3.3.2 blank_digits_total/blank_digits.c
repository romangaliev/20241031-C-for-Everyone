/* compute a number of blanks, digits and total characters
in the given file.
The files are directed to the program  using ....exe < 
*/

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
	int blanks = 0, digits = 0, total_chars = 0;
	int c; // used for int value of character

	for (; (c = getchar()) != EOF; total_chars++ ) //EOF is End Of File
	{
		if (c == ' ') 
			++blanks;
		else if ( c >= '0' && c <= '9')
			++digits;
		
	}
	printf(" blanks = %d, digits = %d, total_chars = %d\n\n",
		blanks, digits, total_chars);
	
return 0;
}
	