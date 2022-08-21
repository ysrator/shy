#include <stdio.h>
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

EXTERN EMSCRİPTEN_KEEPALİVE void commands(int argc, char ** argv) {
    EM_ASM({ 
        /*
            Burayı C ile sağlanmayan bölümlerde JavaScript'den fonksiyon çağırmak için kullanıcam.
        */
     });
}