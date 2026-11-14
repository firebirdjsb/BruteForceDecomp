/* Brute Force original Xbox - guest32 register and memory model.
 * Input x86 body SHA-256: 90E019EDD1630FAE19D0A6D9246F6264FDB7E3989EA841EAA50B0D430010C5BB
 * Entry: 0x0013b770, Ghidra index: 3988, label: FUN_0013b770
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 */
#include "bf_xbe_guest32_record_leaves.h"

void FUN_0013b770(bf_guest32_constructor_state& guest)
{
    using namespace bf_guest32_constructor;
    constexpr std::uint32_t entry = 0x0013b770u;

    guest.eip = entry;
    const std::uint8_t first = bf_guest_read_u8(guest.eax + 0x1cu);
    guest.edx = (guest.edx & 0xffffff00u) | 0xfeu;
    const auto masked = static_cast<std::uint8_t>(first & 0xfeu);
    guest.ecx = (guest.ecx & 0xffffff00u) | masked;
    logic_flags(guest, masked, 0x80u);
    write8(guest, entry + 7u, guest.eax + 0x1cu, masked);
    guest.ecx = 0u;
    logic_flags(guest, guest.ecx);
    write32(guest, entry + 0xcu, guest.eax + 0x18u, guest.ecx);
    write32(guest, entry + 0xfu, guest.eax + 4u, guest.ecx);
    write32(guest, entry + 0x12u, guest.eax + 8u, guest.ecx);
    write32(guest, entry + 0x15u, guest.eax + 0x14u, guest.ecx);
    write32(guest, entry + 0x18u, guest.eax + 0x10u, guest.ecx);
    write32(guest, entry + 0x1bu, guest.eax + 0xcu, guest.ecx);

    guest.eip = entry + 0x1eu;
    const auto field = static_cast<std::uint8_t>(bf_guest_read_u8(guest.eax + 0x1cu) & 0xc1u);
    write8(guest, entry + 0x1eu, guest.eax + 0x1cu, field);
    logic_flags(guest, field, 0x80u);
    write32(guest, entry + 0x22u, guest.eax + 0x38u, guest.ecx);

    guest.eip = entry + 0x25u;
    const auto status = static_cast<std::uint8_t>(bf_guest_read_u8(guest.eax + 0x35u) & 0xfeu);
    write8(guest, entry + 0x25u, guest.eax + 0x35u, status);
    logic_flags(guest, status, 0x80u);
    write8(guest, entry + 0x28u, guest.eax + 0x36u, 0u);
    write8(guest, entry + 0x2bu, guest.eax + 0x34u, 1u);
    write32(guest, entry + 0x2fu, guest.eax + 0x20u, guest.ecx);
    write32(guest, entry + 0x32u, guest.eax + 0x24u, guest.ecx);
    write32(guest, entry + 0x35u, guest.eax + 0x28u, 0x42480000u);
    write32(guest, entry + 0x3cu, guest.eax + 0x2cu, guest.ecx);
    write32(guest, entry + 0x3fu, guest.eax + 0x30u, guest.ecx);
    write32(guest, entry + 0x42u, guest.eax, 0x0039c730u);
    write32(guest, entry + 0x48u, guest.eax + 0x3cu, 0x3f800000u);
    ret(guest, entry + 0x4fu);
}
