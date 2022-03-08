MCU=atmega328
F_CPU=1200000
CC=avr-gcc
OBJCOPY=avr-objcopy
CFLAGS=-std=c99 -Wall -g -Os -mmcu=${MCU} -DF_CPU=${F_CPU} -I.
TARGET=main
SRCS=watervendor.c

all:
	${CC} ${CFLAGS} -o ${TARGET}.bin ${SRCS} 
	${OBJCOPY} -j .text -j .data -O ihex ${TARGET}.bin ${TARGET}.hex

flash:   
	avrdude -p ${MCU} -c usbasp -U flash:w:${TARGET}.hex:i -F -P usb

clean:
	rm -f *.bin *.hex

analysis: $(SRC)
# Analyse the code using Cppcheck command line utility
	cppcheck --enable=all $(SRCS)

doc:
# Build the code code documentation using Doxygen command line utility
	make -C documentation