TARGET  = Assignment3
SRCS	= 	Util/time \
		Util/cmdLineParser \
		Util/geometry \
		Util/geometry.todo \
		Image/bmp \
		Image/image \
		Image/image.todo \
		Image/jpeg \
		Image/lineSegments \
		Image/lineSegments.todo \
		Ray/mouse \
		Ray/rayBox \
		Ray/rayBox.todo \
		Ray/rayCamera \
		Ray/rayCamera.todo \
		Ray/rayCone \
		Ray/rayCone.todo \
		Ray/rayCylinder \
		Ray/rayCylinder.todo \
		Ray/rayDirectionalLight \
		Ray/rayDirectionalLight.todo \
		Ray/rayFileInstance \
		Ray/rayGroup \
		Ray/rayGroup.todo \
		Ray/rayKey \
		Ray/rayPointLight \
		Ray/rayPointLight.todo \
		Ray/rayScene \
		Ray/rayScene.todo \
		Ray/raySphere \
		Ray/raySphere.todo \
		Ray/raySpotLight \
		Ray/raySpotLight.todo \
		Ray/rayTriangle \
		Ray/rayTriangle.todo \
		Ray/rayWindow \
		main

CC   = g++
CFLAGS		+= -I.
LFLAGS		+= -LJPEG -lJPEG -lglut -lGLU -lGL

OBJECTS		= ${addsuffix .o, ${SRCS}}
CLEAN		= *.o .depend ${TARGET} *.dsp *.dsw *.bak

#############################################################
all: debug

debug: CFLAGS += -DDEBUG -g3
debug: ${TARGET}

release: CFLAGS += -O2 -DRELEASE -pipe -fomit-frame-pointer
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

