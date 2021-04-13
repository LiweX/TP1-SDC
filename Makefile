CC=gcc
CFLAGS= -m32

all: calc
#En caso de ejecutar el make sin argumento se ejecuta el target calc

calc: main.o dec_add asm_io dec_sub bin_add bin_sub
	$(CC) $(CFLAGS) -o calc main.o dec_add.o dec_sub.o bin_add.o bin_sub.o asm_io.o -lm

dec_add: dec_add.asm
	nasm -f elf dec_add.asm

dec_sub: dec_sub.asm
	nasm -f elf dec_sub.asm

bin_add: bin_add.asm
	nasm -f elf bin_add.asm

bin_sub: bin_sub.asm
	nasm -f elf bin_sub.asm

asm_io: asm_io.asm
	nasm -f elf -d ELF_TYPE asm_io.asm

clean:
	rm *.o *.obj calc