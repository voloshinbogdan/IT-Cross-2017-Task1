         SOURCES  := DerivatorApp.cpp
override CPPFLAGS += -MMD -MP -I ../DerivatorLib
         OUTPATH  :=_out/
override LDFLAGS  +=-L $(OUTPATH)

.PHONY: clean

vpath %.d $(OUTPATH)
vpath %.o $(OUTPATH)
vpath %.a $(OUTPATH)

all: $(OUTPATH)Derivator | _out

$(OUTPATH)Derivator: $(SOURCES:%.cpp=$(OUTPATH)%.o) | _out
	$(CXX) $(LDFLAGS) -o $@ $^ -lDerivator

$(OUTPATH)%.o: %.cpp | _out
	${CXX} ${CPPFLAGS} ${CXXFLAGS} -c -o $@ $<

_out:
	mkdir -p $(OUTPATH)

clean:
	rm -rf $(OUTPATH)

-include $(SOURCES:%.cpp=%.d)