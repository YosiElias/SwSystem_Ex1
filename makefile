CC = gcc
CFLAGS = -Wall -g
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_LOOP = advancedClassificationLoop.o basicClassification.o 
OBJECTS_REC = advancedClassificationRecursion.o basicClassification.o 

#make all
all: mains maindrec maindloop loops

#make mains:
main.o: main.c NumClass.h
	$(CC) $(CFLAGS) -c main.c
mains: main.o libclassrec.a 
	$(CC) $(CFLAGS) -o mains main.o libclassrec.a -lm
#make maindloop:
maindloop: main.o libclassloops.so
	$(CC) $(CFLAGS) -o maindloop main.o ./libclassloops.so -lm
#make maindrec:
maindrec: main.o libclassrec.so
	$(CC) $(CFLAGS) -o maindrec main.o ./libclassrec.so -lm
#make loops:
advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	$(CC) $(CFLAGS) -c advancedClassificationLoop.c -lm
loops:libclassloops.a
libclassloops.a: $(OBJECTS_LOOP)
	$(AR) -rcs libclassloops.a $(OBJECTS_LOOP)
#make recursives:
basicClassification.o: basicClassification.c NumClass.h
	$(CC) $(CFLAGS) -c basicClassification.c -lm
advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	$(CC) $(CFLAGS) -c advancedClassificationRecursion.c -lm
recursives:libclassrec.a
libclassrec.a: $(OBJECTS_REC)
	$(AR) -rcs libclassrec.a $(OBJECTS_REC)
#make recursived:
recursived:libclassrec.so
libclassrec.so: $(OBJECTS_REC)
	$(CC) -shared -o libclassrec.so $(OBJECTS_REC)
#make loopd:
loopd:libclassloops.so
libclassloops.so: $(OBJECTS_LOOP) NumClass.h
	$(CC) -shared -o libclassloops.so $(OBJECTS_LOOP)

.PHONY: clean all

clean:
	rm -f *.o *.a *.so mains maindrec maindloop