// Authored deterministic primitive fixture. No original game code is executed.
#include <cstdint>
#include <cstddef>
#include <cstdio>
#include <cstring>
#include <new>
#include <sys/mman.h>
#include <unistd.h>
#include "bf_ghidra_types.h"
extern undefined8 FUN_00377780(void);
extern undefined4 XAPILIB__QueryPerformanceCounter(undefined4 *);
extern "C" {
std::uint32_t bf_timestamp_fixture_low = 0;
std::uint32_t bf_timestamp_fixture_high = 0;
std::uint32_t bf_timestamp_fixture_reads = 0;
}
static std::uint64_t random_state = UINT64_C(0x3cc05bf19a8276ed);
static std::uint32_t next_word() {
    random_state ^= random_state << 13;
    random_state ^= random_state >> 7;
    random_state ^= random_state << 17;
    return static_cast<std::uint32_t>(random_state);
}
static bool check(std::uint32_t low, std::uint32_t high, std::uint32_t *out) {
    bf_timestamp_fixture_low = low;
    bf_timestamp_fixture_high = high;
    bf_timestamp_fixture_reads = 0;
    const std::uint64_t value = FUN_00377780();
    if (bf_timestamp_fixture_reads != 1 || static_cast<std::uint32_t>(value) != low ||
        static_cast<std::uint32_t>(value >> 32) != high) return false;
    bf_timestamp_fixture_reads = 0;
    out[0] = ~low; out[1] = ~high;
    const std::uint32_t status = XAPILIB__QueryPerformanceCounter(out);
    return status == 1 && bf_timestamp_fixture_reads == 1 && out[0] == low && out[1] == high;
}
int main(int argc, char **argv) {
    if (argc == 2 && std::strcmp(argv[1], "--misaligned") == 0) {
        // Intentional invalid-contract fixture, run only expecting UBSan rejection.
        alignas(8) unsigned char storage[16] = {};
        auto misaligned = reinterpret_cast<std::uint32_t *>(storage + 1);
        (void)XAPILIB__QueryPerformanceCounter(misaligned);
        return 0;
    }
    static_assert(sizeof(undefined4) == 4 && alignof(undefined4) == 4);
    const std::uint32_t edges[] = {0, 1, 0x7fffffffU, 0x80000000U, 0xfffffffeU,
                                   0xffffffffU, 0x55555555U, 0xaaaaaaaaU, 0x12345678U, 0x89abcdefU};
    alignas(64) std::uint32_t arena[40];
    unsigned cases = 0;
    for (unsigned offset = 1; offset <= 16; ++offset) {
        for (unsigned i = 0; i < 164; ++i) {
            const std::uint32_t low = i < 100 ? edges[i / 10] : next_word();
            const std::uint32_t high = i < 100 ? edges[i % 10] : next_word();
            for (auto &word : arena) word = 0xdecafbadU;
            if (!check(low, high, &arena[offset])) return 1;
            for (unsigned j = 0; j < 40; ++j)
                if ((j < offset || j >= offset + 2) && arena[j] != 0xdecafbadU) return 2;
            ++cases;
        }
    }
    // Exact two-object span. ASan rejects C++ loads/stores outside this array.
    auto exact = new std::uint32_t[2];
    if (!check(0xffffffffU, 0x80000000U, exact)) return 3;
    delete[] exact;
    // Guards catch wider boundary accesses in authored machine-code variants.
    const long page = sysconf(_SC_PAGESIZE);
    if (page <= 0) return 4;
    void *mapping = mmap(nullptr, static_cast<std::size_t>(page) * 3, PROT_NONE,
                         MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
    if (mapping == MAP_FAILED) return 5;
    auto middle = static_cast<unsigned char *>(mapping) + page;
    if (mprotect(middle, static_cast<std::size_t>(page), PROT_READ | PROT_WRITE) != 0) return 6;
    auto beginning = new (middle) std::uint32_t[2];
    auto ending = new (middle + page - sizeof(std::uint32_t[2])) std::uint32_t[2];
    if (!check(0x80000001U, 0x01234567U, beginning) ||
        !check(0x76543210U, 0xfedcba98U, ending)) return 7;
    if (munmap(mapping, static_cast<std::size_t>(page) * 3) != 0) return 8;
    std::printf("PASS %u controlled low/high transports; exact spans and all 4-byte alignments modulo 64\n", cases + 3);
}
