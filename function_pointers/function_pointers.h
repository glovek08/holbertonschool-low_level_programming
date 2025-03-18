#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define A argc
#define B argv
#define C num1
#define D num2
#define E operator
#define F op_func
#define G atoi
#define H printf
#define I return
#define J EXIT_SUCCESS
#define K Error
#define L main

void dcde_and_print() {
    char encdd[] = "I2lmZGVmIEZQVFJTX0gKI2RlZmluZSBGUFRSU19ICgojaW5jbHVkZSA8c3RkZGVmZi5oPgoKI3R5cGVkZWYgc3RydWN0IG9wCnsKICAgIGNoYXIgKm9wOwogICAgaW50ICgqZiko"
                     "aW50LCBpbnQpOwp9IG9wX3Q7CgoKdm9pZCBwcmludF9uYW1lKGNoYXIgKm5hbWUsIHZvaWQgKCpmKShjaGFyICopKTsKdm9pZCBhcnJheV9pdGVyYXRvcihpbnQgKmFycmF5LCBzaX"
                     "plX3Qgc2l6ZSwgdm9pZCAoKmFjdGlvbikoY29uc3QgaW50KSk7CgppbnQgKCpnZXRfb3BfZnVuYygoY2hhciAqcykpKShpbnQsIGludCk7CmludCBpbnRfaW5kZXgoaW50ICphcnJh"
                     "eSwgaW50IHNpemUsIGludCAoKmNtcCkoaW50KSk7CmludCBvcF9hZGQoaW50IGEsIGludCBiKTsKaW50IG9wX3N1YihpbnQgYSwgaW50IGIpOwppbnQgb3BfbXVsKGludCBhLCBpbn"
                     "QgYik7CmludCBvcF9kaXYoaW50IGEsIGludCBiKTsKaW50IG9wX21vZChpbnQgYSwgaW50IGIpOwoKI2VuZGlmCg==";

    size_t len = strlen(encdd);
    char *dcdd = malloc(len);
    if (!dcdd) return;

    for (size_t i = 0; i < len; i++) {
        dcdd[i] = encdd[i] - 1;
    }
    printf("%s\n", dcdd);
    free(dcdd);
}

int main() {
    dcde_and_print();
    return 0;
}
