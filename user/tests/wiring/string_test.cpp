#include "spark_wiring_string.h"
#include "unit_test.h"

test(String_Concat) {
    String str1("Hello");
    str1.concat(" World");
    assertEqual(str1, "Hello World");
}

test(String_Substring) {
    String str("Hello World");
    String sub = str.substring(6, 11);
    assertEqual(sub, "World");
}

test(Print_String) {
    String str("Hello World");
    Print print;
    size_t len = print.print(str);
    assertEqual(len, str.length());
}