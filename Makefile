CC=gcc
CFLAGS= -m32

calc: main.o dec_sum asm_io
	$(CC) $(CFLAGS) -o calc main.o dec_sum.o asm_io.o

dec_sum: dec_sum.asm
	nasm -f elf dec_sum.asm

asm_io: asm_io.asm
	nasm -f elf -d ELF_TYPE asm_io.asm

clean:
	rm *.o *.obj calc