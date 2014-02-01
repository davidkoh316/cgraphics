TARGET  = libJPEG.a
SRCS	= 	ckconfig  \
		jcapimin \
		jcapistd \
		jccoefct \
		jccolor \
		jcdctmgr \
		jchuff \
		jcinit \
		jcmainct \
		jcmarker \
		jcmaster \
		jcomapi \
		jcparam \
		jcphuff \
		jcprepct \
		jcsample \
		jctrans \
		jdapimin \
		jdapistd \
		jdatadst \
		jdatasrc \
		jdcoefct \
		jdcolor \
		jddctmgr \
		jdhuff \
		jdinput \
		jdmainct \
		jdmarker \
		jdmaster \
		jdmerge \
		jdphuff \
		jdpostct \
		jdsample \
		jdtrans \
		jerror \
		jfdctflt \
		jfdctfst \
		jfdctint \
		jidctflt \
		jidctfst \
		jidctint \
		jidctred \
		jmemmgr \
		jmemnobs \
		jquant1 \
		jquant2 \
		jutils 


CC   = g++
CFLAGS		+=
LFLAGS		+=

OBJECTS		= ${addsuffix .o, ${SRCS}}
CLEAN		= *.o ${TARGET}

#############################################################
all: debug

debug: CFLAGS += -DDEBUG -g3
debug: ${TARGET}

release: CFLAGS += -O2 -DRELEASE -pipe -fomit-frame-pointer
release: ${TARGET}

${TARGET}: depend ${OBJECTS} 
	ar r ${TARGET} ${OBJECTS}

clean:	
	/bin/rm -f ${CLEAN}

.cpp.o:
	${CC} ${CFLAGS} -c $<

depend: 
	makedepend -- ${CFLAGS} -- ${addsuffix .cpp, ${SRCS}}
# DO NOT DELETE

