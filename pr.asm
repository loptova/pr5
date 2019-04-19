;edi x, esi y, edx z;
;(x%5+y|z)*3


format ELF64 

section '.text' executable

public testf
testf:
        imul edi, 3
        imul esi, edx

        add edi, esi
        
        mov eax, edi
        mov esi, 4
        mov edx, 0
        cdq
        idiv esi
        mov eax, edx

        ret

