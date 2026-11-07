/* Brute Force retail Xbox original x86 entry: FUN_002e7580, 0x002E7580.
 * Input x86 body SHA-256: 205EC72C6826C01320D87261F17580333696C778127427C642D63532DBCCC1F2
 * STATUS: CPP_DRAFT, ABI_UNVERIFIED, CROSS_FUNCTION_UNVERIFIED,
 *         NOT_NATIVE_LINKED, NOT_BEHAVIOR_TESTED.
 * The explicit host inputs model original live x86 register/stack words
 * (ECX initial guest address; original EAX is a copy), not recovered Xbox C++ parameters. Native guest-memory mapping,
 * stack/register ABI, faults and linkage remain ABI_UNVERIFIED.
 * Exact original per-byte and per-DWORD write order, including values -1.
 */
#include "bf_xbe_guest32_record_model.h"

std::uint32_t FUN_002e7580(std::uint32_t guest_ecx)
{
    const std::uint32_t base = guest_ecx;
    bf_guest_write_u8(base + UINT32_C(7), UINT8_C(0));
    bf_guest_write_u8(base + UINT32_C(8), UINT8_C(0));
    bf_guest_write_u8(base + UINT32_C(5), UINT8_C(0));
    bf_guest_write_u32(base, UINT32_C(0x003868c8));
    bf_guest_write_u8(base + UINT32_C(6), UINT8_C(0xff));
    for (std::uint32_t offset = UINT32_C(0x14); offset <= UINT32_C(0x20); offset += UINT32_C(4))
        bf_guest_write_u32(base + offset, UINT32_C(0));
    bf_guest_write_u32(base + UINT32_C(0x0c), UINT32_MAX);
    bf_guest_write_u32(base + UINT32_C(0x10), UINT32_MAX);
    return base;
}
