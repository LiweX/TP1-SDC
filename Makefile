CC=gcc
CFLAGS= -m32

calc: main.o dec_add asm_io dec_sub
	$(CC) $(CFLAGS) -o calc main.o dec_add.o dec_sub.o asm_io.o

dec_add: dec_add.asm
	nasm -f elf dec_add.asm

dec_sub: dec_sub.asm
	nasm -f elf dec_sub.asm

asm_io: asm_io.asm
	nasm -f elf -d ELF_TYPE asm_io.asm

clean:
	rm *.o *.obj calc