################OPTION###################
CCOMPILE   = gcc
CPPCOMPILE = g++

COMPILEOPTION = -g -Wno-write-strings
INCLUDEDIR =
LIBHOME = 
LINK = $(CPPCOMPILE)
LINKOPTION = -g
LIBS = 
LIBDIRS =  
OBJS = wtime.o ParseFile.o ParallelSWAlgorithm.o ParaSWProcessorSet.o ParaSWProblem.o ParaSWPath.o ParaSWParam.o ParaSWGlobalMemory.o ParallelSW.o Debug.o 
OUTPUT = ./parasw
################OPTION END################
$(OUTPUT):$(OBJS)
	$(LINK) $(OBJS) $(LINKOPTION) -o $(OUTPUT) $(LIBS) $(LIBDIRS) 

clean: 
	rm -f $(OBJS) $(OUTPUT)

all: clear $(OUTPUT)
.SUFFIXES:
.SUFFIXES:  .c .o .cpp

.cpp.o:
	 $(CPPCOMPILE) -c $(COMPILEOPTION) $(INCLUDEDIR)  $<

.c.o:
	$(CCOMPILE) -c $(COMPILEOPTION) $(INCLUDEDIR) $<
