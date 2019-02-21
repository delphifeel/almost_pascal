#ifndef ALMOST_PASCAL_H
#define ALMOST_PASCAL_H

#include <stdio.h>
#include <stddef.h>

/* 
 * Core words 
 */
#define Result return
 
#define Begin {
	
#define End }

#define Then

#define Do

#define Procedure void

#define Function(_type) _type
 
#define If if

#define While while

#define Nil NULL

#define Var(_type, ...) _type __VA_ARGS__

/*
 * Data Types
 */
#define Cardinal unsigned int
 
#define Shortint short
 
#define Integer int

#define Longint long

#define Byte char

#define Real float

#define Double double
#define Extended double

#define String char*

#define Record(_name) \
	typedef struct s##_name _name;\
	struct s##_name {
 
/*
 * Operators
 */
#define And &&

#define Or ||

#define Div /

#define Mod %

/*
 * Standard lib
 */
#define Write printf

#endif