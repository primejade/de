# pterm - simple terminal
# See LICENSE file for copyright and license details.
.POSIX:

include config.mk

#SRC = pterm.c x.c
SRC = pterm.c x.c hb.c
OBJ = $(SRC:.c=.o)

all: options pterm

options:
	@echo pterm build options:
	@echo "CFLAGS  = $(STCFLAGS)"
	@echo "LDFLAGS = $(STLDFLAGS)"
	@echo "CC      = $(CC)"

config.h:
	cp config.def.h config.h

.c.o:
	$(CC) $(STCFLAGS) -c $<

pterm.o: config.h pterm.h win.h
#x.o: arg.h config.h pterm.h win.h
x.o: arg.h config.h pterm.h win.h hb.h
hb.o: pterm.h

$(OBJ): config.h config.mk

pterm: $(OBJ)
	$(CC) -o $@ $(OBJ) $(STLDFLAGS)

clean:
	rm -f pterm $(OBJ) pterm-$(VERSION).tar.gz

dist: clean
	mkdir -p pterm-$(VERSION)
	cp -R FAQ LEGACY TODO LICENSE Makefile README config.mk\
		config.def.h pterm.info pterm.1 arg.h pterm.h win.h $(SRC)\
		pterm-$(VERSION)
	tar -cf - pterm-$(VERSION) | gzip > pterm-$(VERSION).tar.gz
	rm -rf pterm-$(VERSION)

install: pterm
	mkdir -p $(DESTDIR)$(PREFIX)/bin
	cp -f pterm $(DESTDIR)$(PREFIX)/bin
	chmod 755 $(DESTDIR)$(PREFIX)/bin/pterm
	mkdir -p $(DESTDIR)$(MANPREFIX)/man1
	sed "s/VERSION/$(VERSION)/g" < pterm.1 > $(DESTDIR)$(MANPREFIX)/man1/pterm.1
	chmod 644 $(DESTDIR)$(MANPREFIX)/man1/pterm.1
	tic -sx pterm.info
	@echo Please see the README file regarding the terminfo entry of pterm.

uninstall:
	rm -f $(DESTDIR)$(PREFIX)/bin/pterm
	rm -f $(DESTDIR)$(MANPREFIX)/man1/pterm.1

.PHONY: all options clean dist install uninstall
