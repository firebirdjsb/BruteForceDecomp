#ifndef BF_0023C0E0_STORAGE_OPERATION_H
#define BF_0023C0E0_STORAGE_OPERATION_H
/* Bounded host operation for original 0x0023c0e0. Original body digest:
 * 5E5BB17FE34459DC784761E327D05E19B70925A191BC5665096D992CE7496333.
 * Requires GNU/Clang native x86 x87, with all exceptions masked and the next
 * push destination ((TOP - 1) mod 8) empty in the x87 tag word. No C++ floating conversion or numerical fallback.
 * output must have the selected path's accessible writable byte extent (0,1,
 * 4,8,12,16). Unaligned byte storage is supported by explicit x87 stores.
 * Input words are already captured by value. No guest32 mapping, original
 * register/stack ABI, integer EFLAGS, unmasked traps or memory-fault recovery.
 */
#if !(defined(__i386__) || defined(__x86_64__)) || !(defined(__GNUC__) || defined(__clang__))
#error "0023c0e0 requires GNU/Clang native x86 x87"
#endif
#ifdef __FAST_MATH__
#error "0023c0e0 must not be built with fast math"
#endif
#include <cstdint>
#include <cstring>
static inline void bf_0023c0e0_store_one(std::uint32_t word, unsigned char *output)
{
    __asm__ volatile("fildl %1\n\tfstps (%0)" : : "r"(output), "m"(word) : "st", "memory");
}
static inline void bf_0023c0e0_store_pair(std::uint32_t word, unsigned char *output)
{
    __asm__ volatile("fildl %1\n\tfsts 4(%0)\n\tfstps (%0)"
                     : : "r"(output), "m"(word) : "st", "memory");
}
static inline std::uint32_t bf_0023c0e0_storage_operation(
    std::uint32_t word, std::uint32_t selector, void *output_bytes)
{
    auto *output = static_cast<unsigned char *>(output_bytes);
    switch (selector) {
    case UINT32_C(0xeee373be):
        output[0] = static_cast<unsigned char>(word);
        break;
    case UINT32_C(0xeda5d734):
        std::memcpy(output, &word, sizeof word);
        break;
    case UINT32_C(0x00a38d8e):
        bf_0023c0e0_store_one(word, output);
        break;
    case UINT32_C(0x1d3e389e):
        bf_0023c0e0_store_one(word, output + 12);
        bf_0023c0e0_store_one(word, output + 8);
        bf_0023c0e0_store_pair(word, output);
        break;
    case UINT32_C(0xf95aad3d):
        bf_0023c0e0_store_one(word, output + 8);
        bf_0023c0e0_store_pair(word, output);
        break;
    case UINT32_C(0xf05d9dab):
        bf_0023c0e0_store_pair(word, output);
        break;
    default:
        break;
    }
    return (selector & UINT32_C(0xffffff00)) | UINT32_C(1);
}
#endif
