#include <lld/Driver/Driver.h>

int main() {
    std::vector<const char *> Args = {
        "ld",
        "test.o",
        "-o",
        "test"
    };
    lld::elf::link(Args, false);
    return 0;
}
