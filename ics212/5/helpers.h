/**********************************************************************
//
// NAME:        Jason Favrod
//
// HOMEWORK:    3 Part B
//
// CLASS:       ICS 212
//
// INSTRUCTOR:  Ravi Narayan
//
// DATE:        17 Sept 2014
//
// FILE:        helpers.h
//
// DESCRIPTION: Header file for helpers.c.
//
***********************************************************************/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void clear_input_buff(void);
int get_int(void);
int inrange(int x, int low, int high);
int clear_string(char str[]);
int str_replace(char needle, char haystack[], char replace);
