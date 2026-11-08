/* Brute Force retail Xbox FUN_00262c30, Input x86 body SHA-256: 722D6CADECA5061627806734652F82BB034D39FC1B7D3F879BFFACB0E693E838.
 * Six host guest parameters model the six original stack DWORDs (RET 24).
 * They do NOT establish the original Xbox C++ prototype or guest-stack ABI.
 * IMUL's signed high DWORD, SAR, unsigned JAE, and partial AL return are exact
 * instruction-level models; indirect guest-memory mapping remains unresolved.
 * STATUS: CPP_DRAFT, ABI_UNVERIFIED, NOT_NATIVE_LINKED, NOT_BEHAVIOR_TESTED.
 */
#include "bf_xbe_guest32_record_model.h"

static std::int64_t bf_00262c30_signed32(std::uint32_t bits)
{
    return bits < UINT32_C(0x80000000) ? static_cast<std::int64_t>(bits)
         : static_cast<std::int64_t>(bits) - INT64_C(0x100000000);
}

std::uint32_t FUN_00262c30(std::uint32_t guest_record, std::uint32_t guest_index,
                           std::uint32_t word_0, std::uint32_t word_1,
                           std::uint32_t word_2, std::uint32_t word_3)
{
    std::uint32_t eax = bf_guest_read_u32(guest_record + UINT32_C(0x1c));
    if (eax == 0) return eax & UINT32_C(0xffffff00); // original XOR AL,AL.
    const std::uint32_t end = bf_guest_read_u32(guest_record + UINT32_C(0x20));
    const std::uint32_t delta = end - eax;
    const std::int64_t product = bf_00262c30_signed32(delta) * INT64_C(0x66666667);
    std::uint32_t edx = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32);
    // Original SAR EDX,3, implemented with unsigned words and explicit sign fill.
    edx = (edx >> 3) | ((edx & UINT32_C(0x80000000)) ? UINT32_C(0xe0000000) : 0);
    const std::uint32_t carry_sign = edx >> 31;
    edx += carry_sign;
    eax = guest_index; // original MOV EAX,[ESP+0xC], before unsigned JAE.
    if (eax >= edx) return eax & UINT32_C(0xffffff00);
    // Original repeated base read is important under guest-address aliasing.
    const std::uint32_t base = bf_guest_read_u32(guest_record + UINT32_C(0x1c));
    eax = base + guest_index * UINT32_C(20);
    bf_guest_write_u32(eax, word_0);
    bf_guest_write_u32(eax + UINT32_C(4), word_1);
    bf_guest_write_u32(eax + UINT32_C(8), word_2);
    bf_guest_write_u32(eax + UINT32_C(12), word_3);
    // Original MOV AL,1 preserves bits 8..31 of guest EAX.
    return (eax & UINT32_C(0xffffff00)) | UINT32_C(1);
}
