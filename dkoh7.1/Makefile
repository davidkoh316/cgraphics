TARGET  = Assignment1
SRCS	= 	Util/cmdLineParser \
		Image/bmp \
		Image/image \
		Image/image.todo \
		Image/jpeg \
		Image/lineSegments \
		Image/lineSegments.todo \
		main

CC   = g++
CFLAGS		+= -I.
LFLAGS		+= -LJPEG -lJPEG

OBJECTS		= ${addsuffix .o, ${SRCS}}
CLEAN		= *.o .depend ${TARGET} *.dsp *.dsw *.bak

#############################################################
all: debug

debug: CFLAGS += -DUSE_UNIX -DDEBUG -g3
debug: ${TARGET}

release: CFLAGS += -O2 -DUSE_UNIX -DRELEASE -pipe -fomit-frame-pointer
release: ${TARGET}

${TARGET}: depend JPEG/libJPEG.a ${OBJECTS}
	${CC} -o $@ ${OBJECTS} ${LFLAGS}

clean:	
	/bin/rm -f ${CLEAN}

.cpp.o:
	${CC} ${CFLAGS} -o $@ -c $<

JPEG/libJPEG.a:
	${MAKE} -C JPEG

depend: 
	makedepend -- ${CFLAGS} -- ${addsuffix .cpp, ${SRCS}}
# DO NOT DELETE

