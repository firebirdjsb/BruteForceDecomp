/* Brute Force original Xbox - ordered guest DWORD model.
 * Input x86 body SHA-256: 6566A182D87F809CE7D42A439BB20A82839B316B6EB40AD617A18E8E6425BD28
 * Entry: 0x00371240, Ghidra index: 13379, label: D3D_CommonSetDebugRegisters
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 */
#include "bf_ghidra_types.h"
#include "bf_xbe_guest32_record_model.h"

#include <cstring>

// Source-matched C++17 declarations for original direct calls. Xbox ABI_UNVERIFIED.
extern uint D3D8LTCG__D3D_MakeRequestedSpace_8(int param_1,int param_2);

uint32_t D3D8LTCG__D3D_CommonSetDebugRegisters(void)
{
    // 0x00371241: load the device address once. These are byte offsets.
    const uint32_t device = bf_guest_read_u32(0x0037dd88u);
    const uint32_t first = device + 0x1fc8u;
    const uint32_t second = device + 0x1fccu;

    const uint32_t first_cleared = bf_guest_read_u32(first) & 0xfffffff7u;
    bf_guest_write_u32(first, first_cleared);
    if (bf_guest_read_u32(0x0037e02cu) != 0)
        bf_guest_write_u32(first, first_cleared | 8u);

    const uint32_t second_cleared = bf_guest_read_u32(second) & 0xe7efffffu;
    bf_guest_write_u32(second, second_cleared);
    if (bf_guest_read_u32(0x0037e024u) != 0)
        bf_guest_write_u32(second, second_cleared | 0x00100000u);
    if (bf_guest_read_u32(0x0037e028u) != 0)
        bf_guest_write_u32(second, bf_guest_read_u32(second) | 0x08000000u);

    uint32_t cursor = bf_guest_read_u32(device);
    if (cursor >= bf_guest_read_u32(device + 4u)) {
        // 0x003712b3 pushes the full word, then 0x003712b4 shifts it logically.
        const uint32_t request = bf_guest_read_u32(0x0037ec88u);
        static_assert(sizeof(int) == sizeof(request));
        int request_bits;
        std::memcpy(&request_bits, &request, sizeof(request));
        cursor = D3D8LTCG__D3D_MakeRequestedSpace_8(static_cast<int>(request >> 1), request_bits);
    }

    // The register reloads at 0x003712c9 and 0x003712ef interleave with
    // command stores. Keep their order even if the guest addresses alias.
    bf_guest_write_u32(cursor, 0x00040110u);
    bf_guest_write_u32(cursor + 0x04u, 0u);
    const uint32_t first_command = bf_guest_read_u32(first);
    bf_guest_write_u32(cursor + 0x08u, 0x00081d8cu);
    bf_guest_write_u32(cursor + 0x0cu, 0x00400094u);
    bf_guest_write_u32(cursor + 0x10u, first_command);
    bf_guest_write_u32(cursor + 0x14u, 0x00040100u);
    bf_guest_write_u32(cursor + 0x18u, 9u);
    const uint32_t second_command = bf_guest_read_u32(second);
    bf_guest_write_u32(cursor + 0x1cu, 0x00081d8cu);
    bf_guest_write_u32(cursor + 0x20u, 0x00400b80u);
    bf_guest_write_u32(cursor + 0x24u, second_command);
    bf_guest_write_u32(cursor + 0x28u, 0x00040100u);
    bf_guest_write_u32(cursor + 0x2cu, 9u);
    cursor += 0x30u;
    bf_guest_write_u32(device, cursor);
    return cursor;  // EAX at the original RET, 0x00371316.
}