Util/time.o: /usr/include/stdlib.h /usr/include/features.h
Util/time.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
Util/time.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
Util/time.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
Util/time.o: /usr/include/endian.h /usr/include/bits/endian.h
Util/time.o: /usr/include/bits/byteswap.h /usr/include/sys/types.h
Util/time.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
Util/time.o: /usr/include/time.h /usr/include/sys/select.h
Util/time.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
Util/time.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
Util/time.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
Util/time.o: /usr/include/sys/timeb.h /usr/include/sys/time.h
Util/cmdLineParser.o: /usr/include/stdio.h /usr/include/features.h
Util/cmdLineParser.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
Util/cmdLineParser.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
Util/cmdLineParser.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
Util/cmdLineParser.o: /usr/include/libio.h /usr/include/_G_config.h
Util/cmdLineParser.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
Util/cmdLineParser.o: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
Util/cmdLineParser.o: /usr/include/bits/waitflags.h
Util/cmdLineParser.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
Util/cmdLineParser.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
Util/cmdLineParser.o: /usr/include/sys/types.h /usr/include/time.h
Util/cmdLineParser.o: /usr/include/sys/select.h /usr/include/bits/select.h
Util/cmdLineParser.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
Util/cmdLineParser.o: /usr/include/sys/sysmacros.h
Util/cmdLineParser.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
Util/cmdLineParser.o: /usr/include/string.h /usr/include/xlocale.h
Util/cmdLineParser.o: /usr/include/assert.h Util/cmdLineParser.h
Util/geometry.o: /usr/include/stdlib.h /usr/include/features.h
Util/geometry.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
Util/geometry.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
Util/geometry.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
Util/geometry.o: /usr/include/endian.h /usr/include/bits/endian.h
Util/geometry.o: /usr/include/bits/byteswap.h /usr/include/sys/types.h
Util/geometry.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
Util/geometry.o: /usr/include/time.h /usr/include/sys/select.h
Util/geometry.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
Util/geometry.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
Util/geometry.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
Util/geometry.o: /usr/include/math.h /usr/include/bits/huge_val.h
Util/geometry.o: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
Util/geometry.o: /usr/include/bits/inf.h /usr/include/bits/nan.h
Util/geometry.o: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
Util/geometry.o: ./SVD/SVDFit.h ./SVD/MatrixMNTC.h ./SVD/comdef.h
Util/geometry.o: ./SVD/MatrixMNTC.inl ./SVD/SVD.h ./SVD/SVD.inl
Util/geometry.o: /usr/include/stdio.h /usr/include/libio.h
Util/geometry.o: /usr/include/_G_config.h /usr/include/wchar.h
Util/geometry.o: /usr/include/bits/stdio_lim.h
Util/geometry.o: /usr/include/bits/sys_errlist.h /usr/include/memory.h
Util/geometry.o: /usr/include/string.h /usr/include/xlocale.h
Util/geometry.o: /usr/include/malloc.h ./SVD/SVDFit.inl ./SVD/MatrixMNTC.h
Util/geometry.o: Util/geometry.h
Util/geometry.todo.o: /usr/include/stdlib.h /usr/include/features.h
Util/geometry.todo.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
Util/geometry.todo.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
Util/geometry.todo.o: /usr/include/bits/waitflags.h
Util/geometry.todo.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
Util/geometry.todo.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
Util/geometry.todo.o: /usr/include/sys/types.h /usr/include/bits/types.h
Util/geometry.todo.o: /usr/include/bits/typesizes.h /usr/include/time.h
Util/geometry.todo.o: /usr/include/sys/select.h /usr/include/bits/select.h
Util/geometry.todo.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
Util/geometry.todo.o: /usr/include/sys/sysmacros.h
Util/geometry.todo.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
Util/geometry.todo.o: /usr/include/math.h /usr/include/bits/huge_val.h
Util/geometry.todo.o: /usr/include/bits/huge_valf.h
Util/geometry.todo.o: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
Util/geometry.todo.o: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
Util/geometry.todo.o: /usr/include/bits/mathcalls.h ./SVD/SVDFit.h
Util/geometry.todo.o: ./SVD/MatrixMNTC.h ./SVD/comdef.h ./SVD/MatrixMNTC.inl
Util/geometry.todo.o: ./SVD/SVD.h ./SVD/SVD.inl /usr/include/stdio.h
Util/geometry.todo.o: /usr/include/libio.h /usr/include/_G_config.h
Util/geometry.todo.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
Util/geometry.todo.o: /usr/include/bits/sys_errlist.h /usr/include/memory.h
Util/geometry.todo.o: /usr/include/string.h /usr/include/xlocale.h
Util/geometry.todo.o: /usr/include/malloc.h ./SVD/SVDFit.inl
Util/geometry.todo.o: ./SVD/MatrixMNTC.h Util/geometry.h
Image/bmp.o: Image/bmp.h Image/image.h /usr/include/stdio.h
Image/bmp.o: /usr/include/features.h /usr/include/bits/predefs.h
Image/bmp.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
Image/bmp.o: /usr/include/gnu/stubs.h /usr/include/bits/types.h
Image/bmp.o: /usr/include/bits/typesizes.h /usr/include/libio.h
Image/bmp.o: /usr/include/_G_config.h /usr/include/wchar.h
Image/bmp.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
Image/bmp.o: Image/lineSegments.h /usr/include/stdlib.h
Image/bmp.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
Image/bmp.o: /usr/include/endian.h /usr/include/bits/endian.h
Image/bmp.o: /usr/include/bits/byteswap.h /usr/include/sys/types.h
Image/bmp.o: /usr/include/time.h /usr/include/sys/select.h
Image/bmp.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
Image/bmp.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
Image/bmp.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
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
Image/image.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
Image/image.o: Image/image.h /usr/include/stdio.h /usr/include/libio.h
Image/image.o: /usr/include/_G_config.h /usr/include/wchar.h
Image/image.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
Image/image.o: Image/lineSegments.h ./Util/cmdLineParser.h ./Image/bmp.h
Image/image.o: ./Image/jpeg.h
Image/image.todo.o: Image/image.h /usr/include/stdio.h
Image/image.todo.o: /usr/include/features.h /usr/include/bits/predefs.h
Image/image.todo.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
Image/image.todo.o: /usr/include/gnu/stubs.h /usr/include/bits/types.h
Image/image.todo.o: /usr/include/bits/typesizes.h /usr/include/libio.h
Image/image.todo.o: /usr/include/_G_config.h /usr/include/wchar.h
Image/image.todo.o: /usr/include/bits/stdio_lim.h
Image/image.todo.o: /usr/include/bits/sys_errlist.h Image/lineSegments.h
Image/image.todo.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
Image/image.todo.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
Image/image.todo.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
Image/image.todo.o: /usr/include/sys/types.h /usr/include/time.h
Image/image.todo.o: /usr/include/sys/select.h /usr/include/bits/select.h
Image/image.todo.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
Image/image.todo.o: /usr/include/sys/sysmacros.h
Image/image.todo.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
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
Image/jpeg.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
Image/jpeg.o: Image/lineSegments.h /usr/include/assert.h
Image/jpeg.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
Image/jpeg.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
Image/jpeg.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
Image/jpeg.o: /usr/include/sys/types.h /usr/include/time.h
Image/jpeg.o: /usr/include/sys/select.h /usr/include/bits/select.h
Image/jpeg.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
Image/jpeg.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
Image/jpeg.o: /usr/include/alloca.h ./JPEG/jpeglib.h ./JPEG/jconfig.h
Image/jpeg.o: ./JPEG/jmorecfg.h /usr/include/setjmp.h
Image/jpeg.o: /usr/include/bits/setjmp.h
Image/lineSegments.o: Image/lineSegments.h /usr/include/stdio.h
Image/lineSegments.o: /usr/include/features.h /usr/include/bits/predefs.h
Image/lineSegments.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
Image/lineSegments.o: /usr/include/gnu/stubs.h /usr/include/bits/types.h
Image/lineSegments.o: /usr/include/bits/typesizes.h /usr/include/libio.h
Image/lineSegments.o: /usr/include/_G_config.h /usr/include/wchar.h
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
Image/lineSegments.todo.o: /usr/include/bits/stdio_lim.h
Image/lineSegments.todo.o: /usr/include/bits/sys_errlist.h
Image/lineSegments.todo.o: /usr/include/math.h /usr/include/bits/huge_val.h
Image/lineSegments.todo.o: /usr/include/bits/huge_valf.h
Image/lineSegments.todo.o: /usr/include/bits/huge_vall.h
Image/lineSegments.todo.o: /usr/include/bits/inf.h /usr/include/bits/nan.h
Image/lineSegments.todo.o: /usr/include/bits/mathdef.h
Image/lineSegments.todo.o: /usr/include/bits/mathcalls.h
Ray/mouse.o: Ray/mouse.h /usr/include/GL/glut.h
Ray/mouse.o: /usr/include/GL/freeglut_std.h /usr/include/GL/gl.h
Ray/mouse.o: /usr/include/GL/glext.h /usr/include/inttypes.h
Ray/mouse.o: /usr/include/features.h /usr/include/bits/predefs.h
Ray/mouse.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
Ray/mouse.o: /usr/include/gnu/stubs.h /usr/include/stdint.h
Ray/mouse.o: /usr/include/bits/wchar.h /usr/include/GL/glu.h
Ray/mouse.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
Ray/mouse.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
Ray/mouse.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
Ray/mouse.o: /usr/include/sys/types.h /usr/include/bits/types.h
Ray/mouse.o: /usr/include/bits/typesizes.h /usr/include/time.h
Ray/mouse.o: /usr/include/sys/select.h /usr/include/bits/select.h
Ray/mouse.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
Ray/mouse.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
Ray/mouse.o: /usr/include/alloca.h ./Util/geometry.h
Ray/rayBox.o: /usr/include/stdio.h /usr/include/features.h
Ray/rayBox.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
Ray/rayBox.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
Ray/rayBox.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
Ray/rayBox.o: /usr/include/libio.h /usr/include/_G_config.h
Ray/rayBox.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
Ray/rayBox.o: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
Ray/rayBox.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
Ray/rayBox.o: /usr/include/endian.h /usr/include/bits/endian.h
Ray/rayBox.o: /usr/include/bits/byteswap.h /usr/include/sys/types.h
Ray/rayBox.o: /usr/include/time.h /usr/include/sys/select.h
Ray/rayBox.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
Ray/rayBox.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
Ray/rayBox.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
Ray/rayBox.o: /usr/include/math.h /usr/include/bits/huge_val.h
Ray/rayBox.o: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
Ray/rayBox.o: /usr/include/bits/inf.h /usr/include/bits/nan.h
Ray/rayBox.o: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
Ray/rayBox.o: Ray/rayBox.h ./Util/geometry.h Ray/rayShape.h Ray/rayScene.h
Ray/rayBox.o: ./Image/image.h Image/lineSegments.h /usr/include/GL/glut.h
Ray/rayBox.o: /usr/include/GL/freeglut_std.h /usr/include/GL/gl.h
Ray/rayBox.o: /usr/include/GL/glext.h /usr/include/inttypes.h
Ray/rayBox.o: /usr/include/stdint.h /usr/include/bits/wchar.h
Ray/rayBox.o: /usr/include/GL/glu.h Ray/rayLight.h Ray/rayGroup.h
Ray/rayBox.o: Ray/rayKey.h ./Util/parameterSamples.h
Ray/rayBox.o: ./Util/parameterSamples.todo.inl Ray/rayCamera.h
Ray/rayBox.todo.o: /usr/include/math.h /usr/include/features.h
Ray/rayBox.todo.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
Ray/rayBox.todo.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
Ray/rayBox.todo.o: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
Ray/rayBox.todo.o: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
Ray/rayBox.todo.o: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
Ray/rayBox.todo.o: /usr/include/bits/mathcalls.h /usr/include/GL/glut.h
Ray/rayBox.todo.o: /usr/include/GL/freeglut_std.h /usr/include/GL/gl.h
Ray/rayBox.todo.o: /usr/include/GL/glext.h /usr/include/inttypes.h
Ray/rayBox.todo.o: /usr/include/stdint.h /usr/include/bits/wchar.h
Ray/rayBox.todo.o: /usr/include/GL/glu.h /usr/include/stdlib.h
Ray/rayBox.todo.o: /usr/include/bits/waitflags.h
Ray/rayBox.todo.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
Ray/rayBox.todo.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
Ray/rayBox.todo.o: /usr/include/sys/types.h /usr/include/bits/types.h
Ray/rayBox.todo.o: /usr/include/bits/typesizes.h /usr/include/time.h
Ray/rayBox.todo.o: /usr/include/sys/select.h /usr/include/bits/select.h
Ray/rayBox.todo.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
Ray/rayBox.todo.o: /usr/include/sys/sysmacros.h
Ray/rayBox.todo.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
Ray/rayBox.todo.o: Ray/rayScene.h ./Util/geometry.h ./Image/image.h
Ray/rayBox.todo.o: /usr/include/stdio.h /usr/include/libio.h
Ray/rayBox.todo.o: /usr/include/_G_config.h /usr/include/wchar.h
Ray/rayBox.todo.o: /usr/include/bits/stdio_lim.h
Ray/rayBox.todo.o: /usr/include/bits/sys_errlist.h Image/lineSegments.h
Ray/rayBox.todo.o: Ray/rayShape.h Ray/rayLight.h Ray/rayGroup.h Ray/rayKey.h
Ray/rayBox.todo.o: ./Util/parameterSamples.h ./Util/parameterSamples.todo.inl
Ray/rayBox.todo.o: Ray/rayCamera.h Ray/rayBox.h
Ray/rayCamera.o: Ray/rayCamera.h /usr/include/stdio.h /usr/include/features.h
Ray/rayCamera.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
Ray/rayCamera.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
Ray/rayCamera.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
Ray/rayCamera.o: /usr/include/libio.h /usr/include/_G_config.h
Ray/rayCamera.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
Ray/rayCamera.o: /usr/include/bits/sys_errlist.h ./Util/geometry.h
Ray/rayCamera.todo.o: /usr/include/GL/glut.h /usr/include/GL/freeglut_std.h
Ray/rayCamera.todo.o: /usr/include/GL/gl.h /usr/include/GL/glext.h
Ray/rayCamera.todo.o: /usr/include/inttypes.h /usr/include/features.h
Ray/rayCamera.todo.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
Ray/rayCamera.todo.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
Ray/rayCamera.todo.o: /usr/include/stdint.h /usr/include/bits/wchar.h
Ray/rayCamera.todo.o: /usr/include/GL/glu.h /usr/include/stdlib.h
Ray/rayCamera.todo.o: /usr/include/bits/waitflags.h
Ray/rayCamera.todo.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
Ray/rayCamera.todo.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
Ray/rayCamera.todo.o: /usr/include/sys/types.h /usr/include/bits/types.h
Ray/rayCamera.todo.o: /usr/include/bits/typesizes.h /usr/include/time.h
Ray/rayCamera.todo.o: /usr/include/sys/select.h /usr/include/bits/select.h
Ray/rayCamera.todo.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
Ray/rayCamera.todo.o: /usr/include/sys/sysmacros.h
Ray/rayCamera.todo.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
Ray/rayCamera.todo.o: /usr/include/math.h /usr/include/bits/huge_val.h
Ray/rayCamera.todo.o: /usr/include/bits/huge_valf.h
Ray/rayCamera.todo.o: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
Ray/rayCamera.todo.o: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
Ray/rayCamera.todo.o: /usr/include/bits/mathcalls.h Ray/rayCamera.h
Ray/rayCamera.todo.o: /usr/include/stdio.h /usr/include/libio.h
Ray/rayCamera.todo.o: /usr/include/_G_config.h /usr/include/wchar.h
Ray/rayCamera.todo.o: /usr/include/bits/stdio_lim.h
Ray/rayCamera.todo.o: /usr/include/bits/sys_errlist.h ./Util/geometry.h
Ray/rayCone.o: /usr/include/stdio.h /usr/include/features.h
Ray/rayCone.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
Ray/rayCone.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
Ray/rayCone.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
Ray/rayCone.o: /usr/include/libio.h /usr/include/_G_config.h
Ray/rayCone.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
Ray/rayCone.o: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
Ray/rayCone.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
Ray/rayCone.o: /usr/include/endian.h /usr/include/bits/endian.h
Ray/rayCone.o: /usr/include/bits/byteswap.h /usr/include/sys/types.h
Ray/rayCone.o: /usr/include/time.h /usr/include/sys/select.h
Ray/rayCone.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
Ray/rayCone.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
Ray/rayCone.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
Ray/rayCone.o: /usr/include/math.h /usr/include/bits/huge_val.h
Ray/rayCone.o: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
Ray/rayCone.o: /usr/include/bits/inf.h /usr/include/bits/nan.h
Ray/rayCone.o: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
Ray/rayCone.o: Ray/rayCone.h ./Util/geometry.h Ray/rayShape.h Ray/rayScene.h
Ray/rayCone.o: ./Image/image.h Image/lineSegments.h /usr/include/GL/glut.h
Ray/rayCone.o: /usr/include/GL/freeglut_std.h /usr/include/GL/gl.h
Ray/rayCone.o: /usr/include/GL/glext.h /usr/include/inttypes.h
Ray/rayCone.o: /usr/include/stdint.h /usr/include/bits/wchar.h
Ray/rayCone.o: /usr/include/GL/glu.h Ray/rayLight.h Ray/rayGroup.h
Ray/rayCone.o: Ray/rayKey.h ./Util/parameterSamples.h
Ray/rayCone.o: ./Util/parameterSamples.todo.inl Ray/rayCamera.h
Ray/rayCone.todo.o: /usr/include/math.h /usr/include/features.h
Ray/rayCone.todo.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
Ray/rayCone.todo.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
Ray/rayCone.todo.o: /usr/include/bits/huge_val.h
Ray/rayCone.todo.o: /usr/include/bits/huge_valf.h
Ray/rayCone.todo.o: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
Ray/rayCone.todo.o: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
Ray/rayCone.todo.o: /usr/include/bits/mathcalls.h /usr/include/GL/glut.h
Ray/rayCone.todo.o: /usr/include/GL/freeglut_std.h /usr/include/GL/gl.h
Ray/rayCone.todo.o: /usr/include/GL/glext.h /usr/include/inttypes.h
Ray/rayCone.todo.o: /usr/include/stdint.h /usr/include/bits/wchar.h
Ray/rayCone.todo.o: /usr/include/GL/glu.h /usr/include/stdlib.h
Ray/rayCone.todo.o: /usr/include/bits/waitflags.h
Ray/rayCone.todo.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
Ray/rayCone.todo.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
Ray/rayCone.todo.o: /usr/include/sys/types.h /usr/include/bits/types.h
Ray/rayCone.todo.o: /usr/include/bits/typesizes.h /usr/include/time.h
Ray/rayCone.todo.o: /usr/include/sys/select.h /usr/include/bits/select.h
Ray/rayCone.todo.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
Ray/rayCone.todo.o: /usr/include/sys/sysmacros.h
Ray/rayCone.todo.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
Ray/rayCone.todo.o: Ray/rayScene.h ./Util/geometry.h ./Image/image.h
Ray/rayCone.todo.o: /usr/include/stdio.h /usr/include/libio.h
Ray/rayCone.todo.o: /usr/include/_G_config.h /usr/include/wchar.h
Ray/rayCone.todo.o: /usr/include/bits/stdio_lim.h
Ray/rayCone.todo.o: /usr/include/bits/sys_errlist.h Image/lineSegments.h
Ray/rayCone.todo.o: Ray/rayShape.h Ray/rayLight.h Ray/rayGroup.h Ray/rayKey.h
Ray/rayCone.todo.o: ./Util/parameterSamples.h
Ray/rayCone.todo.o: ./Util/parameterSamples.todo.inl Ray/rayCamera.h
Ray/rayCone.todo.o: Ray/rayCone.h
Ray/rayCylinder.o: /usr/include/stdio.h /usr/include/features.h
Ray/rayCylinder.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
Ray/rayCylinder.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
Ray/rayCylinder.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
Ray/rayCylinder.o: /usr/include/libio.h /usr/include/_G_config.h
Ray/rayCylinder.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
Ray/rayCylinder.o: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
Ray/rayCylinder.o: /usr/include/bits/waitflags.h
Ray/rayCylinder.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
Ray/rayCylinder.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
Ray/rayCylinder.o: /usr/include/sys/types.h /usr/include/time.h
Ray/rayCylinder.o: /usr/include/sys/select.h /usr/include/bits/select.h
Ray/rayCylinder.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
Ray/rayCylinder.o: /usr/include/sys/sysmacros.h
Ray/rayCylinder.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
Ray/rayCylinder.o: /usr/include/math.h /usr/include/bits/huge_val.h
Ray/rayCylinder.o: /usr/include/bits/huge_valf.h
Ray/rayCylinder.o: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
Ray/rayCylinder.o: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
Ray/rayCylinder.o: /usr/include/bits/mathcalls.h Ray/rayCylinder.h
Ray/rayCylinder.o: ./Util/geometry.h Ray/rayShape.h Ray/rayScene.h
Ray/rayCylinder.o: ./Image/image.h Image/lineSegments.h
Ray/rayCylinder.o: /usr/include/GL/glut.h /usr/include/GL/freeglut_std.h
Ray/rayCylinder.o: /usr/include/GL/gl.h /usr/include/GL/glext.h
Ray/rayCylinder.o: /usr/include/inttypes.h /usr/include/stdint.h
Ray/rayCylinder.o: /usr/include/bits/wchar.h /usr/include/GL/glu.h
Ray/rayCylinder.o: Ray/rayLight.h Ray/rayGroup.h Ray/rayKey.h
Ray/rayCylinder.o: ./Util/parameterSamples.h ./Util/parameterSamples.todo.inl
Ray/rayCylinder.o: Ray/rayCamera.h
Ray/rayCylinder.todo.o: /usr/include/math.h /usr/include/features.h
Ray/rayCylinder.todo.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
Ray/rayCylinder.todo.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
Ray/rayCylinder.todo.o: /usr/include/bits/huge_val.h
Ray/rayCylinder.todo.o: /usr/include/bits/huge_valf.h
Ray/rayCylinder.todo.o: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
Ray/rayCylinder.todo.o: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
Ray/rayCylinder.todo.o: /usr/include/bits/mathcalls.h /usr/include/GL/glut.h
Ray/rayCylinder.todo.o: /usr/include/GL/freeglut_std.h /usr/include/GL/gl.h
Ray/rayCylinder.todo.o: /usr/include/GL/glext.h /usr/include/inttypes.h
Ray/rayCylinder.todo.o: /usr/include/stdint.h /usr/include/bits/wchar.h
Ray/rayCylinder.todo.o: /usr/include/GL/glu.h /usr/include/stdlib.h
Ray/rayCylinder.todo.o: /usr/include/bits/waitflags.h
Ray/rayCylinder.todo.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
Ray/rayCylinder.todo.o: /usr/include/bits/endian.h
Ray/rayCylinder.todo.o: /usr/include/bits/byteswap.h /usr/include/sys/types.h
Ray/rayCylinder.todo.o: /usr/include/bits/types.h
Ray/rayCylinder.todo.o: /usr/include/bits/typesizes.h /usr/include/time.h
Ray/rayCylinder.todo.o: /usr/include/sys/select.h /usr/include/bits/select.h
Ray/rayCylinder.todo.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
Ray/rayCylinder.todo.o: /usr/include/sys/sysmacros.h
Ray/rayCylinder.todo.o: /usr/include/bits/pthreadtypes.h
Ray/rayCylinder.todo.o: /usr/include/alloca.h Ray/rayScene.h
Ray/rayCylinder.todo.o: ./Util/geometry.h ./Image/image.h
Ray/rayCylinder.todo.o: /usr/include/stdio.h /usr/include/libio.h
Ray/rayCylinder.todo.o: /usr/include/_G_config.h /usr/include/wchar.h
Ray/rayCylinder.todo.o: /usr/include/bits/stdio_lim.h
Ray/rayCylinder.todo.o: /usr/include/bits/sys_errlist.h Image/lineSegments.h
Ray/rayCylinder.todo.o: Ray/rayShape.h Ray/rayLight.h Ray/rayGroup.h
Ray/rayCylinder.todo.o: Ray/rayKey.h ./Util/parameterSamples.h
Ray/rayCylinder.todo.o: ./Util/parameterSamples.todo.inl Ray/rayCamera.h
Ray/rayCylinder.todo.o: Ray/rayCylinder.h
Ray/rayDirectionalLight.o: /usr/include/stdio.h /usr/include/features.h
Ray/rayDirectionalLight.o: /usr/include/bits/predefs.h
Ray/rayDirectionalLight.o: /usr/include/sys/cdefs.h
Ray/rayDirectionalLight.o: /usr/include/bits/wordsize.h
Ray/rayDirectionalLight.o: /usr/include/gnu/stubs.h /usr/include/bits/types.h
Ray/rayDirectionalLight.o: /usr/include/bits/typesizes.h /usr/include/libio.h
Ray/rayDirectionalLight.o: /usr/include/_G_config.h /usr/include/wchar.h
Ray/rayDirectionalLight.o: /usr/include/bits/stdio_lim.h
Ray/rayDirectionalLight.o: /usr/include/bits/sys_errlist.h
Ray/rayDirectionalLight.o: /usr/include/string.h /usr/include/xlocale.h
Ray/rayDirectionalLight.o: /usr/include/math.h /usr/include/bits/huge_val.h
Ray/rayDirectionalLight.o: /usr/include/bits/huge_valf.h
Ray/rayDirectionalLight.o: /usr/include/bits/huge_vall.h
Ray/rayDirectionalLight.o: /usr/include/bits/inf.h /usr/include/bits/nan.h
Ray/rayDirectionalLight.o: /usr/include/bits/mathdef.h
Ray/rayDirectionalLight.o: /usr/include/bits/mathcalls.h ./Util/geometry.h
Ray/rayDirectionalLight.o: Ray/rayDirectionalLight.h Ray/rayLight.h
Ray/rayDirectionalLight.o: Ray/rayShape.h Ray/rayScene.h ./Image/image.h
Ray/rayDirectionalLight.o: Image/lineSegments.h /usr/include/GL/glut.h
Ray/rayDirectionalLight.o: /usr/include/GL/freeglut_std.h
Ray/rayDirectionalLight.o: /usr/include/GL/gl.h /usr/include/GL/glext.h
Ray/rayDirectionalLight.o: /usr/include/inttypes.h /usr/include/stdint.h
Ray/rayDirectionalLight.o: /usr/include/bits/wchar.h /usr/include/GL/glu.h
Ray/rayDirectionalLight.o: /usr/include/stdlib.h
Ray/rayDirectionalLight.o: /usr/include/bits/waitflags.h
Ray/rayDirectionalLight.o: /usr/include/bits/waitstatus.h
Ray/rayDirectionalLight.o: /usr/include/endian.h /usr/include/bits/endian.h
Ray/rayDirectionalLight.o: /usr/include/bits/byteswap.h
Ray/rayDirectionalLight.o: /usr/include/sys/types.h /usr/include/time.h
Ray/rayDirectionalLight.o: /usr/include/sys/select.h
Ray/rayDirectionalLight.o: /usr/include/bits/select.h
Ray/rayDirectionalLight.o: /usr/include/bits/sigset.h
Ray/rayDirectionalLight.o: /usr/include/bits/time.h
Ray/rayDirectionalLight.o: /usr/include/sys/sysmacros.h
Ray/rayDirectionalLight.o: /usr/include/bits/pthreadtypes.h
Ray/rayDirectionalLight.o: /usr/include/alloca.h Ray/rayGroup.h Ray/rayKey.h
Ray/rayDirectionalLight.o: ./Util/parameterSamples.h
Ray/rayDirectionalLight.o: ./Util/parameterSamples.todo.inl Ray/rayCamera.h
Ray/rayDirectionalLight.todo.o: /usr/include/math.h /usr/include/features.h
Ray/rayDirectionalLight.todo.o: /usr/include/bits/predefs.h
Ray/rayDirectionalLight.todo.o: /usr/include/sys/cdefs.h
Ray/rayDirectionalLight.todo.o: /usr/include/bits/wordsize.h
Ray/rayDirectionalLight.todo.o: /usr/include/gnu/stubs.h
Ray/rayDirectionalLight.todo.o: /usr/include/bits/huge_val.h
Ray/rayDirectionalLight.todo.o: /usr/include/bits/huge_valf.h
Ray/rayDirectionalLight.todo.o: /usr/include/bits/huge_vall.h
Ray/rayDirectionalLight.todo.o: /usr/include/bits/inf.h
Ray/rayDirectionalLight.todo.o: /usr/include/bits/nan.h
Ray/rayDirectionalLight.todo.o: /usr/include/bits/mathdef.h
Ray/rayDirectionalLight.todo.o: /usr/include/bits/mathcalls.h
Ray/rayDirectionalLight.todo.o: /usr/include/GL/glut.h
Ray/rayDirectionalLight.todo.o: /usr/include/GL/freeglut_std.h
Ray/rayDirectionalLight.todo.o: /usr/include/GL/gl.h /usr/include/GL/glext.h
Ray/rayDirectionalLight.todo.o: /usr/include/inttypes.h /usr/include/stdint.h
Ray/rayDirectionalLight.todo.o: /usr/include/bits/wchar.h
Ray/rayDirectionalLight.todo.o: /usr/include/GL/glu.h /usr/include/stdlib.h
Ray/rayDirectionalLight.todo.o: /usr/include/bits/waitflags.h
Ray/rayDirectionalLight.todo.o: /usr/include/bits/waitstatus.h
Ray/rayDirectionalLight.todo.o: /usr/include/endian.h
Ray/rayDirectionalLight.todo.o: /usr/include/bits/endian.h
Ray/rayDirectionalLight.todo.o: /usr/include/bits/byteswap.h
Ray/rayDirectionalLight.todo.o: /usr/include/sys/types.h
Ray/rayDirectionalLight.todo.o: /usr/include/bits/types.h
Ray/rayDirectionalLight.todo.o: /usr/include/bits/typesizes.h
Ray/rayDirectionalLight.todo.o: /usr/include/time.h /usr/include/sys/select.h
Ray/rayDirectionalLight.todo.o: /usr/include/bits/select.h
Ray/rayDirectionalLight.todo.o: /usr/include/bits/sigset.h
Ray/rayDirectionalLight.todo.o: /usr/include/bits/time.h
Ray/rayDirectionalLight.todo.o: /usr/include/sys/sysmacros.h
Ray/rayDirectionalLight.todo.o: /usr/include/bits/pthreadtypes.h
Ray/rayDirectionalLight.todo.o: /usr/include/alloca.h
Ray/rayDirectionalLight.todo.o: Ray/rayDirectionalLight.h Ray/rayLight.h
Ray/rayDirectionalLight.todo.o: Ray/rayShape.h /usr/include/stdio.h
Ray/rayDirectionalLight.todo.o: /usr/include/libio.h /usr/include/_G_config.h
Ray/rayDirectionalLight.todo.o: /usr/include/wchar.h
Ray/rayDirectionalLight.todo.o: /usr/include/bits/stdio_lim.h
Ray/rayDirectionalLight.todo.o: /usr/include/bits/sys_errlist.h
Ray/rayDirectionalLight.todo.o: ./Util/geometry.h Ray/rayScene.h
Ray/rayDirectionalLight.todo.o: ./Image/image.h Image/lineSegments.h
Ray/rayDirectionalLight.todo.o: Ray/rayGroup.h Ray/rayKey.h
Ray/rayDirectionalLight.todo.o: ./Util/parameterSamples.h
Ray/rayDirectionalLight.todo.o: ./Util/parameterSamples.todo.inl
Ray/rayDirectionalLight.todo.o: Ray/rayCamera.h
Ray/rayFileInstance.o: /usr/include/stdio.h /usr/include/features.h
Ray/rayFileInstance.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
Ray/rayFileInstance.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
Ray/rayFileInstance.o: /usr/include/bits/types.h
Ray/rayFileInstance.o: /usr/include/bits/typesizes.h /usr/include/libio.h
Ray/rayFileInstance.o: /usr/include/_G_config.h /usr/include/wchar.h
Ray/rayFileInstance.o: /usr/include/bits/stdio_lim.h
Ray/rayFileInstance.o: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
Ray/rayFileInstance.o: /usr/include/bits/waitflags.h
Ray/rayFileInstance.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
Ray/rayFileInstance.o: /usr/include/bits/endian.h
Ray/rayFileInstance.o: /usr/include/bits/byteswap.h /usr/include/sys/types.h
Ray/rayFileInstance.o: /usr/include/time.h /usr/include/sys/select.h
Ray/rayFileInstance.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
Ray/rayFileInstance.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
Ray/rayFileInstance.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
Ray/rayFileInstance.o: Ray/rayFileInstance.h ./Util/geometry.h Ray/rayShape.h
Ray/rayFileInstance.o: Ray/rayScene.h ./Image/image.h Image/lineSegments.h
Ray/rayFileInstance.o: /usr/include/GL/glut.h /usr/include/GL/freeglut_std.h
Ray/rayFileInstance.o: /usr/include/GL/gl.h /usr/include/GL/glext.h
Ray/rayFileInstance.o: /usr/include/inttypes.h /usr/include/stdint.h
Ray/rayFileInstance.o: /usr/include/bits/wchar.h /usr/include/GL/glu.h
Ray/rayFileInstance.o: Ray/rayLight.h Ray/rayGroup.h Ray/rayKey.h
Ray/rayFileInstance.o: ./Util/parameterSamples.h
Ray/rayFileInstance.o: ./Util/parameterSamples.todo.inl Ray/rayCamera.h
Ray/rayGroup.o: /usr/include/stdio.h /usr/include/features.h
Ray/rayGroup.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
Ray/rayGroup.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
Ray/rayGroup.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
Ray/rayGroup.o: /usr/include/libio.h /usr/include/_G_config.h
Ray/rayGroup.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
Ray/rayGroup.o: /usr/include/bits/sys_errlist.h /usr/include/assert.h
Ray/rayGroup.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
Ray/rayGroup.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
Ray/rayGroup.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
Ray/rayGroup.o: /usr/include/sys/types.h /usr/include/time.h
Ray/rayGroup.o: /usr/include/sys/select.h /usr/include/bits/select.h
Ray/rayGroup.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
Ray/rayGroup.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
Ray/rayGroup.o: /usr/include/alloca.h /usr/include/string.h
Ray/rayGroup.o: /usr/include/xlocale.h Ray/rayGroup.h ./Util/geometry.h
Ray/rayGroup.o: Ray/rayShape.h Ray/rayScene.h ./Image/image.h
Ray/rayGroup.o: Image/lineSegments.h /usr/include/GL/glut.h
Ray/rayGroup.o: /usr/include/GL/freeglut_std.h /usr/include/GL/gl.h
Ray/rayGroup.o: /usr/include/GL/glext.h /usr/include/inttypes.h
Ray/rayGroup.o: /usr/include/stdint.h /usr/include/bits/wchar.h
Ray/rayGroup.o: /usr/include/GL/glu.h Ray/rayLight.h Ray/rayKey.h
Ray/rayGroup.o: ./Util/parameterSamples.h ./Util/parameterSamples.todo.inl
Ray/rayGroup.o: Ray/rayCamera.h
Ray/rayGroup.todo.o: /usr/include/stdlib.h /usr/include/features.h
Ray/rayGroup.todo.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
Ray/rayGroup.todo.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
Ray/rayGroup.todo.o: /usr/include/bits/waitflags.h
Ray/rayGroup.todo.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
Ray/rayGroup.todo.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
Ray/rayGroup.todo.o: /usr/include/sys/types.h /usr/include/bits/types.h
Ray/rayGroup.todo.o: /usr/include/bits/typesizes.h /usr/include/time.h
Ray/rayGroup.todo.o: /usr/include/sys/select.h /usr/include/bits/select.h
Ray/rayGroup.todo.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
Ray/rayGroup.todo.o: /usr/include/sys/sysmacros.h
Ray/rayGroup.todo.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
Ray/rayGroup.todo.o: /usr/include/GL/glut.h /usr/include/GL/freeglut_std.h
Ray/rayGroup.todo.o: /usr/include/GL/gl.h /usr/include/GL/glext.h
Ray/rayGroup.todo.o: /usr/include/inttypes.h /usr/include/stdint.h
Ray/rayGroup.todo.o: /usr/include/bits/wchar.h /usr/include/GL/glu.h
Ray/rayGroup.todo.o: Ray/rayGroup.h ./Util/geometry.h Ray/rayShape.h
Ray/rayGroup.todo.o: /usr/include/stdio.h /usr/include/libio.h
Ray/rayGroup.todo.o: /usr/include/_G_config.h /usr/include/wchar.h
Ray/rayGroup.todo.o: /usr/include/bits/stdio_lim.h
Ray/rayGroup.todo.o: /usr/include/bits/sys_errlist.h Ray/rayScene.h
Ray/rayGroup.todo.o: ./Image/image.h Image/lineSegments.h Ray/rayLight.h
Ray/rayGroup.todo.o: Ray/rayKey.h ./Util/parameterSamples.h
Ray/rayGroup.todo.o: ./Util/parameterSamples.todo.inl Ray/rayCamera.h
Ray/rayKey.o: /usr/include/stdio.h /usr/include/features.h
Ray/rayKey.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
Ray/rayKey.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
Ray/rayKey.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
Ray/rayKey.o: /usr/include/libio.h /usr/include/_G_config.h
Ray/rayKey.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
Ray/rayKey.o: /usr/include/bits/sys_errlist.h /usr/include/string.h
Ray/rayKey.o: /usr/include/xlocale.h ./Util/geometry.h ./Util/cmdLineParser.h
Ray/rayKey.o: Ray/rayGroup.h Ray/rayShape.h Ray/rayScene.h ./Image/image.h
Ray/rayKey.o: Image/lineSegments.h /usr/include/GL/glut.h
Ray/rayKey.o: /usr/include/GL/freeglut_std.h /usr/include/GL/gl.h
Ray/rayKey.o: /usr/include/GL/glext.h /usr/include/inttypes.h
Ray/rayKey.o: /usr/include/stdint.h /usr/include/bits/wchar.h
Ray/rayKey.o: /usr/include/GL/glu.h /usr/include/stdlib.h
Ray/rayKey.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
Ray/rayKey.o: /usr/include/endian.h /usr/include/bits/endian.h
Ray/rayKey.o: /usr/include/bits/byteswap.h /usr/include/sys/types.h
Ray/rayKey.o: /usr/include/time.h /usr/include/sys/select.h
Ray/rayKey.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
Ray/rayKey.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
Ray/rayKey.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
Ray/rayKey.o: Ray/rayLight.h Ray/rayKey.h ./Util/parameterSamples.h
Ray/rayKey.o: ./Util/parameterSamples.todo.inl Ray/rayCamera.h
Ray/rayPointLight.o: /usr/include/stdio.h /usr/include/features.h
Ray/rayPointLight.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
Ray/rayPointLight.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
Ray/rayPointLight.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
Ray/rayPointLight.o: /usr/include/libio.h /usr/include/_G_config.h
Ray/rayPointLight.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
Ray/rayPointLight.o: /usr/include/bits/sys_errlist.h /usr/include/string.h
Ray/rayPointLight.o: /usr/include/xlocale.h /usr/include/math.h
Ray/rayPointLight.o: /usr/include/bits/huge_val.h
Ray/rayPointLight.o: /usr/include/bits/huge_valf.h
Ray/rayPointLight.o: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
Ray/rayPointLight.o: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
Ray/rayPointLight.o: /usr/include/bits/mathcalls.h ./Util/geometry.h
Ray/rayPointLight.o: Ray/rayPointLight.h Ray/rayLight.h Ray/rayShape.h
Ray/rayPointLight.o: Ray/rayScene.h ./Image/image.h Image/lineSegments.h
Ray/rayPointLight.o: /usr/include/GL/glut.h /usr/include/GL/freeglut_std.h
Ray/rayPointLight.o: /usr/include/GL/gl.h /usr/include/GL/glext.h
Ray/rayPointLight.o: /usr/include/inttypes.h /usr/include/stdint.h
Ray/rayPointLight.o: /usr/include/bits/wchar.h /usr/include/GL/glu.h
Ray/rayPointLight.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
Ray/rayPointLight.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
Ray/rayPointLight.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
Ray/rayPointLight.o: /usr/include/sys/types.h /usr/include/time.h
Ray/rayPointLight.o: /usr/include/sys/select.h /usr/include/bits/select.h
Ray/rayPointLight.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
Ray/rayPointLight.o: /usr/include/sys/sysmacros.h
Ray/rayPointLight.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
Ray/rayPointLight.o: Ray/rayGroup.h Ray/rayKey.h ./Util/parameterSamples.h
Ray/rayPointLight.o: ./Util/parameterSamples.todo.inl Ray/rayCamera.h
Ray/rayPointLight.todo.o: /usr/include/math.h /usr/include/features.h
Ray/rayPointLight.todo.o: /usr/include/bits/predefs.h
Ray/rayPointLight.todo.o: /usr/include/sys/cdefs.h
Ray/rayPointLight.todo.o: /usr/include/bits/wordsize.h
Ray/rayPointLight.todo.o: /usr/include/gnu/stubs.h
Ray/rayPointLight.todo.o: /usr/include/bits/huge_val.h
Ray/rayPointLight.todo.o: /usr/include/bits/huge_valf.h
Ray/rayPointLight.todo.o: /usr/include/bits/huge_vall.h
Ray/rayPointLight.todo.o: /usr/include/bits/inf.h /usr/include/bits/nan.h
Ray/rayPointLight.todo.o: /usr/include/bits/mathdef.h
Ray/rayPointLight.todo.o: /usr/include/bits/mathcalls.h
Ray/rayPointLight.todo.o: /usr/include/GL/glut.h
Ray/rayPointLight.todo.o: /usr/include/GL/freeglut_std.h /usr/include/GL/gl.h
Ray/rayPointLight.todo.o: /usr/include/GL/glext.h /usr/include/inttypes.h
Ray/rayPointLight.todo.o: /usr/include/stdint.h /usr/include/bits/wchar.h
Ray/rayPointLight.todo.o: /usr/include/GL/glu.h /usr/include/stdlib.h
Ray/rayPointLight.todo.o: /usr/include/bits/waitflags.h
Ray/rayPointLight.todo.o: /usr/include/bits/waitstatus.h
Ray/rayPointLight.todo.o: /usr/include/endian.h /usr/include/bits/endian.h
Ray/rayPointLight.todo.o: /usr/include/bits/byteswap.h
Ray/rayPointLight.todo.o: /usr/include/sys/types.h /usr/include/bits/types.h
Ray/rayPointLight.todo.o: /usr/include/bits/typesizes.h /usr/include/time.h
Ray/rayPointLight.todo.o: /usr/include/sys/select.h
Ray/rayPointLight.todo.o: /usr/include/bits/select.h
Ray/rayPointLight.todo.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
Ray/rayPointLight.todo.o: /usr/include/sys/sysmacros.h
Ray/rayPointLight.todo.o: /usr/include/bits/pthreadtypes.h
Ray/rayPointLight.todo.o: /usr/include/alloca.h Ray/rayPointLight.h
Ray/rayPointLight.todo.o: Ray/rayLight.h Ray/rayShape.h /usr/include/stdio.h
Ray/rayPointLight.todo.o: /usr/include/libio.h /usr/include/_G_config.h
Ray/rayPointLight.todo.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
Ray/rayPointLight.todo.o: /usr/include/bits/sys_errlist.h ./Util/geometry.h
Ray/rayPointLight.todo.o: Ray/rayScene.h ./Image/image.h Image/lineSegments.h
Ray/rayPointLight.todo.o: Ray/rayGroup.h Ray/rayKey.h
Ray/rayPointLight.todo.o: ./Util/parameterSamples.h
Ray/rayPointLight.todo.o: ./Util/parameterSamples.todo.inl Ray/rayCamera.h
Ray/rayScene.o: /usr/include/stdlib.h /usr/include/features.h
Ray/rayScene.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
Ray/rayScene.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
Ray/rayScene.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
Ray/rayScene.o: /usr/include/endian.h /usr/include/bits/endian.h
Ray/rayScene.o: /usr/include/bits/byteswap.h /usr/include/sys/types.h
Ray/rayScene.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
Ray/rayScene.o: /usr/include/time.h /usr/include/sys/select.h
Ray/rayScene.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
Ray/rayScene.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
Ray/rayScene.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
Ray/rayScene.o: /usr/include/stdio.h /usr/include/libio.h
Ray/rayScene.o: /usr/include/_G_config.h /usr/include/wchar.h
Ray/rayScene.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
Ray/rayScene.o: /usr/include/string.h /usr/include/xlocale.h
Ray/rayScene.o: /usr/include/math.h /usr/include/bits/huge_val.h
Ray/rayScene.o: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
Ray/rayScene.o: /usr/include/bits/inf.h /usr/include/bits/nan.h
Ray/rayScene.o: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
Ray/rayScene.o: ./Image/bmp.h Image/image.h Image/lineSegments.h
Ray/rayScene.o: Ray/rayScene.h ./Util/geometry.h ./Image/image.h
Ray/rayScene.o: /usr/include/GL/glut.h /usr/include/GL/freeglut_std.h
Ray/rayScene.o: /usr/include/GL/gl.h /usr/include/GL/glext.h
Ray/rayScene.o: /usr/include/inttypes.h /usr/include/stdint.h
Ray/rayScene.o: /usr/include/bits/wchar.h /usr/include/GL/glu.h
Ray/rayScene.o: Ray/rayShape.h Ray/rayLight.h Ray/rayGroup.h Ray/rayKey.h
Ray/rayScene.o: ./Util/parameterSamples.h ./Util/parameterSamples.todo.inl
Ray/rayScene.o: Ray/rayCamera.h Ray/rayPointLight.h Ray/rayDirectionalLight.h
Ray/rayScene.o: Ray/raySpotLight.h Ray/rayFileInstance.h Ray/raySphere.h
Ray/rayScene.o: Ray/rayBox.h Ray/rayCone.h Ray/rayCylinder.h
Ray/rayScene.o: Ray/rayTriangle.h
Ray/rayScene.todo.o: Ray/rayScene.h ./Util/geometry.h ./Image/image.h
Ray/rayScene.todo.o: /usr/include/stdio.h /usr/include/features.h
Ray/rayScene.todo.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
Ray/rayScene.todo.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
Ray/rayScene.todo.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
Ray/rayScene.todo.o: /usr/include/libio.h /usr/include/_G_config.h
Ray/rayScene.todo.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
Ray/rayScene.todo.o: /usr/include/bits/sys_errlist.h Image/lineSegments.h
Ray/rayScene.todo.o: /usr/include/GL/glut.h /usr/include/GL/freeglut_std.h
Ray/rayScene.todo.o: /usr/include/GL/gl.h /usr/include/GL/glext.h
Ray/rayScene.todo.o: /usr/include/inttypes.h /usr/include/stdint.h
Ray/rayScene.todo.o: /usr/include/bits/wchar.h /usr/include/GL/glu.h
Ray/rayScene.todo.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
Ray/rayScene.todo.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
Ray/rayScene.todo.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
Ray/rayScene.todo.o: /usr/include/sys/types.h /usr/include/time.h
Ray/rayScene.todo.o: /usr/include/sys/select.h /usr/include/bits/select.h
Ray/rayScene.todo.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
Ray/rayScene.todo.o: /usr/include/sys/sysmacros.h
Ray/rayScene.todo.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
Ray/rayScene.todo.o: Ray/rayShape.h Ray/rayLight.h Ray/rayGroup.h
Ray/rayScene.todo.o: Ray/rayKey.h ./Util/parameterSamples.h
Ray/rayScene.todo.o: ./Util/parameterSamples.todo.inl Ray/rayCamera.h
Ray/rayScene.todo.o: /usr/include/math.h /usr/include/bits/huge_val.h
Ray/rayScene.todo.o: /usr/include/bits/huge_valf.h
Ray/rayScene.todo.o: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
Ray/rayScene.todo.o: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
Ray/rayScene.todo.o: /usr/include/bits/mathcalls.h
Ray/raySphere.o: /usr/include/stdio.h /usr/include/features.h
Ray/raySphere.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
Ray/raySphere.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
Ray/raySphere.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
Ray/raySphere.o: /usr/include/libio.h /usr/include/_G_config.h
Ray/raySphere.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
Ray/raySphere.o: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
Ray/raySphere.o: /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h
Ray/raySphere.o: /usr/include/endian.h /usr/include/bits/endian.h
Ray/raySphere.o: /usr/include/bits/byteswap.h /usr/include/sys/types.h
Ray/raySphere.o: /usr/include/time.h /usr/include/sys/select.h
Ray/raySphere.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
Ray/raySphere.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
Ray/raySphere.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
Ray/raySphere.o: /usr/include/math.h /usr/include/bits/huge_val.h
Ray/raySphere.o: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
Ray/raySphere.o: /usr/include/bits/inf.h /usr/include/bits/nan.h
Ray/raySphere.o: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
Ray/raySphere.o: Ray/raySphere.h ./Util/geometry.h Ray/rayShape.h
Ray/raySphere.o: Ray/rayScene.h ./Image/image.h Image/lineSegments.h
Ray/raySphere.o: /usr/include/GL/glut.h /usr/include/GL/freeglut_std.h
Ray/raySphere.o: /usr/include/GL/gl.h /usr/include/GL/glext.h
Ray/raySphere.o: /usr/include/inttypes.h /usr/include/stdint.h
Ray/raySphere.o: /usr/include/bits/wchar.h /usr/include/GL/glu.h
Ray/raySphere.o: Ray/rayLight.h Ray/rayGroup.h Ray/rayKey.h
Ray/raySphere.o: ./Util/parameterSamples.h ./Util/parameterSamples.todo.inl
Ray/raySphere.o: Ray/rayCamera.h
Ray/raySphere.todo.o: /usr/include/math.h /usr/include/features.h
Ray/raySphere.todo.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
Ray/raySphere.todo.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
Ray/raySphere.todo.o: /usr/include/bits/huge_val.h
Ray/raySphere.todo.o: /usr/include/bits/huge_valf.h
Ray/raySphere.todo.o: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
Ray/raySphere.todo.o: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
Ray/raySphere.todo.o: /usr/include/bits/mathcalls.h /usr/include/GL/glut.h
Ray/raySphere.todo.o: /usr/include/GL/freeglut_std.h /usr/include/GL/gl.h
Ray/raySphere.todo.o: /usr/include/GL/glext.h /usr/include/inttypes.h
Ray/raySphere.todo.o: /usr/include/stdint.h /usr/include/bits/wchar.h
Ray/raySphere.todo.o: /usr/include/GL/glu.h /usr/include/stdlib.h
Ray/raySphere.todo.o: /usr/include/bits/waitflags.h
Ray/raySphere.todo.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
Ray/raySphere.todo.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
Ray/raySphere.todo.o: /usr/include/sys/types.h /usr/include/bits/types.h
Ray/raySphere.todo.o: /usr/include/bits/typesizes.h /usr/include/time.h
Ray/raySphere.todo.o: /usr/include/sys/select.h /usr/include/bits/select.h
Ray/raySphere.todo.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
Ray/raySphere.todo.o: /usr/include/sys/sysmacros.h
Ray/raySphere.todo.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
Ray/raySphere.todo.o: Ray/rayScene.h ./Util/geometry.h ./Image/image.h
Ray/raySphere.todo.o: /usr/include/stdio.h /usr/include/libio.h
Ray/raySphere.todo.o: /usr/include/_G_config.h /usr/include/wchar.h
Ray/raySphere.todo.o: /usr/include/bits/stdio_lim.h
Ray/raySphere.todo.o: /usr/include/bits/sys_errlist.h Image/lineSegments.h
Ray/raySphere.todo.o: Ray/rayShape.h Ray/rayLight.h Ray/rayGroup.h
Ray/raySphere.todo.o: Ray/rayKey.h ./Util/parameterSamples.h
Ray/raySphere.todo.o: ./Util/parameterSamples.todo.inl Ray/rayCamera.h
Ray/raySphere.todo.o: Ray/raySphere.h
Ray/raySpotLight.o: /usr/include/stdio.h /usr/include/features.h
Ray/raySpotLight.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
Ray/raySpotLight.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
Ray/raySpotLight.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
Ray/raySpotLight.o: /usr/include/libio.h /usr/include/_G_config.h
Ray/raySpotLight.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
Ray/raySpotLight.o: /usr/include/bits/sys_errlist.h /usr/include/string.h
Ray/raySpotLight.o: /usr/include/xlocale.h /usr/include/math.h
Ray/raySpotLight.o: /usr/include/bits/huge_val.h
Ray/raySpotLight.o: /usr/include/bits/huge_valf.h
Ray/raySpotLight.o: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
Ray/raySpotLight.o: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
Ray/raySpotLight.o: /usr/include/bits/mathcalls.h ./Util/geometry.h
Ray/raySpotLight.o: Ray/raySpotLight.h Ray/rayLight.h Ray/rayShape.h
Ray/raySpotLight.o: Ray/rayScene.h ./Image/image.h Image/lineSegments.h
Ray/raySpotLight.o: /usr/include/GL/glut.h /usr/include/GL/freeglut_std.h
Ray/raySpotLight.o: /usr/include/GL/gl.h /usr/include/GL/glext.h
Ray/raySpotLight.o: /usr/include/inttypes.h /usr/include/stdint.h
Ray/raySpotLight.o: /usr/include/bits/wchar.h /usr/include/GL/glu.h
Ray/raySpotLight.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
Ray/raySpotLight.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
Ray/raySpotLight.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
Ray/raySpotLight.o: /usr/include/sys/types.h /usr/include/time.h
Ray/raySpotLight.o: /usr/include/sys/select.h /usr/include/bits/select.h
Ray/raySpotLight.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
Ray/raySpotLight.o: /usr/include/sys/sysmacros.h
Ray/raySpotLight.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
Ray/raySpotLight.o: Ray/rayGroup.h Ray/rayKey.h ./Util/parameterSamples.h
Ray/raySpotLight.o: ./Util/parameterSamples.todo.inl Ray/rayCamera.h
Ray/raySpotLight.todo.o: /usr/include/math.h /usr/include/features.h
Ray/raySpotLight.todo.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
Ray/raySpotLight.todo.o: /usr/include/bits/wordsize.h
Ray/raySpotLight.todo.o: /usr/include/gnu/stubs.h
Ray/raySpotLight.todo.o: /usr/include/bits/huge_val.h
Ray/raySpotLight.todo.o: /usr/include/bits/huge_valf.h
Ray/raySpotLight.todo.o: /usr/include/bits/huge_vall.h
Ray/raySpotLight.todo.o: /usr/include/bits/inf.h /usr/include/bits/nan.h
Ray/raySpotLight.todo.o: /usr/include/bits/mathdef.h
Ray/raySpotLight.todo.o: /usr/include/bits/mathcalls.h /usr/include/GL/glut.h
Ray/raySpotLight.todo.o: /usr/include/GL/freeglut_std.h /usr/include/GL/gl.h
Ray/raySpotLight.todo.o: /usr/include/GL/glext.h /usr/include/inttypes.h
Ray/raySpotLight.todo.o: /usr/include/stdint.h /usr/include/bits/wchar.h
Ray/raySpotLight.todo.o: /usr/include/GL/glu.h /usr/include/stdlib.h
Ray/raySpotLight.todo.o: /usr/include/bits/waitflags.h
Ray/raySpotLight.todo.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
Ray/raySpotLight.todo.o: /usr/include/bits/endian.h
Ray/raySpotLight.todo.o: /usr/include/bits/byteswap.h
Ray/raySpotLight.todo.o: /usr/include/sys/types.h /usr/include/bits/types.h
Ray/raySpotLight.todo.o: /usr/include/bits/typesizes.h /usr/include/time.h
Ray/raySpotLight.todo.o: /usr/include/sys/select.h /usr/include/bits/select.h
Ray/raySpotLight.todo.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
Ray/raySpotLight.todo.o: /usr/include/sys/sysmacros.h
Ray/raySpotLight.todo.o: /usr/include/bits/pthreadtypes.h
Ray/raySpotLight.todo.o: /usr/include/alloca.h Ray/rayScene.h
Ray/raySpotLight.todo.o: ./Util/geometry.h ./Image/image.h
Ray/raySpotLight.todo.o: /usr/include/stdio.h /usr/include/libio.h
Ray/raySpotLight.todo.o: /usr/include/_G_config.h /usr/include/wchar.h
Ray/raySpotLight.todo.o: /usr/include/bits/stdio_lim.h
Ray/raySpotLight.todo.o: /usr/include/bits/sys_errlist.h Image/lineSegments.h
Ray/raySpotLight.todo.o: Ray/rayShape.h Ray/rayLight.h Ray/rayGroup.h
Ray/raySpotLight.todo.o: Ray/rayKey.h ./Util/parameterSamples.h
Ray/raySpotLight.todo.o: ./Util/parameterSamples.todo.inl Ray/rayCamera.h
Ray/raySpotLight.todo.o: Ray/raySpotLight.h
Ray/rayTriangle.o: /usr/include/stdio.h /usr/include/features.h
Ray/rayTriangle.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
Ray/rayTriangle.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
Ray/rayTriangle.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
Ray/rayTriangle.o: /usr/include/libio.h /usr/include/_G_config.h
Ray/rayTriangle.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
Ray/rayTriangle.o: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
Ray/rayTriangle.o: /usr/include/bits/waitflags.h
Ray/rayTriangle.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
Ray/rayTriangle.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
Ray/rayTriangle.o: /usr/include/sys/types.h /usr/include/time.h
Ray/rayTriangle.o: /usr/include/sys/select.h /usr/include/bits/select.h
Ray/rayTriangle.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
Ray/rayTriangle.o: /usr/include/sys/sysmacros.h
Ray/rayTriangle.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
Ray/rayTriangle.o: /usr/include/math.h /usr/include/bits/huge_val.h
Ray/rayTriangle.o: /usr/include/bits/huge_valf.h
Ray/rayTriangle.o: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
Ray/rayTriangle.o: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
Ray/rayTriangle.o: /usr/include/bits/mathcalls.h Ray/rayTriangle.h
Ray/rayTriangle.o: ./Util/geometry.h Ray/rayShape.h Ray/rayScene.h
Ray/rayTriangle.o: ./Image/image.h Image/lineSegments.h
Ray/rayTriangle.o: /usr/include/GL/glut.h /usr/include/GL/freeglut_std.h
Ray/rayTriangle.o: /usr/include/GL/gl.h /usr/include/GL/glext.h
Ray/rayTriangle.o: /usr/include/inttypes.h /usr/include/stdint.h
Ray/rayTriangle.o: /usr/include/bits/wchar.h /usr/include/GL/glu.h
Ray/rayTriangle.o: Ray/rayLight.h Ray/rayGroup.h Ray/rayKey.h
Ray/rayTriangle.o: ./Util/parameterSamples.h ./Util/parameterSamples.todo.inl
Ray/rayTriangle.o: Ray/rayCamera.h
Ray/rayTriangle.todo.o: /usr/include/stdio.h /usr/include/features.h
Ray/rayTriangle.todo.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
Ray/rayTriangle.todo.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
Ray/rayTriangle.todo.o: /usr/include/bits/types.h
Ray/rayTriangle.todo.o: /usr/include/bits/typesizes.h /usr/include/libio.h
Ray/rayTriangle.todo.o: /usr/include/_G_config.h /usr/include/wchar.h
Ray/rayTriangle.todo.o: /usr/include/bits/stdio_lim.h
Ray/rayTriangle.todo.o: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
Ray/rayTriangle.todo.o: /usr/include/bits/waitflags.h
Ray/rayTriangle.todo.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
Ray/rayTriangle.todo.o: /usr/include/bits/endian.h
Ray/rayTriangle.todo.o: /usr/include/bits/byteswap.h /usr/include/sys/types.h
Ray/rayTriangle.todo.o: /usr/include/time.h /usr/include/sys/select.h
Ray/rayTriangle.todo.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
Ray/rayTriangle.todo.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
Ray/rayTriangle.todo.o: /usr/include/bits/pthreadtypes.h
Ray/rayTriangle.todo.o: /usr/include/alloca.h /usr/include/math.h
Ray/rayTriangle.todo.o: /usr/include/bits/huge_val.h
Ray/rayTriangle.todo.o: /usr/include/bits/huge_valf.h
Ray/rayTriangle.todo.o: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
Ray/rayTriangle.todo.o: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
Ray/rayTriangle.todo.o: /usr/include/bits/mathcalls.h Ray/rayTriangle.h
Ray/rayTriangle.todo.o: ./Util/geometry.h Ray/rayShape.h Ray/rayScene.h
Ray/rayTriangle.todo.o: ./Image/image.h Image/lineSegments.h
Ray/rayTriangle.todo.o: /usr/include/GL/glut.h /usr/include/GL/freeglut_std.h
Ray/rayTriangle.todo.o: /usr/include/GL/gl.h /usr/include/GL/glext.h
Ray/rayTriangle.todo.o: /usr/include/inttypes.h /usr/include/stdint.h
Ray/rayTriangle.todo.o: /usr/include/bits/wchar.h /usr/include/GL/glu.h
Ray/rayTriangle.todo.o: Ray/rayLight.h Ray/rayGroup.h Ray/rayKey.h
Ray/rayTriangle.todo.o: ./Util/parameterSamples.h
Ray/rayTriangle.todo.o: ./Util/parameterSamples.todo.inl Ray/rayCamera.h
Ray/rayWindow.o: /usr/include/string.h /usr/include/features.h
Ray/rayWindow.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
Ray/rayWindow.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
Ray/rayWindow.o: /usr/include/xlocale.h ./Util/time.h Ray/rayWindow.h
Ray/rayWindow.o: ./Ray/mouse.h ./Ray/rayScene.h ./Util/geometry.h
Ray/rayWindow.o: ./Image/image.h /usr/include/stdio.h
Ray/rayWindow.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
Ray/rayWindow.o: /usr/include/libio.h /usr/include/_G_config.h
Ray/rayWindow.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
Ray/rayWindow.o: /usr/include/bits/sys_errlist.h Image/lineSegments.h
Ray/rayWindow.o: /usr/include/GL/glut.h /usr/include/GL/freeglut_std.h
Ray/rayWindow.o: /usr/include/GL/gl.h /usr/include/GL/glext.h
Ray/rayWindow.o: /usr/include/inttypes.h /usr/include/stdint.h
Ray/rayWindow.o: /usr/include/bits/wchar.h /usr/include/GL/glu.h
Ray/rayWindow.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
Ray/rayWindow.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
Ray/rayWindow.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
Ray/rayWindow.o: /usr/include/sys/types.h /usr/include/time.h
Ray/rayWindow.o: /usr/include/sys/select.h /usr/include/bits/select.h
Ray/rayWindow.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
Ray/rayWindow.o: /usr/include/sys/sysmacros.h
Ray/rayWindow.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
Ray/rayWindow.o: Ray/rayShape.h Ray/rayLight.h Ray/rayGroup.h Ray/rayScene.h
Ray/rayWindow.o: Ray/rayKey.h ./Util/parameterSamples.h
Ray/rayWindow.o: ./Util/parameterSamples.todo.inl Ray/rayCamera.h
main.o: /usr/include/stdio.h /usr/include/features.h
main.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
main.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
main.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
main.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
main.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
main.o: /usr/include/stdlib.h /usr/include/bits/waitflags.h
main.o: /usr/include/bits/waitstatus.h /usr/include/endian.h
main.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
main.o: /usr/include/sys/types.h /usr/include/time.h
main.o: /usr/include/sys/select.h /usr/include/bits/select.h
main.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
main.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
main.o: /usr/include/alloca.h ./Util/cmdLineParser.h /usr/include/string.h
main.o: /usr/include/xlocale.h ./Ray/rayScene.h ./Util/geometry.h
main.o: ./Image/image.h Image/lineSegments.h /usr/include/GL/glut.h
main.o: /usr/include/GL/freeglut_std.h /usr/include/GL/gl.h
main.o: /usr/include/GL/glext.h /usr/include/inttypes.h /usr/include/stdint.h
main.o: /usr/include/bits/wchar.h /usr/include/GL/glu.h Ray/rayShape.h
main.o: Ray/rayLight.h Ray/rayGroup.h Ray/rayScene.h Ray/rayKey.h
main.o: ./Util/parameterSamples.h ./Util/parameterSamples.todo.inl
main.o: Ray/rayCamera.h ./Ray/rayWindow.h ./Ray/mouse.h ./Util/time.h