Util/cmdLineParser.o: /usr/include/stdio.h /usr/include/features.h
Util/cmdLineParser.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
Util/cmdLineParser.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
Util/cmdLineParser.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
Util/cmdLineParser.o: /usr/include/libio.h /usr/include/_G_config.h
Util/cmdLineParser.o: /usr/include/wchar.h /usr/include/bits/wchar.h
Util/cmdLineParser.o: /usr/include/xlocale.h /usr/include/bits/stdio_lim.h
Util/cmdLineParser.o: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
Util/cmdLineParser.o: /usr/include/bits/waitflags.h
Util/cmdLineParser.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
Util/cmdLineParser.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
Util/cmdLineParser.o: /usr/include/sys/types.h /usr/include/time.h
Util/cmdLineParser.o: /usr/include/sys/select.h /usr/include/bits/select.h
Util/cmdLineParser.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
Util/cmdLineParser.o: /usr/include/sys/sysmacros.h /usr/include/alloca.h
Util/cmdLineParser.o: /usr/include/string.h /usr/include/assert.h
Util/cmdLineParser.o: Util/cmdLineParser.h
Image/bmp.o: Image/bmp.h Image/image.h /usr/include/stdio.h
Image/bmp.o: /usr/include/features.h /usr/include/bits/predefs.h
Image/bmp.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
Image/bmp.o: /usr/include/gnu/stubs.h /usr/include/bits/types.h
Image/bmp.o: /usr/include/bits/typesizes.h /usr/include/libio.h
Image/bmp.o: /usr/include/_G_config.h /usr/include/wchar.h
Image/bmp.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
Image/bmp.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
Image/bmp.o: Image/lineSegments.h /usr/include/stdlib.h
Image/bmp.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
Image/bmp.o: /usr/include/endian.h /usr/include/bits/endian.h
Image/bmp.o: /usr/include/bits/byteswap.h /usr/include/sys/types.h
Image/bmp.o: /usr/include/time.h /usr/include/sys/select.h
Image/bmp.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
Image/bmp.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
Image/bmp.o: /usr/include/alloca.h
Image/image.o: /usr/include/string.h /usr/include/features.h
Image/image.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
Image/image.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
Image/image.o: /usr/include/xlocale.h /usr/include/stdlib.h
Image/image.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
Image/image.o: /usr/include/endian.h /usr/include/bits/endian.h
Image/image.o: /usr/include/bits/byteswap.h /usr/include/sys/types.h
Image/image.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
Image/image.o: /usr/include/time.h /usr/include/sys/select.h
Image/image.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
Image/image.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
Image/image.o: /usr/include/alloca.h Image/image.h /usr/include/stdio.h
Image/image.o: /usr/include/libio.h /usr/include/_G_config.h
Image/image.o: /usr/include/wchar.h /usr/include/bits/wchar.h
Image/image.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
Image/image.o: Image/lineSegments.h ./Util/cmdLineParser.h ./Image/bmp.h
Image/image.o: ./Image/jpeg.h
Image/image.todo.o: Image/image.h /usr/include/stdio.h
Image/image.todo.o: /usr/include/features.h /usr/include/bits/predefs.h
Image/image.todo.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
Image/image.todo.o: /usr/include/gnu/stubs.h /usr/include/bits/types.h
Image/image.todo.o: /usr/include/bits/typesizes.h /usr/include/libio.h
Image/image.todo.o: /usr/include/_G_config.h /usr/include/wchar.h
Image/image.todo.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
Image/image.todo.o: /usr/include/bits/stdio_lim.h
Image/image.todo.o: /usr/include/bits/sys_errlist.h Image/lineSegments.h
Image/image.todo.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
Image/image.todo.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
Image/image.todo.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
Image/image.todo.o: /usr/include/sys/types.h /usr/include/time.h
Image/image.todo.o: /usr/include/sys/select.h /usr/include/bits/select.h
Image/image.todo.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
Image/image.todo.o: /usr/include/sys/sysmacros.h /usr/include/alloca.h
Image/image.todo.o: /usr/include/math.h /usr/include/bits/huge_val.h
Image/image.todo.o: /usr/include/bits/huge_valf.h
Image/image.todo.o: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
Image/image.todo.o: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
Image/image.todo.o: /usr/include/bits/mathcalls.h
Image/jpeg.o: Image/jpeg.h Image/image.h /usr/include/stdio.h
Image/jpeg.o: /usr/include/features.h /usr/include/bits/predefs.h
Image/jpeg.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
Image/jpeg.o: /usr/include/gnu/stubs.h /usr/include/bits/types.h
Image/jpeg.o: /usr/include/bits/typesizes.h /usr/include/libio.h
Image/jpeg.o: /usr/include/_G_config.h /usr/include/wchar.h
Image/jpeg.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
Image/jpeg.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
Image/jpeg.o: Image/lineSegments.h /usr/include/assert.h
Image/jpeg.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
Image/jpeg.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
Image/jpeg.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
Image/jpeg.o: /usr/include/sys/types.h /usr/include/time.h
Image/jpeg.o: /usr/include/sys/select.h /usr/include/bits/select.h
Image/jpeg.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
Image/jpeg.o: /usr/include/sys/sysmacros.h /usr/include/alloca.h
Image/jpeg.o: ./JPEG/jpeglib.h ./JPEG/jconfig.h ./JPEG/jmorecfg.h
Image/jpeg.o: /usr/include/setjmp.h /usr/include/bits/setjmp.h
Image/lineSegments.o: Image/lineSegments.h /usr/include/stdio.h
Image/lineSegments.o: /usr/include/features.h /usr/include/bits/predefs.h
Image/lineSegments.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
Image/lineSegments.o: /usr/include/gnu/stubs.h /usr/include/bits/types.h
Image/lineSegments.o: /usr/include/bits/typesizes.h /usr/include/libio.h
Image/lineSegments.o: /usr/include/_G_config.h /usr/include/wchar.h
Image/lineSegments.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
Image/lineSegments.o: /usr/include/bits/stdio_lim.h
Image/lineSegments.o: /usr/include/bits/sys_errlist.h /usr/include/math.h
Image/lineSegments.o: /usr/include/bits/huge_val.h
Image/lineSegments.o: /usr/include/bits/huge_valf.h
Image/lineSegments.o: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
Image/lineSegments.o: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
Image/lineSegments.o: /usr/include/bits/mathcalls.h
Image/lineSegments.todo.o: Image/lineSegments.h /usr/include/stdio.h
Image/lineSegments.todo.o: /usr/include/features.h
Image/lineSegments.todo.o: /usr/include/bits/predefs.h
Image/lineSegments.todo.o: /usr/include/sys/cdefs.h
Image/lineSegments.todo.o: /usr/include/bits/wordsize.h
Image/lineSegments.todo.o: /usr/include/gnu/stubs.h /usr/include/bits/types.h
Image/lineSegments.todo.o: /usr/include/bits/typesizes.h /usr/include/libio.h
Image/lineSegments.todo.o: /usr/include/_G_config.h /usr/include/wchar.h
Image/lineSegments.todo.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
Image/lineSegments.todo.o: /usr/include/bits/stdio_lim.h
Image/lineSegments.todo.o: /usr/include/bits/sys_errlist.h
Image/lineSegments.todo.o: /usr/include/math.h /usr/include/bits/huge_val.h
Image/lineSegments.todo.o: /usr/include/bits/huge_valf.h
Image/lineSegments.todo.o: /usr/include/bits/huge_vall.h
Image/lineSegments.todo.o: /usr/include/bits/inf.h /usr/include/bits/nan.h
Image/lineSegments.todo.o: /usr/include/bits/mathdef.h
Image/lineSegments.todo.o: /usr/include/bits/mathcalls.h
main.o: /usr/include/stdio.h /usr/include/features.h
main.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
main.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
main.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
main.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
main.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
main.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
main.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
main.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
main.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
main.o: /usr/include/sys/types.h /usr/include/time.h
main.o: /usr/include/sys/select.h /usr/include/bits/select.h
main.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
main.o: /usr/include/sys/sysmacros.h /usr/include/alloca.h ./Image/bmp.h
main.o: Image/image.h Image/lineSegments.h ./Image/jpeg.h Image/image.h
main.o: ./Util/cmdLineParser.h /usr/include/string.h
