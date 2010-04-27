MKIMAGEOBJS=mk8900image.o
LIBXPWN=libxpwn.a libcommon.a
LIBRARIES=-L/usr/lib32 -L/opt/local-universal-10.4/lib -lm -ldl -lpng -lcrypto -lz
CFLAGS += -m32

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
