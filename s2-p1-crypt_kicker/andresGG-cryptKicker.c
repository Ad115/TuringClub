/*
Crypt Kicker
------------

## Description

A common but insecure method of encrypting text is to permute the letters of the alphabet. That is, in the text, each letter of the alphabet is consistently replaced by some other letter. So as to ensure that the encryption is reversible, no two letters are replaced by the same letter.

Your task is to decrypt several encoded lines of text, assuming that each line uses a different set of replacements, and that all words in the decrypted text are from a dictionary of known words.


## Input

The input consists of a line containing an integer *n*, followed by *n* lower case words, one per line, in alphabetical order. These *n* words comprise the dictionary of words which may appear in the decrypted text. Following the dictionary are several lines of input. Each line is encrypted as described above.

There are no more than 1000 words in the dictionary. No word exceeds 16 letters. The encrypted lines contain only lower case letters and spaces and do not exceed 80 characters in length.

## Output

Decrypt each line and print it to standard output. If there are multiple solutions, any one will do. If there is no solutionm replace every letter of the alphabet by an asterisk.

## Samples

### Sample input

```
6
and
dick
jane
puff
spot
yertle
bjvg xsb hxsn xsb qymm xsb rqat xsb pnetfn
xxxx yyy zzzz www yyyy aaa bbbb ccc dddddd

```
NOTE: The input ends with a blank line

### Sample output

```
dick and jane and puff and spot and yertle
**** *** **** *** **** *** **** *** ******
```

*/

#include <stdio.h>

char **newStringArray(int total_strings, int string_length);


//===============>> BEGINNING OF MAIN ROUTINE <<=====================

int main(void)
{
    /* Receive input
       -------------*/

    // Get the number of words in the dictionary
    int words_in_dict;
    scanf("%d", &words_in_dict);

    // Make the dictionary
    char **dictionary = newStringArray(words_in_dict, 16);
    
    // Fill the dictionary
    for (int i=0; i<words_in_dict; i++)
    {
        scanf("%s\n", dictionary[i]);
    }

    // Make an array to hold the coded lines of text
    int max_lines = 10; // Assume initially that there will be no more than this
    int occupied_lines = 0;
    coded = newStringArray(max_lines, 80);

    // Get the coded lines of input
    do 
    {
        scanf("%s\n", coded[occupied_lines++]);

        if (occupied_lines >= max_lines)
        {
            extendStringArray(&coded, max_lines, max_lines + 10, 80);
            max_lines += 10;
        }
        char *last_line = coded[occupied_lines - 1];

    } while ( !isBlank( last_line ) ); // Finish if the last line was blank

    /*
    Decoding process
    ----------------*/

    // Take line by line
    for (int i=0; i<occupied_lines; i++)
    {
        int position_at_line = 0;
        position_at_
    }


}

//===================>> END OF MAIN ROUTINE <<=======================


// ===========
//	Functions
// ===========

char **newStringArray(int total_strings, int string_length)
{
    // Create the array
    char **string_array = (char **) calloc(total_strings, sizeof(*string_array));

    // Create each string
    for (int i=0; i<words_in_dict; i++)
        string_array[i] = (char *) calloc(string_length + 1, sizeof(char)); // Add space for the '\0' terminator
    
    return string_array;
}

//.............................................................................................................

void extendStringArray(char **array, int previous_strings, int final_strings, int string_size)
{
    // Extend the array
    array = (char **) realloc(array, final_strings * sizeof(*array));

    // Initialize the new strings
    for (int i = previous_strings; i < final_strings; i++)
    {
        array[i] = (char *) calloc(string_size, sizeof(char));
    }
}

//.............................................................................................................

int isBlank(char *string)   { return ( string[0] == '\0'); }

//..................................................................................................................