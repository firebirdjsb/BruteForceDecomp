/* Brute Force original Xbox entry 0x001d6710, FUN_001d6710.
 * Input x86 body SHA-256: D06442E6CB2A1811303BC779CE025269F9C060A59185F5D42CB5833C0F0560BE
 * STATUS: CPP_DRAFT, ABI_UNVERIFIED, NOT_NATIVE_LINKED,
 *         CROSS_FUNCTION_UNVERIFIED, NOT_BEHAVIOR_TESTED.
 * Explicit 32-bit guest register/stack and incoming DF model, NOT a recovered
 * C++ signature. Original EFLAGS, guest memory faults, stack and register
 * preservation require a complete x86 ABI implementation before linkage.
 * Original REP MOVSD reads/writes occur individually with DF-dependent order.
 */
#include "bf_xbe_guest32_record_model.h"

void FUN_001d6710(std::uint32_t guest_begin, std::uint32_t guest_end,
                  std::uint32_t guest_dst_end, std::uint32_t guest_eax,
                  bool guest_df)
{
    std::uint32_t src = guest_end;
    std::uint32_t dst = guest_dst_end;
    while (src != guest_begin) {
        src -= UINT32_C(0x18);
        dst -= UINT32_C(0x18);
        std::uint32_t esi = src;
        std::uint32_t edi = dst;
        // Original ECX=6, REP MOVSD: one guest DWORD read/write per move.
        for (int i = 0; i < 6; ++i) {
            const std::uint32_t value = bf_guest_read_u32(esi);
            bf_guest_write_u32(edi, value);
            esi += guest_df ? UINT32_C(0xfffffffc) : UINT32_C(4);
            edi += guest_df ? UINT32_C(0xfffffffc) : UINT32_C(4);
        }
    }
    bf_guest_write_u32(guest_eax, dst);
}
