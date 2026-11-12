#ifndef BF_00077EB0_CONVERSION_OPERATION_H
#define BF_00077EB0_CONVERSION_OPERATION_H
/* Bounded captured-word operation for original 0x00077eb0. Body SHA-256:
 * 8BAE330E7B50ADB10BCF5AD34FC3509582B231AEFF270E5F7550654F10706160.
 * GNU/Clang native x86 SSE + x87 only; no C++ FP conversion or math fallback.
 * kind 1 writes four raw bytes; kind 2 writes CVTTSS2SI's four result bytes;
 * kind 3 writes one boolean byte; other kinds write nothing (output may be null).
 * output is writable byte storage of that extent; byte-unaligned storage is valid.
 * kind/raw_word are snapshotted inputs. Guest object/stack mapping and aliasing
 * before those captures are not implemented here. Faults/MMIO/concurrent memory
 * observers, guest EFLAGS/register/RET 8 transport and FIP/FDP/FOP are excluded.
 * For kind 2, all MXCSR exceptions must be masked. For kind 3, all x87 exceptions
 * must be masked and the next push destination ((TOP - 1) mod 8) must be empty.
 * Kind 3 additionally assumes original threshold memory at 0x003a4fb8 still
 * contains image word 0x358637bd. Its immutability is not proved; runtime patching
 * or mutation of that threshold is outside this fixed-threshold operation.
 * The returned DWORD models final EAX's value only, not a native guest ABI.
 */
#if !(defined(__i386__) || defined(__x86_64__)) || !(defined(__GNUC__) || defined(__clang__)) || !defined(__SSE__)
#error "00077eb0 requires GNU/Clang native x86 SSE and x87"
#endif
#ifdef __FAST_MATH__
#error "00077eb0 must not be built with fast math"
#endif
#include <cstdint>
static inline std::uint32_t bf_00077eb0_conversion_operation(
    std::uint32_t kind, std::uint32_t raw_word, void *output_bytes)
{
    switch (kind) {
    case 1:
        __asm__ volatile("movl %1, (%0)" : : "r"(output_bytes), "r"(raw_word) : "memory");
        return raw_word;
    case 2: {
        std::uint32_t result;
        __asm__ volatile("cvttss2sil %1, %0\n\tmovl %0, (%2)"
                         : "=&r"(result) : "m"(raw_word), "r"(output_bytes) : "memory");
        return result;
    }
    case 3: {
        // Proven little-endian bytes bd 37 86 35 at program address 0x003a4fb8.
        const std::uint32_t threshold_word = UINT32_C(0x358637bd);
        std::uint16_t status;
        __asm__ volatile("flds %1\n\tfabs\n\tfcomps %2\n\tfnstsw %%ax"
                         : "=a"(status) : "m"(raw_word), "m"(threshold_word) : "st", "memory");
        // TEST AH,5 + JP selects 1 for unordered/equal/greater, 0 only for less.
        const std::uint32_t result = (status & UINT16_C(0x0500)) == UINT16_C(0x0100) ? 0u : 1u;
        *static_cast<unsigned char *>(output_bytes) = static_cast<unsigned char>(result);
        return result;
    }
    default:
        return kind - UINT32_C(3);
    }
}
#endif
