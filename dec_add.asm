%include "asm_io.inc"
segment .data
msg1 db    "Se realizara una suma decimal: ", 0

segment .bss
;
; uninitialized data is put in the bss segment
;

segment .text
        global  dec_add
dec_add:
        enter   0,0               ; setup routine
        pusha

        mov eax,msg1
        call print_string

        mov eax,[ebp + 8]
        add eax,[ebp + 12]

        call print_int
        
        popa
        mov     eax, 0            ; return back to C
        leave                     
        ret

