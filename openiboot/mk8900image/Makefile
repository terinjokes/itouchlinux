MKIMAGEOBJS=mk8900image.o
LIBRARIES=-L/usr/lib -lm -ldl -lpng -lcrypto -lz
CFLAGS +=

ifeq ($(ARCH), x86_64)
	LIBXPWN=x86_64/libxpwn.a x86_64/libcommon.a
else
	LIBXPWN=x86/libxpwn.a x86/libcommon.a
endif

%.o:	%.c
	@echo "Compiling $@"
	@$(CC) $(CFLAGS) -c $< -o $@

all: mk8900image

mk8900image:	$(MKIMAGEOBJS) $(LIBXPWN)
	@echo "Building $@"
	@$(CC) $(CFLAGS) $(MKIMAGEOBJS) $(LIBXPWN) $(LIBRARIES) -o $@

libcommon.a:
	@echo "Building $@"
	@$gcc -c common/abstractfile.c -o common/abstractfile.c.o
	@ar cr libcommon.a  common/abstractfile.c.o
	@ranlib libcommon.a
	
clean:
	@rm -f *.o
	@rm -f mk8900image
	@rm -f common/abstractfile.c.o libcommon.a
