# sterm - simple terminal
# See LICENSE file for copyright and license details.
.POSIX:

include config.mk

#SRC = sterm.c x.c
SRC = sterm.c x.c hb.c
OBJ = $(SRC:.c=.o)

all: options sterm

options:
	@echo sterm build options:
	@echo "CFLAGS  = $(STCFLAGS)"
	@echo "LDFLAGS = $(STLDFLAGS)"
	@echo "CC      = $(CC)"

config.h: config.def.h
	cp config.def.h config.h

.c.o:
	$(CC) $(STCFLAGS) -c $<

sterm.o: config.h sterm.h win.h
#x.o: arg.h config.h sterm.h win.h
x.o: arg.h config.h sterm.h win.h hb.h
hb.o: sterm.h

$(OBJ): config.h config.mk

sterm: $(OBJ)
	$(CC) -o $@ $(OBJ) $(STLDFLAGS)

clean:
	rm -f sterm $(OBJ) sterm-$(VERSION).tar.gz

dist: clean
	mkdir -p sterm-$(VERSION)
	cp -R FAQ LEGACY TODO LICENSE Makefile README config.mk\
		config.def.h sterm.info sterm.1 arg.h sterm.h win.h $(SRC)\
		sterm-$(VERSION)
	tar -cf - sterm-$(VERSION) | gzip > sterm-$(VERSION).tar.gz
	rm -rf sterm-$(VERSION)

install: sterm
	mkdir -p $(DESTDIR)$(PREFIX)/bin
	cp -f sterm $(DESTDIR)$(PREFIX)/bin
	chmod 755 $(DESTDIR)$(PREFIX)/bin/sterm
	mkdir -p $(DESTDIR)$(MANPREFIX)/man1
	sed "s/VERSION/$(VERSION)/g" < sterm.1 > $(DESTDIR)$(MANPREFIX)/man1/sterm.1
	chmod 644 $(DESTDIR)$(MANPREFIX)/man1/sterm.1
	tic -sx sterm.info
	@echo Please see the README file regarding the terminfo entry of sterm.

uninstall:
	rm -f $(DESTDIR)$(PREFIX)/bin/sterm
	rm -f $(DESTDIR)$(MANPREFIX)/man1/sterm.1

.PHONY: all options clean dist install uninstall
