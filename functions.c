#include <studio.h>
#include <emscripten/emscripten.h>

int main() {
    printf("Shy created by Yasir Eymen Kayabasi/n");
    return 0;
}

#ifdef _cplusplus
#define EXTERN extern "C"
#else
#define EXTERN
#endif

EXTERN EMSCRİPTEN_KEEPALİVE void cmd(int argc, char ** argv) {
    printf("Coming soon/n");
}