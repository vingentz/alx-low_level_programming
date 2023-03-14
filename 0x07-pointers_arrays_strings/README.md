# More Pointers, Arrays & Strings
---

### [0. memset](./0-memset.c)
* A function that fills memory with a constant byte.
	- The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b and Returns a pointer to the memory area s


### [1. memcpy](./1-memcpy.c)
* A function that copies memory area.
	- The _memcpy() function copies n bytes from memory area src to memory area dest and returns a pointer to dest


### [2. strchr](./2-strchr.c)
* A function that locates a character in a string.
	- Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found


### [3. strspn](./3-strspn.c)
* A function that gets the length of a prefix substring.
	- Returns the number of bytes in the initial segment of s which consist only of bytes from accept


### [4. strpbrk](./4-strpbrk.c)
* A function that searches a string for any of a set of bytes.


### [5. strstr](./5-strstr.c)
* A function that locates a substring.
	- finds the first occurrence of the substring needle in the string haystack. The terminating null bytes (\0) are not compared and Returns a pointer to the beginning of the located substring, or NULL if the substring is not found.

### [6. Chess is mental torture](./7-print_chessboard.c)
* A function that prints the chessboard.


### [7. The line of life is a ragged diagonal between duty and desire](./8-print_diagsums.c)
* A function that prints the sum of the two diagonals of a square matrix of integers.
	- Standard library is allowed.


### [8. Double pointer, double fun](./100-set_string.c)
* A function that sets the value of a pointer to a char.


### [9. My primary goal of hacking was the intellectual curiosity, the seduction of adventure](./101-crackme_password)
* A file that contains the password for the crackme2 executable.(https://github.com/holbertonschool/0x06.c)
	- File contains the exact password, no new line, no extra space
	- ltrace, ldd, gdb and objdump can help
	- Install the openssl library to run the crakme2 program: sudo apt install libssl-dev
	- Edit the source list sudo nano /etc/apt/sources.list to add the following line: deb http://security.ubuntu.com/ubuntu xenial-security main Then sudo apt update and sudo apt install libssl1.0.0

---
