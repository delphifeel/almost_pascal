# Almost Pascal
Pseudo Pascal language, implemented as C preprocessor macroses

I created this for fun :3 
I will update syntax regularly so you can leave your wishes and comments.

Example:
```
#include "almost_pascal.h"

Function(Integer) GetValue()
Begin
	Var(Integer, A, B, C);
	B = 22;
	A = 10;
	C = 999;
	
	Result A;
End;

Record(Human)
	Integer Age;
	Cardinal Weight;
End;

Procedure InitRecord()
Begin
	Var(Human, bob);
	bob.Age = 13;
	bob.Weight = 180;
	
	Write("bob age = %d\n", bob.Age);
	
	If (((bob.Age == 13) And (bob.Weight == 180)) Or
		(bob.Age < 20)) Then
	Begin
		Write("Bob is weird.\n");
	End
End;

Procedure main()
Begin
	Write("GetValue = %d\n", GetValue());
	InitRecord();
End;
```
