# makefile for compiling ForwardCom binary tools 'forw' with gnu C++ compiler
# date: 2018-02-20
# version: 1.01
# license: GPL
# author: Agner Fog

# compiler name:
comp = g++

# compiler flags:
compflags = -O3 -m64

# object files:
objfiles = stdafx.o main.o error.o containers.o cmdline.o elf.o \
  assem1.o assem2.o assem3.o assem4.o assem5.o assem6.o disasm1.o disasm2.o \
  library.o linker1.o linker2.o \
  emulator1.o emulator2.o emulator3.o emulator4.o emulator5.o emulator6.o emulator7.o

# header files:
headerfiles=stdafx.h maindef.h error.h elf.h elf_forwardcom.h cmdline.h \
containers.h converters.h assem.h disassem.h library.h linker.h emulator.h system_functions.h

# make forw:
forw : $(objfiles)
	$(comp) $(compflags) -o $@ $(objfiles)

# rule for making object file:
%.o: %.cpp $(headerfiles)
	$(comp) $(compflags) -c -o $@ $<

# rule for clean up:
clean : 
	rm $(objfiles)
