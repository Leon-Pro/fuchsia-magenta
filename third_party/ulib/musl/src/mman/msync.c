#include "syscall.h"
#include <sys/mman.h>

int msync(void* start, size_t len, int flags) {
    return syscall(SYS_msync, start, len, flags);
}
