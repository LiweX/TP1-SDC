%include "asm_io.inc"
segment .data
msg1 db    "Se realizara una suma binaria: ", 0

segment .bss
;
; uninitialized data is put in the bss segment
;

segment .text
        global  bin_add
bin_add:
        enter   0,0               ; setup routine
        pusha
        push ebx

        mov eax,msg1
        call print_string

        mov eax,[ebp + 8]
        add eax,[ebp + 12]

        mov ebx,[ebp + 16]
        mov [ebx],eax

        pop ebx
        popa
        mov     eax, 0            ; return back to C
        leave                     
        ret

