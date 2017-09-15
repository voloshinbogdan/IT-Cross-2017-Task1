         SOURCES  := DerivatorLib.cpp
override CPPFLAGS += -MMD -MP
         OUTPATH  :=_out/

.PHONY: clean

vpath %.d $(OUTPATH)
vpath %.o $(OUTPATH)
vpath %.a $(OUTPATH)

all: $(OUTPATH)libDerivator.a | _out

$(OUTPATH)libDerivator.a: $(SOURCES:%.cpp=$(OUTPATH)%.o) | _out
	ar cr $@ $<

$(OUTPATH)%.o: %.cpp | _out
	${CXX} ${CPPFLAGS} ${CXXFLAGS} -c -o $@ $<

_out:
	mkdir -p $(OUTPATH)

clean:
	rm -rf $(OUTPATH)

-include $(SOURCES:%.cpp=%.d)