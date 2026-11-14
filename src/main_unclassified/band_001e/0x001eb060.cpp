/* Brute Force original Xbox - guest32 register and memory model.
 * Input x86 body SHA-256: A48461E76CAB08D93A3DC89FCDB119355B51D94704F330866C9F8389158189CA
 * Entry: 0x001eb060, Ghidra index: 6875, label: FUN_001eb060
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 */
#include "bf_xbe_guest32_record_leaves.h"

void FUN_001eb060(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;
    constexpr std::uint32_t entry = 0x001eb060u;
    constexpr std::uint32_t records = 0x004071d8u;
    guest.eax = read32(guest, entry, records);
    guest.ecx = 0u;
    logic_flags(guest, guest.eax);
    push(guest, entry + 9u, guest.esi);

    if (guest.eax != 0u) {
        do {
            const std::uint32_t slot = records + guest.ecx * 8u;
            const auto key = read32(guest, entry + 0x10u, slot + 4u);
            bf_guest32_leaf_sub(guest, key, guest.edx);
            if (key == guest.edx) {
                guest.eax = read32(guest, entry + 0x27u, slot);
                break;
            }
            guest.esi = read32(guest, entry + 0x19u, slot + 8u);
            increment(guest, guest.ecx);
            logic_flags(guest, guest.esi);
            if (guest.esi == 0u) {
                guest.esi = pop(guest, entry + 0x25u);
                ret(guest, entry + 0x26u);
                return;
            }
        } while (true);
    }

    guest.esi = pop(guest, entry + 0x2eu);
    ret(guest, entry + 0x2fu);
}
