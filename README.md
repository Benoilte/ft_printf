ft_printf project is pretty straightforward, we have to recode printf. 
<br>
We will learn what is and how to implement variadic functions. Once we validate it, we will reuse this function in our future projects.

- Supported conversions: %, c, s, p, i, d, u, x, X
- Supported flags: # + (space)
- Supported options: - 0 . width

My result :slot_machine:
<br> <br>
<img width="157" alt="ft_printf_scores" src="https://github.com/Benoilte/ft_printf/assets/104198121/64d2170e-fd82-4ece-8c52-95110a10d296">

### Advanced Usage: Format Specifiers

This ft_printf function supports several format specifiers, described below.
These are optional, can be used in any combination, and are implemented as:
<code>%[flags][width][.precision]specifier</code>

The table below lists supported format specifiers:

<table>
    <thead>
        <tr>
            <th colspan=3><h4>Flags</h4></th>
        </tr>
        <tr>
            <th>Flag</th>
            <th>Description</th>
        </tr>
    </thead>
    <tbody>
	</thead>
        <tr>
            <td align="center">-</td>
            <td>Left justify the result within the field. By default it is right justified.</td>
        </tr>
        <tr>
            <td align="center">+</td>
            <td>Forces to precede the result with a plus or minus sign (+ or -) even for positive numbers. By default, only negative numbers are preceded with a sign.</td>
        </tr>
        <tr>
            <td align="center">(space)</td>
            <td>If there is no sign, a space is attached to the beginning of the result.</td>
        </tr>
        <tr>
            <td align="center">#</td>
            <td>Used with x or X specifiers the value is preceded with 0x or 0X respectively for values different than zero.</td>
        </tr>
        <tr>
            <td align="center">0</td>
            <td>Leading zeros are used to pad the numbers instead of space.</td>
        </tr>
    </tbody>
	<thead>
        <tr>
            <th colspan=3><h4>Width</h4></th>
        </tr>
        <tr>
            <th>Value</th>
            <th>Description</th>
        </tr>
    </thead>
    <tbody>
	</thead>
        <tr>
            <td align="center">(number)</td>
            <td>Minimum number of characters to be printed. If the value to be printed is shorter than this number, the result is padded with blank spaces. The value is not truncated even if the result is larger.</td>
        </tr>
    </tbody>
	<thead>
        <tr>
            <th colspan=3><h4>Precision</h4></th>
        </tr>
        <tr>
            <th>Value</th>
            <th>Description</th>
        </tr>
    </thead>
    <tbody>
	</thead>
        <tr>
            <td align="center">.(number)</td>
            <td>For integer specifiers (d, i, u, x, X) − precision specifies the minimum number of digits to be written. If the value to be written is shorter than this number, the result is padded with leading zeros. The value is not truncated even if the result is longer. A precision of 0 means that no character is written for the value 0. For s − this is the maximum number of characters to be printed. By default all characters are printed until the ending null character is encountered. For c type − it has no effect. When no precision is specified, the default is 1. If the period is specified without an explicit value for precision, 0 is assumed.</td>
        </tr>
    </tbody>
    <thead>
        <tr>
            <th colspan=3><h4>Specifiers</h4></th>
        </tr>
        <tr>
            <th>Format Specifier</th>
            <th>Description</th>
        </tr>
    </thead>
    <tbody>
	</thead>
        <tr>
            <td align="center">%</td>
            <td>% followed by another % character writes % to the screen.</td>
        </tr>
        <tr>
            <td align="center">c</td>
            <td>writes a single character.</td>
        </tr>
        <tr>
            <td align="center">s</td>
            <td>writes a character string.</td>
        </tr>
        <tr>
            <td align="center">p</td>
            <td>writes an implementation-defined character sequence defining a pointer address.</td>
        </tr>
        <tr>
            <td align="center">d or i</td>
            <td>writes a signed integer to decimal representation.</td>
        </tr>
        <tr>
            <td align="center">u</td>
            <td>writes an unsigned integer to decimal representation.</td>
        </tr>
        <tr>
            <td align="center">x or X</td>
            <td>writes an unsigned integer to hexadecimal representation.</td>
        </tr>
    </tbody>
</table>


The file main.c is used to test all different specifier.
<br><br>
To test with the francinette tester remove main.c file.
<br><br>
This project is expecteed to work on Mac computer of 42 school. 
<br><br>
if you test it on Linux remove the flag -Werror. 
<br><br>
Unfortunately the %% specifier, %s specifier with null and %p specifier with null will be different as expected in main.c test.
<br><br>
## Usage

``make`` to compile the libftprintf.a library.

### Basic Usage
For example, let's create a ``test_ft_printf.c`` file.

```c
// Include the header
#include "ft_printf.h"

int main(void)
{
      // Call the function
      ft_printf("Testing ft_printf!");
      return (0);
}
```

Compile the ``test_ft_printf.c`` file with the ft_printf library and run the program:
```bash
gcc test_ft_printf.c libftprintf.a && ./a.out
```

Or compile the existing main.c with the rule ``make compile`` and run the program
```bash
./test_ft_printf
```
