//
// Created by USER on 29/03/2018.
//

#ifndef POSTFIXCALC_MAIN_H
#define POSTFIXCALC_MAIN_H
long getLongValue(const char* digits, long end, long begin);
long getCarry(long number);
long getResult(long carry);

void addDigit(char c, struct bignum* number);
long *convertToArray(struct bignum* number);
struct bignum* convertTObignum(long array[],long size);
long *addingTwoArrays(const long first[], const long second[], long firstLength, long secondLength);


struct stack;
void push(struct bignum *number, struct stack* s);
struct bignum *peek (struct stack *s);
struct bignum * pop(struct stack *s) ;
extern void calcSum(struct stack* s);
extern void calcSub(struct stack* s);
extern void calcMult(struct stack* s);
extern void calcDiv(struct stack* s);

extern void execute_p(struct stack *s);
extern void execute_c();

bool isEqualZero(const long *a,long aSize ,const long *b, long bSize);
bool isEqualOne(const long *a,long aSize);
bool isGE(const long* first,const long* second, long firstSize, long secondSize);



#endif //POSTFIXCALC_MAIN_H
