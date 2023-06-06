#include <stdio.h>

typedef struct rational {
    int numerator;
    int denominator;
}Rational;

void increment(Rational* rational) {
    (*rational).numerator++;
}

void decrement(Rational* rational) {
    (*rational).numerator--;
}

Rational addition(Rational r1, Rational r2) {

    Rational r3;
    if(r1.denominator == r2.denominator) {
        r3.numerator = r1.numerator + r2.numerator;
        r3.denominator = r1.denominator;
    }else {
        r1.numerator = r1.numerator * r2.denominator;
        r2.numerator = r2.numerator * r1.denominator;
        r3.numerator = r1.numerator + r2.numerator;
        r3.denominator = r1.denominator * r2.denominator;
    }

    return r3;
}

Rational subtraction(Rational r1, Rational r2) {
    Rational r3;
    if(r1.denominator == r2.denominator) {
        r3.numerator = r1.numerator - r2.numerator;
        r3.denominator = r1.denominator;
    }else {
        r1.numerator = r1.numerator * r2.denominator;
        r2.numerator = r2.numerator * r1.denominator;
        r3.numerator = r1.numerator - r2.numerator;
        r3.denominator = r1.denominator * r2.denominator;
    }

    return r3;
}

Rational multiply(Rational r1, Rational r2) {
    Rational r3;

    r3.numerator = r1.numerator * r2.numerator;
    r3.denominator = r1.denominator * r2.denominator;

    return r3;
}

Rational divide(Rational r1, Rational r2) {

    Rational r3;
    r3.numerator = r1.denominator * r2.numerator;
    r3.denominator = r1.numerator * r2.denominator;

    return r3;
}

int smaller(Rational r1, Rational r2) {

    if(r1.denominator == r2.denominator) {
        if(r1.numerator < r2.numerator) {
            return 0;
        } else {
            return 1;
        }
    } else {
        r1.numerator = r1.numerator * r2.denominator;
        r2.numerator = r1.denominator * r2.numerator;
        if(r1.numerator < r2.numerator) {
            return 0;
        } else {
            return 1;
        }
    }
}

int bigger(Rational r1, Rational r2) {

    if(r1.denominator == r2.denominator) {
        if(r1.numerator > r2.numerator) {
            return 0;
        } else {
            return 1;
        }
    } else {
        r1.numerator = r1.numerator * r2.denominator;
        r2.numerator = r1.denominator * r2.numerator;
        if(r1.numerator > r2.numerator) {
            return 0;
        } else {
            return 1;
        }
    }

}

int equal(Rational r1, Rational r2) {

    if(r1.denominator == r2.denominator) {
        if(r1.numerator == r2.numerator) {
            return 0;
        } else {
            return 1;
        }
    } else {
        r1.numerator = r1.numerator * r2.denominator;
        r2.numerator = r1.denominator * r2.numerator;
        if(r1.numerator == r2.numerator) {
            return 0;
        } else {
            return 1;
        }
    }
}

int norEqual(Rational r1, Rational r2) {

    if(r1.denominator == r2.denominator) {
        if(r1.numerator != r2.numerator) {
            return 0;
        } else {
            return 1;
        }
    } else {
        r1.numerator = r1.numerator * r2.denominator;
        r2.numerator = r1.denominator * r2.numerator;
        if(r1.numerator != r2.numerator) {
            return 0;
        } else {
            return 1;
        }
    }
}


int main() {

    Rational rational1;
    Rational rational2;

    printf("Enter the numerator: ");
    scanf("%d", &rational1.numerator);

    printf("Enter the denominator: ");
    scanf("%d", &rational1.denominator);

    printf("Enter the numerator: ");
    scanf("%d", &rational2.numerator);

    printf("Enter the denominator: ");
    scanf("%d", &rational2.denominator);

    printf("Before: %d / %d\n", rational1.numerator, rational1.denominator);
    increment(&rational1);
    printf("After: %d / %d\n", rational1.numerator, rational1.denominator);

    printf("Before: %d / %d + %d / %d\n", rational1.numerator, rational1.denominator, rational2.numerator, rational2.denominator);
    Rational r3 = addition(rational1, rational2);
    printf("After: %d / %d\n", r3.numerator, r3.denominator);


    return 0;
}