ckconfig.o: /usr/include/stdio.h /usr/include/features.h
ckconfig.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
ckconfig.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
ckconfig.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
ckconfig.o: /usr/include/libio.h /usr/include/_G_config.h
ckconfig.o: /usr/include/wchar.h /usr/include/bits/wchar.h
ckconfig.o: /usr/include/xlocale.h /usr/include/bits/stdio_lim.h
ckconfig.o: /usr/include/bits/sys_errlist.h /usr/include/string.h
jcapimin.o: jinclude.h jconfig.h /usr/include/stdlib.h
jcapimin.o: /usr/include/features.h /usr/include/bits/predefs.h
jcapimin.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
jcapimin.o: /usr/include/gnu/stubs.h /usr/include/bits/waitflags.h
jcapimin.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
jcapimin.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
jcapimin.o: /usr/include/sys/types.h /usr/include/bits/types.h
jcapimin.o: /usr/include/bits/typesizes.h /usr/include/time.h
jcapimin.o: /usr/include/sys/select.h /usr/include/bits/select.h
jcapimin.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
jcapimin.o: /usr/include/sys/sysmacros.h /usr/include/alloca.h
jcapimin.o: /usr/include/stdio.h /usr/include/libio.h
jcapimin.o: /usr/include/_G_config.h /usr/include/wchar.h
jcapimin.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
jcapimin.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
jcapimin.o: /usr/include/string.h jpeglib.h jmorecfg.h jpegint.h jerror.h
jcapistd.o: jinclude.h jconfig.h /usr/include/stdlib.h
jcapistd.o: /usr/include/features.h /usr/include/bits/predefs.h
jcapistd.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
jcapistd.o: /usr/include/gnu/stubs.h /usr/include/bits/waitflags.h
jcapistd.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
jcapistd.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
jcapistd.o: /usr/include/sys/types.h /usr/include/bits/types.h
jcapistd.o: /usr/include/bits/typesizes.h /usr/include/time.h
jcapistd.o: /usr/include/sys/select.h /usr/include/bits/select.h
jcapistd.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
jcapistd.o: /usr/include/sys/sysmacros.h /usr/include/alloca.h
jcapistd.o: /usr/include/stdio.h /usr/include/libio.h
jcapistd.o: /usr/include/_G_config.h /usr/include/wchar.h
jcapistd.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
jcapistd.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
jcapistd.o: /usr/include/string.h jpeglib.h jmorecfg.h jpegint.h jerror.h
jccoefct.o: jinclude.h jconfig.h /usr/include/stdlib.h
jccoefct.o: /usr/include/features.h /usr/include/bits/predefs.h
jccoefct.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
jccoefct.o: /usr/include/gnu/stubs.h /usr/include/bits/waitflags.h
jccoefct.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
jccoefct.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
jccoefct.o: /usr/include/sys/types.h /usr/include/bits/types.h
jccoefct.o: /usr/include/bits/typesizes.h /usr/include/time.h
jccoefct.o: /usr/include/sys/select.h /usr/include/bits/select.h
jccoefct.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
jccoefct.o: /usr/include/sys/sysmacros.h /usr/include/alloca.h
jccoefct.o: /usr/include/stdio.h /usr/include/libio.h
jccoefct.o: /usr/include/_G_config.h /usr/include/wchar.h
jccoefct.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
jccoefct.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
jccoefct.o: /usr/include/string.h jpeglib.h jmorecfg.h jpegint.h jerror.h
jccolor.o: jinclude.h jconfig.h /usr/include/stdlib.h /usr/include/features.h
jccolor.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
jccolor.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
jccolor.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
jccolor.o: /usr/include/endian.h /usr/include/bits/endian.h
jccolor.o: /usr/include/bits/byteswap.h /usr/include/sys/types.h
jccolor.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
jccolor.o: /usr/include/time.h /usr/include/sys/select.h
jccolor.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
jccolor.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
jccolor.o: /usr/include/alloca.h /usr/include/stdio.h /usr/include/libio.h
jccolor.o: /usr/include/_G_config.h /usr/include/wchar.h
jccolor.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
jccolor.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
jccolor.o: /usr/include/string.h jpeglib.h jmorecfg.h jpegint.h jerror.h
jcdctmgr.o: jinclude.h jconfig.h /usr/include/stdlib.h
jcdctmgr.o: /usr/include/features.h /usr/include/bits/predefs.h
jcdctmgr.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
jcdctmgr.o: /usr/include/gnu/stubs.h /usr/include/bits/waitflags.h
jcdctmgr.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
jcdctmgr.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
jcdctmgr.o: /usr/include/sys/types.h /usr/include/bits/types.h
jcdctmgr.o: /usr/include/bits/typesizes.h /usr/include/time.h
jcdctmgr.o: /usr/include/sys/select.h /usr/include/bits/select.h
jcdctmgr.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
jcdctmgr.o: /usr/include/sys/sysmacros.h /usr/include/alloca.h
jcdctmgr.o: /usr/include/stdio.h /usr/include/libio.h
jcdctmgr.o: /usr/include/_G_config.h /usr/include/wchar.h
jcdctmgr.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
jcdctmgr.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
jcdctmgr.o: /usr/include/string.h jpeglib.h jmorecfg.h jpegint.h jerror.h
jcdctmgr.o: jdct.h
jchuff.o: jinclude.h jconfig.h /usr/include/stdlib.h /usr/include/features.h
jchuff.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
jchuff.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
jchuff.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
jchuff.o: /usr/include/endian.h /usr/include/bits/endian.h
jchuff.o: /usr/include/bits/byteswap.h /usr/include/sys/types.h
jchuff.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
jchuff.o: /usr/include/time.h /usr/include/sys/select.h
jchuff.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
jchuff.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
jchuff.o: /usr/include/alloca.h /usr/include/stdio.h /usr/include/libio.h
jchuff.o: /usr/include/_G_config.h /usr/include/wchar.h
jchuff.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
jchuff.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
jchuff.o: /usr/include/string.h jpeglib.h jmorecfg.h jpegint.h jerror.h
jchuff.o: jchuff.h
jcinit.o: jinclude.h jconfig.h /usr/include/stdlib.h /usr/include/features.h
jcinit.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
jcinit.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
jcinit.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
jcinit.o: /usr/include/endian.h /usr/include/bits/endian.h
jcinit.o: /usr/include/bits/byteswap.h /usr/include/sys/types.h
jcinit.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
jcinit.o: /usr/include/time.h /usr/include/sys/select.h
jcinit.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
jcinit.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
jcinit.o: /usr/include/alloca.h /usr/include/stdio.h /usr/include/libio.h
jcinit.o: /usr/include/_G_config.h /usr/include/wchar.h
jcinit.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
jcinit.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
jcinit.o: /usr/include/string.h jpeglib.h jmorecfg.h jpegint.h jerror.h
jcmainct.o: jinclude.h jconfig.h /usr/include/stdlib.h
jcmainct.o: /usr/include/features.h /usr/include/bits/predefs.h
jcmainct.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
jcmainct.o: /usr/include/gnu/stubs.h /usr/include/bits/waitflags.h
jcmainct.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
jcmainct.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
jcmainct.o: /usr/include/sys/types.h /usr/include/bits/types.h
jcmainct.o: /usr/include/bits/typesizes.h /usr/include/time.h
jcmainct.o: /usr/include/sys/select.h /usr/include/bits/select.h
jcmainct.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
jcmainct.o: /usr/include/sys/sysmacros.h /usr/include/alloca.h
jcmainct.o: /usr/include/stdio.h /usr/include/libio.h
jcmainct.o: /usr/include/_G_config.h /usr/include/wchar.h
jcmainct.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
jcmainct.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
jcmainct.o: /usr/include/string.h jpeglib.h jmorecfg.h jpegint.h jerror.h
jcmarker.o: jinclude.h jconfig.h /usr/include/stdlib.h
jcmarker.o: /usr/include/features.h /usr/include/bits/predefs.h
jcmarker.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
jcmarker.o: /usr/include/gnu/stubs.h /usr/include/bits/waitflags.h
jcmarker.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
jcmarker.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
jcmarker.o: /usr/include/sys/types.h /usr/include/bits/types.h
jcmarker.o: /usr/include/bits/typesizes.h /usr/include/time.h
jcmarker.o: /usr/include/sys/select.h /usr/include/bits/select.h
jcmarker.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
jcmarker.o: /usr/include/sys/sysmacros.h /usr/include/alloca.h
jcmarker.o: /usr/include/stdio.h /usr/include/libio.h
jcmarker.o: /usr/include/_G_config.h /usr/include/wchar.h
jcmarker.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
jcmarker.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
jcmarker.o: /usr/include/string.h jpeglib.h jmorecfg.h jpegint.h jerror.h
jcmaster.o: jinclude.h jconfig.h /usr/include/stdlib.h
jcmaster.o: /usr/include/features.h /usr/include/bits/predefs.h
jcmaster.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
jcmaster.o: /usr/include/gnu/stubs.h /usr/include/bits/waitflags.h
jcmaster.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
jcmaster.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
jcmaster.o: /usr/include/sys/types.h /usr/include/bits/types.h
jcmaster.o: /usr/include/bits/typesizes.h /usr/include/time.h
jcmaster.o: /usr/include/sys/select.h /usr/include/bits/select.h
jcmaster.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
jcmaster.o: /usr/include/sys/sysmacros.h /usr/include/alloca.h
jcmaster.o: /usr/include/stdio.h /usr/include/libio.h
jcmaster.o: /usr/include/_G_config.h /usr/include/wchar.h
jcmaster.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
jcmaster.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
jcmaster.o: /usr/include/string.h jpeglib.h jmorecfg.h jpegint.h jerror.h
jcomapi.o: jinclude.h jconfig.h /usr/include/stdlib.h /usr/include/features.h
jcomapi.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
jcomapi.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
jcomapi.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
jcomapi.o: /usr/include/endian.h /usr/include/bits/endian.h
jcomapi.o: /usr/include/bits/byteswap.h /usr/include/sys/types.h
jcomapi.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
jcomapi.o: /usr/include/time.h /usr/include/sys/select.h
jcomapi.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
jcomapi.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
jcomapi.o: /usr/include/alloca.h /usr/include/stdio.h /usr/include/libio.h
jcomapi.o: /usr/include/_G_config.h /usr/include/wchar.h
jcomapi.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
jcomapi.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
jcomapi.o: /usr/include/string.h jpeglib.h jmorecfg.h jpegint.h jerror.h
jcparam.o: jinclude.h jconfig.h /usr/include/stdlib.h /usr/include/features.h
jcparam.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
jcparam.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
jcparam.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
jcparam.o: /usr/include/endian.h /usr/include/bits/endian.h
jcparam.o: /usr/include/bits/byteswap.h /usr/include/sys/types.h
jcparam.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
jcparam.o: /usr/include/time.h /usr/include/sys/select.h
jcparam.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
jcparam.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
jcparam.o: /usr/include/alloca.h /usr/include/stdio.h /usr/include/libio.h
jcparam.o: /usr/include/_G_config.h /usr/include/wchar.h
jcparam.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
jcparam.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
jcparam.o: /usr/include/string.h jpeglib.h jmorecfg.h jpegint.h jerror.h
jcphuff.o: jinclude.h jconfig.h /usr/include/stdlib.h /usr/include/features.h
jcphuff.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
jcphuff.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
jcphuff.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
jcphuff.o: /usr/include/endian.h /usr/include/bits/endian.h
jcphuff.o: /usr/include/bits/byteswap.h /usr/include/sys/types.h
jcphuff.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
jcphuff.o: /usr/include/time.h /usr/include/sys/select.h
jcphuff.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
jcphuff.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
jcphuff.o: /usr/include/alloca.h /usr/include/stdio.h /usr/include/libio.h
jcphuff.o: /usr/include/_G_config.h /usr/include/wchar.h
jcphuff.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
jcphuff.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
jcphuff.o: /usr/include/string.h jpeglib.h jmorecfg.h jpegint.h jerror.h
jcphuff.o: jchuff.h
jcprepct.o: jinclude.h jconfig.h /usr/include/stdlib.h
jcprepct.o: /usr/include/features.h /usr/include/bits/predefs.h
jcprepct.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
jcprepct.o: /usr/include/gnu/stubs.h /usr/include/bits/waitflags.h
jcprepct.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
jcprepct.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
jcprepct.o: /usr/include/sys/types.h /usr/include/bits/types.h
jcprepct.o: /usr/include/bits/typesizes.h /usr/include/time.h
jcprepct.o: /usr/include/sys/select.h /usr/include/bits/select.h
jcprepct.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
jcprepct.o: /usr/include/sys/sysmacros.h /usr/include/alloca.h
jcprepct.o: /usr/include/stdio.h /usr/include/libio.h
jcprepct.o: /usr/include/_G_config.h /usr/include/wchar.h
jcprepct.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
jcprepct.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
jcprepct.o: /usr/include/string.h jpeglib.h jmorecfg.h jpegint.h jerror.h
jcsample.o: jinclude.h jconfig.h /usr/include/stdlib.h
jcsample.o: /usr/include/features.h /usr/include/bits/predefs.h
jcsample.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
jcsample.o: /usr/include/gnu/stubs.h /usr/include/bits/waitflags.h
jcsample.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
jcsample.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
jcsample.o: /usr/include/sys/types.h /usr/include/bits/types.h
jcsample.o: /usr/include/bits/typesizes.h /usr/include/time.h
jcsample.o: /usr/include/sys/select.h /usr/include/bits/select.h
jcsample.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
jcsample.o: /usr/include/sys/sysmacros.h /usr/include/alloca.h
jcsample.o: /usr/include/stdio.h /usr/include/libio.h
jcsample.o: /usr/include/_G_config.h /usr/include/wchar.h
jcsample.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
jcsample.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
jcsample.o: /usr/include/string.h jpeglib.h jmorecfg.h jpegint.h jerror.h
jctrans.o: jinclude.h jconfig.h /usr/include/stdlib.h /usr/include/features.h
jctrans.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
jctrans.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
jctrans.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
jctrans.o: /usr/include/endian.h /usr/include/bits/endian.h
jctrans.o: /usr/include/bits/byteswap.h /usr/include/sys/types.h
jctrans.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
jctrans.o: /usr/include/time.h /usr/include/sys/select.h
jctrans.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
jctrans.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
jctrans.o: /usr/include/alloca.h /usr/include/stdio.h /usr/include/libio.h
jctrans.o: /usr/include/_G_config.h /usr/include/wchar.h
jctrans.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
jctrans.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
jctrans.o: /usr/include/string.h jpeglib.h jmorecfg.h jpegint.h jerror.h
jdapimin.o: jinclude.h jconfig.h /usr/include/stdlib.h
jdapimin.o: /usr/include/features.h /usr/include/bits/predefs.h
jdapimin.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
jdapimin.o: /usr/include/gnu/stubs.h /usr/include/bits/waitflags.h
jdapimin.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
jdapimin.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
jdapimin.o: /usr/include/sys/types.h /usr/include/bits/types.h
jdapimin.o: /usr/include/bits/typesizes.h /usr/include/time.h
jdapimin.o: /usr/include/sys/select.h /usr/include/bits/select.h
jdapimin.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
jdapimin.o: /usr/include/sys/sysmacros.h /usr/include/alloca.h
jdapimin.o: /usr/include/stdio.h /usr/include/libio.h
jdapimin.o: /usr/include/_G_config.h /usr/include/wchar.h
jdapimin.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
jdapimin.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
jdapimin.o: /usr/include/string.h jpeglib.h jmorecfg.h jpegint.h jerror.h
jdapistd.o: jinclude.h jconfig.h /usr/include/stdlib.h
jdapistd.o: /usr/include/features.h /usr/include/bits/predefs.h
jdapistd.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
jdapistd.o: /usr/include/gnu/stubs.h /usr/include/bits/waitflags.h
jdapistd.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
jdapistd.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
jdapistd.o: /usr/include/sys/types.h /usr/include/bits/types.h
jdapistd.o: /usr/include/bits/typesizes.h /usr/include/time.h
jdapistd.o: /usr/include/sys/select.h /usr/include/bits/select.h
jdapistd.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
jdapistd.o: /usr/include/sys/sysmacros.h /usr/include/alloca.h
jdapistd.o: /usr/include/stdio.h /usr/include/libio.h
jdapistd.o: /usr/include/_G_config.h /usr/include/wchar.h
jdapistd.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
jdapistd.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
jdapistd.o: /usr/include/string.h jpeglib.h jmorecfg.h jpegint.h jerror.h
jdatadst.o: jinclude.h jconfig.h /usr/include/stdlib.h
jdatadst.o: /usr/include/features.h /usr/include/bits/predefs.h
jdatadst.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
jdatadst.o: /usr/include/gnu/stubs.h /usr/include/bits/waitflags.h
jdatadst.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
jdatadst.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
jdatadst.o: /usr/include/sys/types.h /usr/include/bits/types.h
jdatadst.o: /usr/include/bits/typesizes.h /usr/include/time.h
jdatadst.o: /usr/include/sys/select.h /usr/include/bits/select.h
jdatadst.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
jdatadst.o: /usr/include/sys/sysmacros.h /usr/include/alloca.h
jdatadst.o: /usr/include/stdio.h /usr/include/libio.h
jdatadst.o: /usr/include/_G_config.h /usr/include/wchar.h
jdatadst.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
jdatadst.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
jdatadst.o: /usr/include/string.h jpeglib.h jmorecfg.h jpegint.h jerror.h
jdatasrc.o: jinclude.h jconfig.h /usr/include/stdlib.h
jdatasrc.o: /usr/include/features.h /usr/include/bits/predefs.h
jdatasrc.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
jdatasrc.o: /usr/include/gnu/stubs.h /usr/include/bits/waitflags.h
jdatasrc.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
jdatasrc.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
jdatasrc.o: /usr/include/sys/types.h /usr/include/bits/types.h
jdatasrc.o: /usr/include/bits/typesizes.h /usr/include/time.h
jdatasrc.o: /usr/include/sys/select.h /usr/include/bits/select.h
jdatasrc.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
jdatasrc.o: /usr/include/sys/sysmacros.h /usr/include/alloca.h
jdatasrc.o: /usr/include/stdio.h /usr/include/libio.h
jdatasrc.o: /usr/include/_G_config.h /usr/include/wchar.h
jdatasrc.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
jdatasrc.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
jdatasrc.o: /usr/include/string.h jpeglib.h jmorecfg.h jpegint.h jerror.h
jdcoefct.o: jinclude.h jconfig.h /usr/include/stdlib.h
jdcoefct.o: /usr/include/features.h /usr/include/bits/predefs.h
jdcoefct.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
jdcoefct.o: /usr/include/gnu/stubs.h /usr/include/bits/waitflags.h
jdcoefct.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
jdcoefct.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
jdcoefct.o: /usr/include/sys/types.h /usr/include/bits/types.h
jdcoefct.o: /usr/include/bits/typesizes.h /usr/include/time.h
jdcoefct.o: /usr/include/sys/select.h /usr/include/bits/select.h
jdcoefct.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
jdcoefct.o: /usr/include/sys/sysmacros.h /usr/include/alloca.h
jdcoefct.o: /usr/include/stdio.h /usr/include/libio.h
jdcoefct.o: /usr/include/_G_config.h /usr/include/wchar.h
jdcoefct.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
jdcoefct.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
jdcoefct.o: /usr/include/string.h jpeglib.h jmorecfg.h jpegint.h jerror.h
jdcolor.o: jinclude.h jconfig.h /usr/include/stdlib.h /usr/include/features.h
jdcolor.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
jdcolor.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
jdcolor.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
jdcolor.o: /usr/include/endian.h /usr/include/bits/endian.h
jdcolor.o: /usr/include/bits/byteswap.h /usr/include/sys/types.h
jdcolor.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
jdcolor.o: /usr/include/time.h /usr/include/sys/select.h
jdcolor.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
jdcolor.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
jdcolor.o: /usr/include/alloca.h /usr/include/stdio.h /usr/include/libio.h
jdcolor.o: /usr/include/_G_config.h /usr/include/wchar.h
jdcolor.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
jdcolor.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
jdcolor.o: /usr/include/string.h jpeglib.h jmorecfg.h jpegint.h jerror.h
jddctmgr.o: jinclude.h jconfig.h /usr/include/stdlib.h
jddctmgr.o: /usr/include/features.h /usr/include/bits/predefs.h
jddctmgr.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
jddctmgr.o: /usr/include/gnu/stubs.h /usr/include/bits/waitflags.h
jddctmgr.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
jddctmgr.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
jddctmgr.o: /usr/include/sys/types.h /usr/include/bits/types.h
jddctmgr.o: /usr/include/bits/typesizes.h /usr/include/time.h
jddctmgr.o: /usr/include/sys/select.h /usr/include/bits/select.h
jddctmgr.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
jddctmgr.o: /usr/include/sys/sysmacros.h /usr/include/alloca.h
jddctmgr.o: /usr/include/stdio.h /usr/include/libio.h
jddctmgr.o: /usr/include/_G_config.h /usr/include/wchar.h
jddctmgr.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
jddctmgr.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
jddctmgr.o: /usr/include/string.h jpeglib.h jmorecfg.h jpegint.h jerror.h
jddctmgr.o: jdct.h
jdhuff.o: jinclude.h jconfig.h /usr/include/stdlib.h /usr/include/features.h
jdhuff.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
jdhuff.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
jdhuff.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
jdhuff.o: /usr/include/endian.h /usr/include/bits/endian.h
jdhuff.o: /usr/include/bits/byteswap.h /usr/include/sys/types.h
jdhuff.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
jdhuff.o: /usr/include/time.h /usr/include/sys/select.h
jdhuff.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
jdhuff.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
jdhuff.o: /usr/include/alloca.h /usr/include/stdio.h /usr/include/libio.h
jdhuff.o: /usr/include/_G_config.h /usr/include/wchar.h
jdhuff.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
jdhuff.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
jdhuff.o: /usr/include/string.h jpeglib.h jmorecfg.h jpegint.h jerror.h
jdhuff.o: jdhuff.h
jdinput.o: jinclude.h jconfig.h /usr/include/stdlib.h /usr/include/features.h
jdinput.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
jdinput.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
jdinput.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
jdinput.o: /usr/include/endian.h /usr/include/bits/endian.h
jdinput.o: /usr/include/bits/byteswap.h /usr/include/sys/types.h
jdinput.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
jdinput.o: /usr/include/time.h /usr/include/sys/select.h
jdinput.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
jdinput.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
jdinput.o: /usr/include/alloca.h /usr/include/stdio.h /usr/include/libio.h
jdinput.o: /usr/include/_G_config.h /usr/include/wchar.h
jdinput.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
jdinput.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
jdinput.o: /usr/include/string.h jpeglib.h jmorecfg.h jpegint.h jerror.h
jdmainct.o: jinclude.h jconfig.h /usr/include/stdlib.h
jdmainct.o: /usr/include/features.h /usr/include/bits/predefs.h
jdmainct.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
jdmainct.o: /usr/include/gnu/stubs.h /usr/include/bits/waitflags.h
jdmainct.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
jdmainct.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
jdmainct.o: /usr/include/sys/types.h /usr/include/bits/types.h
jdmainct.o: /usr/include/bits/typesizes.h /usr/include/time.h
jdmainct.o: /usr/include/sys/select.h /usr/include/bits/select.h
jdmainct.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
jdmainct.o: /usr/include/sys/sysmacros.h /usr/include/alloca.h
jdmainct.o: /usr/include/stdio.h /usr/include/libio.h
jdmainct.o: /usr/include/_G_config.h /usr/include/wchar.h
jdmainct.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
jdmainct.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
jdmainct.o: /usr/include/string.h jpeglib.h jmorecfg.h jpegint.h jerror.h
jdmarker.o: jinclude.h jconfig.h /usr/include/stdlib.h
jdmarker.o: /usr/include/features.h /usr/include/bits/predefs.h
jdmarker.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
jdmarker.o: /usr/include/gnu/stubs.h /usr/include/bits/waitflags.h
jdmarker.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
jdmarker.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
jdmarker.o: /usr/include/sys/types.h /usr/include/bits/types.h
jdmarker.o: /usr/include/bits/typesizes.h /usr/include/time.h
jdmarker.o: /usr/include/sys/select.h /usr/include/bits/select.h
jdmarker.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
jdmarker.o: /usr/include/sys/sysmacros.h /usr/include/alloca.h
jdmarker.o: /usr/include/stdio.h /usr/include/libio.h
jdmarker.o: /usr/include/_G_config.h /usr/include/wchar.h
jdmarker.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
jdmarker.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
jdmarker.o: /usr/include/string.h jpeglib.h jmorecfg.h jpegint.h jerror.h
jdmaster.o: jinclude.h jconfig.h /usr/include/stdlib.h
jdmaster.o: /usr/include/features.h /usr/include/bits/predefs.h
jdmaster.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
jdmaster.o: /usr/include/gnu/stubs.h /usr/include/bits/waitflags.h
jdmaster.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
jdmaster.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
jdmaster.o: /usr/include/sys/types.h /usr/include/bits/types.h
jdmaster.o: /usr/include/bits/typesizes.h /usr/include/time.h
jdmaster.o: /usr/include/sys/select.h /usr/include/bits/select.h
jdmaster.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
jdmaster.o: /usr/include/sys/sysmacros.h /usr/include/alloca.h
jdmaster.o: /usr/include/stdio.h /usr/include/libio.h
jdmaster.o: /usr/include/_G_config.h /usr/include/wchar.h
jdmaster.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
jdmaster.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
jdmaster.o: /usr/include/string.h jpeglib.h jmorecfg.h jpegint.h jerror.h
jdmerge.o: jinclude.h jconfig.h /usr/include/stdlib.h /usr/include/features.h
jdmerge.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
jdmerge.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
jdmerge.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
jdmerge.o: /usr/include/endian.h /usr/include/bits/endian.h
jdmerge.o: /usr/include/bits/byteswap.h /usr/include/sys/types.h
jdmerge.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
jdmerge.o: /usr/include/time.h /usr/include/sys/select.h
jdmerge.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
jdmerge.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
jdmerge.o: /usr/include/alloca.h /usr/include/stdio.h /usr/include/libio.h
jdmerge.o: /usr/include/_G_config.h /usr/include/wchar.h
jdmerge.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
jdmerge.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
jdmerge.o: /usr/include/string.h jpeglib.h jmorecfg.h jpegint.h jerror.h
jdphuff.o: jinclude.h jconfig.h /usr/include/stdlib.h /usr/include/features.h
jdphuff.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
jdphuff.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
jdphuff.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
jdphuff.o: /usr/include/endian.h /usr/include/bits/endian.h
jdphuff.o: /usr/include/bits/byteswap.h /usr/include/sys/types.h
jdphuff.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
jdphuff.o: /usr/include/time.h /usr/include/sys/select.h
jdphuff.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
jdphuff.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
jdphuff.o: /usr/include/alloca.h /usr/include/stdio.h /usr/include/libio.h
jdphuff.o: /usr/include/_G_config.h /usr/include/wchar.h
jdphuff.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
jdphuff.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
jdphuff.o: /usr/include/string.h jpeglib.h jmorecfg.h jpegint.h jerror.h
jdphuff.o: jdhuff.h
jdpostct.o: jinclude.h jconfig.h /usr/include/stdlib.h
jdpostct.o: /usr/include/features.h /usr/include/bits/predefs.h
jdpostct.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
jdpostct.o: /usr/include/gnu/stubs.h /usr/include/bits/waitflags.h
jdpostct.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
jdpostct.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
jdpostct.o: /usr/include/sys/types.h /usr/include/bits/types.h
jdpostct.o: /usr/include/bits/typesizes.h /usr/include/time.h
jdpostct.o: /usr/include/sys/select.h /usr/include/bits/select.h
jdpostct.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
jdpostct.o: /usr/include/sys/sysmacros.h /usr/include/alloca.h
jdpostct.o: /usr/include/stdio.h /usr/include/libio.h
jdpostct.o: /usr/include/_G_config.h /usr/include/wchar.h
jdpostct.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
jdpostct.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
jdpostct.o: /usr/include/string.h jpeglib.h jmorecfg.h jpegint.h jerror.h
jdsample.o: jinclude.h jconfig.h /usr/include/stdlib.h
jdsample.o: /usr/include/features.h /usr/include/bits/predefs.h
jdsample.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
jdsample.o: /usr/include/gnu/stubs.h /usr/include/bits/waitflags.h
jdsample.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
jdsample.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
jdsample.o: /usr/include/sys/types.h /usr/include/bits/types.h
jdsample.o: /usr/include/bits/typesizes.h /usr/include/time.h
jdsample.o: /usr/include/sys/select.h /usr/include/bits/select.h
jdsample.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
jdsample.o: /usr/include/sys/sysmacros.h /usr/include/alloca.h
jdsample.o: /usr/include/stdio.h /usr/include/libio.h
jdsample.o: /usr/include/_G_config.h /usr/include/wchar.h
jdsample.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
jdsample.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
jdsample.o: /usr/include/string.h jpeglib.h jmorecfg.h jpegint.h jerror.h
jdtrans.o: jinclude.h jconfig.h /usr/include/stdlib.h /usr/include/features.h
jdtrans.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
jdtrans.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
jdtrans.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
jdtrans.o: /usr/include/endian.h /usr/include/bits/endian.h
jdtrans.o: /usr/include/bits/byteswap.h /usr/include/sys/types.h
jdtrans.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
jdtrans.o: /usr/include/time.h /usr/include/sys/select.h
jdtrans.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
jdtrans.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
jdtrans.o: /usr/include/alloca.h /usr/include/stdio.h /usr/include/libio.h
jdtrans.o: /usr/include/_G_config.h /usr/include/wchar.h
jdtrans.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
jdtrans.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
jdtrans.o: /usr/include/string.h jpeglib.h jmorecfg.h jpegint.h jerror.h
jerror.o: jinclude.h jconfig.h /usr/include/stdlib.h /usr/include/features.h
jerror.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
jerror.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
jerror.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
jerror.o: /usr/include/endian.h /usr/include/bits/endian.h
jerror.o: /usr/include/bits/byteswap.h /usr/include/sys/types.h
jerror.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
jerror.o: /usr/include/time.h /usr/include/sys/select.h
jerror.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
jerror.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
jerror.o: /usr/include/alloca.h /usr/include/stdio.h /usr/include/libio.h
jerror.o: /usr/include/_G_config.h /usr/include/wchar.h
jerror.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
jerror.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
jerror.o: /usr/include/string.h jpeglib.h jmorecfg.h jpegint.h jerror.h
jerror.o: jversion.h
jfdctflt.o: jinclude.h jconfig.h /usr/include/stdlib.h
jfdctflt.o: /usr/include/features.h /usr/include/bits/predefs.h
jfdctflt.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
jfdctflt.o: /usr/include/gnu/stubs.h /usr/include/bits/waitflags.h
jfdctflt.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
jfdctflt.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
jfdctflt.o: /usr/include/sys/types.h /usr/include/bits/types.h
jfdctflt.o: /usr/include/bits/typesizes.h /usr/include/time.h
jfdctflt.o: /usr/include/sys/select.h /usr/include/bits/select.h
jfdctflt.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
jfdctflt.o: /usr/include/sys/sysmacros.h /usr/include/alloca.h
jfdctflt.o: /usr/include/stdio.h /usr/include/libio.h
jfdctflt.o: /usr/include/_G_config.h /usr/include/wchar.h
jfdctflt.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
jfdctflt.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
jfdctflt.o: /usr/include/string.h jpeglib.h jmorecfg.h jpegint.h jerror.h
jfdctflt.o: jdct.h
jfdctfst.o: jinclude.h jconfig.h /usr/include/stdlib.h
jfdctfst.o: /usr/include/features.h /usr/include/bits/predefs.h
jfdctfst.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
jfdctfst.o: /usr/include/gnu/stubs.h /usr/include/bits/waitflags.h
jfdctfst.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
jfdctfst.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
jfdctfst.o: /usr/include/sys/types.h /usr/include/bits/types.h
jfdctfst.o: /usr/include/bits/typesizes.h /usr/include/time.h
jfdctfst.o: /usr/include/sys/select.h /usr/include/bits/select.h
jfdctfst.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
jfdctfst.o: /usr/include/sys/sysmacros.h /usr/include/alloca.h
jfdctfst.o: /usr/include/stdio.h /usr/include/libio.h
jfdctfst.o: /usr/include/_G_config.h /usr/include/wchar.h
jfdctfst.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
jfdctfst.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
jfdctfst.o: /usr/include/string.h jpeglib.h jmorecfg.h jpegint.h jerror.h
jfdctfst.o: jdct.h
jfdctint.o: jinclude.h jconfig.h /usr/include/stdlib.h
jfdctint.o: /usr/include/features.h /usr/include/bits/predefs.h
jfdctint.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
jfdctint.o: /usr/include/gnu/stubs.h /usr/include/bits/waitflags.h
jfdctint.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
jfdctint.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
jfdctint.o: /usr/include/sys/types.h /usr/include/bits/types.h
jfdctint.o: /usr/include/bits/typesizes.h /usr/include/time.h
jfdctint.o: /usr/include/sys/select.h /usr/include/bits/select.h
jfdctint.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
jfdctint.o: /usr/include/sys/sysmacros.h /usr/include/alloca.h
jfdctint.o: /usr/include/stdio.h /usr/include/libio.h
jfdctint.o: /usr/include/_G_config.h /usr/include/wchar.h
jfdctint.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
jfdctint.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
jfdctint.o: /usr/include/string.h jpeglib.h jmorecfg.h jpegint.h jerror.h
jfdctint.o: jdct.h
jidctflt.o: jinclude.h jconfig.h /usr/include/stdlib.h
jidctflt.o: /usr/include/features.h /usr/include/bits/predefs.h
jidctflt.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
jidctflt.o: /usr/include/gnu/stubs.h /usr/include/bits/waitflags.h
jidctflt.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
jidctflt.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
jidctflt.o: /usr/include/sys/types.h /usr/include/bits/types.h
jidctflt.o: /usr/include/bits/typesizes.h /usr/include/time.h
jidctflt.o: /usr/include/sys/select.h /usr/include/bits/select.h
jidctflt.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
jidctflt.o: /usr/include/sys/sysmacros.h /usr/include/alloca.h
jidctflt.o: /usr/include/stdio.h /usr/include/libio.h
jidctflt.o: /usr/include/_G_config.h /usr/include/wchar.h
jidctflt.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
jidctflt.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
jidctflt.o: /usr/include/string.h jpeglib.h jmorecfg.h jpegint.h jerror.h
jidctflt.o: jdct.h
jidctfst.o: jinclude.h jconfig.h /usr/include/stdlib.h
jidctfst.o: /usr/include/features.h /usr/include/bits/predefs.h
jidctfst.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
jidctfst.o: /usr/include/gnu/stubs.h /usr/include/bits/waitflags.h
jidctfst.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
jidctfst.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
jidctfst.o: /usr/include/sys/types.h /usr/include/bits/types.h
jidctfst.o: /usr/include/bits/typesizes.h /usr/include/time.h
jidctfst.o: /usr/include/sys/select.h /usr/include/bits/select.h
jidctfst.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
jidctfst.o: /usr/include/sys/sysmacros.h /usr/include/alloca.h
jidctfst.o: /usr/include/stdio.h /usr/include/libio.h
jidctfst.o: /usr/include/_G_config.h /usr/include/wchar.h
jidctfst.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
jidctfst.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
jidctfst.o: /usr/include/string.h jpeglib.h jmorecfg.h jpegint.h jerror.h
jidctfst.o: jdct.h
jidctint.o: jinclude.h jconfig.h /usr/include/stdlib.h
jidctint.o: /usr/include/features.h /usr/include/bits/predefs.h
jidctint.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
jidctint.o: /usr/include/gnu/stubs.h /usr/include/bits/waitflags.h
jidctint.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
jidctint.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
jidctint.o: /usr/include/sys/types.h /usr/include/bits/types.h
jidctint.o: /usr/include/bits/typesizes.h /usr/include/time.h
jidctint.o: /usr/include/sys/select.h /usr/include/bits/select.h
jidctint.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
jidctint.o: /usr/include/sys/sysmacros.h /usr/include/alloca.h
jidctint.o: /usr/include/stdio.h /usr/include/libio.h
jidctint.o: /usr/include/_G_config.h /usr/include/wchar.h
jidctint.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
jidctint.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
jidctint.o: /usr/include/string.h jpeglib.h jmorecfg.h jpegint.h jerror.h
jidctint.o: jdct.h
jidctred.o: jinclude.h jconfig.h /usr/include/stdlib.h
jidctred.o: /usr/include/features.h /usr/include/bits/predefs.h
jidctred.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
jidctred.o: /usr/include/gnu/stubs.h /usr/include/bits/waitflags.h
jidctred.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
jidctred.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
jidctred.o: /usr/include/sys/types.h /usr/include/bits/types.h
jidctred.o: /usr/include/bits/typesizes.h /usr/include/time.h
jidctred.o: /usr/include/sys/select.h /usr/include/bits/select.h
jidctred.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
jidctred.o: /usr/include/sys/sysmacros.h /usr/include/alloca.h
jidctred.o: /usr/include/stdio.h /usr/include/libio.h
jidctred.o: /usr/include/_G_config.h /usr/include/wchar.h
jidctred.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
jidctred.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
jidctred.o: /usr/include/string.h jpeglib.h jmorecfg.h jpegint.h jerror.h
jidctred.o: jdct.h
jmemmgr.o: jinclude.h jconfig.h /usr/include/stdlib.h /usr/include/features.h
jmemmgr.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
jmemmgr.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
jmemmgr.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
jmemmgr.o: /usr/include/endian.h /usr/include/bits/endian.h
jmemmgr.o: /usr/include/bits/byteswap.h /usr/include/sys/types.h
jmemmgr.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
jmemmgr.o: /usr/include/time.h /usr/include/sys/select.h
jmemmgr.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
jmemmgr.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
jmemmgr.o: /usr/include/alloca.h /usr/include/stdio.h /usr/include/libio.h
jmemmgr.o: /usr/include/_G_config.h /usr/include/wchar.h
jmemmgr.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
jmemmgr.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
jmemmgr.o: /usr/include/string.h jpeglib.h jmorecfg.h jpegint.h jerror.h
jmemmgr.o: jmemsys.h
jmemnobs.o: jinclude.h jconfig.h /usr/include/stdlib.h
jmemnobs.o: /usr/include/features.h /usr/include/bits/predefs.h
jmemnobs.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
jmemnobs.o: /usr/include/gnu/stubs.h /usr/include/bits/waitflags.h
jmemnobs.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
jmemnobs.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
jmemnobs.o: /usr/include/sys/types.h /usr/include/bits/types.h
jmemnobs.o: /usr/include/bits/typesizes.h /usr/include/time.h
jmemnobs.o: /usr/include/sys/select.h /usr/include/bits/select.h
jmemnobs.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
jmemnobs.o: /usr/include/sys/sysmacros.h /usr/include/alloca.h
jmemnobs.o: /usr/include/stdio.h /usr/include/libio.h
jmemnobs.o: /usr/include/_G_config.h /usr/include/wchar.h
jmemnobs.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
jmemnobs.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
jmemnobs.o: /usr/include/string.h jpeglib.h jmorecfg.h jpegint.h jerror.h
jmemnobs.o: jmemsys.h
jquant1.o: jinclude.h jconfig.h /usr/include/stdlib.h /usr/include/features.h
jquant1.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
jquant1.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
jquant1.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
jquant1.o: /usr/include/endian.h /usr/include/bits/endian.h
jquant1.o: /usr/include/bits/byteswap.h /usr/include/sys/types.h
jquant1.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
jquant1.o: /usr/include/time.h /usr/include/sys/select.h
jquant1.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
jquant1.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
jquant1.o: /usr/include/alloca.h /usr/include/stdio.h /usr/include/libio.h
jquant1.o: /usr/include/_G_config.h /usr/include/wchar.h
jquant1.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
jquant1.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
jquant1.o: /usr/include/string.h jpeglib.h jmorecfg.h jpegint.h jerror.h
jquant2.o: jinclude.h jconfig.h /usr/include/stdlib.h /usr/include/features.h
jquant2.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
jquant2.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
jquant2.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
jquant2.o: /usr/include/endian.h /usr/include/bits/endian.h
jquant2.o: /usr/include/bits/byteswap.h /usr/include/sys/types.h
jquant2.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
jquant2.o: /usr/include/time.h /usr/include/sys/select.h
jquant2.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
jquant2.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
jquant2.o: /usr/include/alloca.h /usr/include/stdio.h /usr/include/libio.h
jquant2.o: /usr/include/_G_config.h /usr/include/wchar.h
jquant2.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
jquant2.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
jquant2.o: /usr/include/string.h jpeglib.h jmorecfg.h jpegint.h jerror.h
jutils.o: jinclude.h jconfig.h /usr/include/stdlib.h /usr/include/features.h
jutils.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
jutils.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
jutils.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
jutils.o: /usr/include/endian.h /usr/include/bits/endian.h
jutils.o: /usr/include/bits/byteswap.h /usr/include/sys/types.h
jutils.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
jutils.o: /usr/include/time.h /usr/include/sys/select.h
jutils.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
jutils.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
jutils.o: /usr/include/alloca.h /usr/include/stdio.h /usr/include/libio.h
jutils.o: /usr/include/_G_config.h /usr/include/wchar.h
jutils.o: /usr/include/bits/wchar.h /usr/include/xlocale.h
jutils.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
jutils.o: /usr/include/string.h jpeglib.h jmorecfg.h jpegint.h jerror.h
