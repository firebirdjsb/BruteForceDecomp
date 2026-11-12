/* Brute Force original Xbox entry 0x001d66d0, FUN_001d66d0.
 * Input x86 body SHA-256: EC7290227BA0D8B797B8ED945A8B2F7DA8CAD960440670B44B734A8AB8EB8097
 * STATUS: CPP_DRAFT, ABI_UNVERIFIED, NOT_NATIVE_LINKED,
 *         CROSS_FUNCTION_UNVERIFIED, NOT_BEHAVIOR_TESTED.
 * Explicit 32-bit guest register/stack and incoming DF model, NOT a recovered
 * C++ signature. Original EFLAGS, guest memory faults, stack and register
 * preservation require a complete x86 ABI implementation before linkage.
 * Original REP MOVSD reads/writes occur individually with DF-dependent order.
 */
#include "bf_xbe_guest32_record_model.h"

void FUN_001d66d0(std::uint32_t guest_begin, std::uint32_t guest_end,
                  std::uint32_t guest_dst_end, std::uint32_t guest_eax,
                  bool guest_df)
{
    std::uint32_t src = guest_end;
    std::uint32_t dst = guest_dst_end;
    while (src != guest_begin) {
        src -= UINT32_C(0x20);
        dst -= UINT32_C(0x20);
        std::uint32_t esi = src;
        std::uint32_t edi = dst;
        // Original ECX=8, REP MOVSD: one guest DWORD read/write per move.
        for (int i = 0; i < 8; ++i) {
            const std::uint32_t value = bf_guest_read_u32(esi);
            bf_guest_write_u32(edi, value);
            esi += guest_df ? UINT32_C(0xfffffffc) : UINT32_C(4);
            edi += guest_df ? UINT32_C(0xfffffffc) : UINT32_C(4);
        }
    }
    bf_guest_write_u32(guest_eax, dst);
}
