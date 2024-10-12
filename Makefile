SRCS = main.c $(wildcard vec3d/*.c)
OBJS := $(SRCS:.c=.o)
BUILDDIR ?= build
OBJS := $(addprefix $(BUILDDIR)/, $(OBJS))

INCLUDEDIRS := vec3d
CFLAGS ?= $(addprefix -I, $(INCLUDEDIRS))

program: $(OBJS)
	gcc $(CFLAGS) -o $@ $^

$(BUILDDIR)/%.o: %.c
	@mkdir -p $(dir $@)
	gcc $(CFLAGS) -c $^ -o $@

depend: $(SRCS)
	gcc $(CFLAGS) -MM $^ -o $@

clean:
	rm -rf $(BUILDDIR) program depend

include depend
.PHONY: clean
