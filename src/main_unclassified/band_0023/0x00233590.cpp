/* Brute Force original Xbox - bounded scalar SSE/x87 mapped-storage model.
 * Input x86 body SHA-256: D3066DA32F69FB3F4260B3EC0AE45A0D432EAFF6842D168D680295ED1947DBEF
 * Entry: 0x00233590, Ghidra index: 7784, label: FUN_00233590
 * STATUS: X86_OPERANDS_OBSERVED, ABI_UNVERIFIED, NOT_NATIVE_LINKED.
 */
#include "bf_00233_scalar_sse.h"
#include "bf_00233_sse_operations.h"

namespace {

uint32_t load_word(const unsigned char *source)
{
    uint32_t word;
    __builtin_memcpy(&word, source, sizeof(word));
    return word;
}

uint32_t x87_copy(const unsigned char *source)
{
    const uint32_t input = load_word(source);
    uint32_t word;
    __asm__ volatile("flds %1\n\tfstps %0" : "=m"(word) : "m"(input) : "memory");
    return word;
}

uint32_t root_argument(uint32_t first, uint32_t second)
{
    // 0x002335E0..0x002335F6 adds two x87 products before rounding to binary32.
    uint32_t word;
    __asm__ volatile("flds %2\n\tfmuls %2\n\tflds %1\n\tfmuls %1\n\t"
                     "faddp\n\tfstps %0"
                     : "=m"(word) : "m"(first), "m"(second) : "memory");
    return word;
}

bool small_or_unordered(uint32_t word)
{
    // 0x0023360B compares against the word at 0x003A5108 and tests AH & 0x41.
    const uint32_t threshold = 0x36000000u;
    uint16_t status;
    __asm__ volatile("flds %1\n\tfcomps %2\n\tfnstsw %%ax"
                     : "=a"(status) : "m"(word), "m"(threshold) : "memory");
    return (status & 0x4100u) != 0;
}

void store_atan(void *destination, uint32_t y, uint32_t x, unsigned signs)
{
    uint32_t word;
    // FLD y, FLD x, FPATAN is the observed stack order. The bit mask selects
    // the two original FCHS operations and the output is one m32fp store.
    __asm__ volatile(
        "flds %[y]\n\t"
        "testl $1, %[signs]\n\t"
        "jz 1f\n\t"
        "fchs\n\t"
        "1: flds %[x]\n\t"
        "testl $2, %[signs]\n\t"
        "jz 2f\n\t"
        "fchs\n\t"
        "2: fpatan\n\t"
        "fstps %[word]"
        : [word] "=m"(word)
        : [y] "m"(y), [x] "m"(x), [signs] "r"(signs)
        : "cc", "memory");
    __builtin_memcpy(destination, &word, sizeof(word));
}

} // namespace

void FUN_00233590(const void *eax_storage, void *esi_output, void *edx_output,
                  void *ecx_output, uint8_t bl)
{
    using namespace bf_00233_sse;
    const auto *input = static_cast<const unsigned char *>(eax_storage);
    // These original EAX-relative offsets are byte offsets into mapped storage.
    // The raw MOV at 0x00233597 and the FLD/FSTP pairs have distinct semantics.
    const uint32_t word_18 = x87_copy(input + 0x18);
    const uint32_t word_00 = load_word(input);
    const uint32_t word_0c = x87_copy(input + 0x0c);
    const uint32_t word_1c = x87_copy(input + 0x1c);
    const uint32_t word_10 = x87_copy(input + 0x10);
    const uint32_t word_20 = x87_copy(input + 0x20);
    const uint32_t word_14 = x87_copy(input + 0x14);

    const uint32_t root = capture_lane(square_root(load(root_argument(word_00, word_0c))));
    // Each path writes ESI, EDX, ECX in this order. Output addresses may alias.
    if (small_or_unordered(root)) {
        store_atan(esi_output, word_14, word_10, bl != 0 ? 2u : 1u);
        store_atan(edx_output, word_18, root, bl != 0 ? 2u : 1u);
        const uint32_t zero = 0;
        __builtin_memcpy(ecx_output, &zero, sizeof(zero));
    } else {
        store_atan(esi_output, word_1c, word_20, bl != 0 ? 2u : 0u);
        store_atan(edx_output, word_18, root, bl != 0 ? 3u : 1u);
        store_atan(ecx_output, word_0c, word_00, bl != 0 ? 2u : 0u);
    }
}
