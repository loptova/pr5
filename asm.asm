;14 (3-x%5)/(y+2*z)
;edi, esi, edx;

format ELF64 

section '.text' executable

public sum
sum:

        imul edx, 2
        add esi, edx
        mov ecx, esi

        mov eax, edi
        mov esi, 5
        mov edx, 0
        cdq
        idiv esi

        mov eax, edx
        sub eax, 3
        imul eax, -1

        mov esi, ecx
        cdq 
        idiv esi
        ret