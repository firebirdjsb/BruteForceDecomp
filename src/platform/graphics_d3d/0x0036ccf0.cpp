/* Brute Force original Xbox - ordered guest command model.
 * Input x86 body SHA-256: 84892FD91701A334D23318907B5952C91002DDE988022EE5BC07894CCCC2F0CE
 * Entry: 0x0036ccf0, Ghidra index: 13285, label: D3DDevice_SetVertexData4f_16
 * STATUS: GUEST32_MODEL, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Guest EDI index and four stack DWORDs. Returns EAX at RET 0x10.
 */
#include "bf_d3d_guest_command_cursor.h"
#include "bf_ghidra_types.h"

// Source-matched C++17 declarations for original direct calls. Xbox ABI_UNVERIFIED.
extern uint D3D8LTCG__D3D_MakeRequestedSpace_8(int param_1,int param_2);

uint32_t D3D8LTCG__D3DDevice_SetVertexData4f_16(uint32_t guest_edi, uint32_t word0,
                                              uint32_t word1, uint32_t word2, uint32_t word3)
{
    const uint32_t device = bf_guest_read_u32(0x0037dd88u);
    uint32_t cursor = bf_guest_read_u32(device);
    if (cursor >= bf_guest_read_u32(device + 4u)) {
        const uint32_t request = bf_guest_read_u32(0x0037ec88u);
        cursor = D3D8LTCG__D3D_MakeRequestedSpace_8(
            static_cast<int>(request >> 1), bf_d3d_guest_signed_dword(request));
    }

    const uint32_t method = guest_edi == 0xffffffffu ? 0x1518u : (guest_edi + 0x1a0u) << 4;
    bf_guest_write_u32(cursor, 0x100000u + method);
    bf_guest_write_u32(cursor + 4u, word0);
    bf_guest_write_u32(cursor + 8u, word1);
    bf_guest_write_u32(cursor + 12u, word2);
    bf_guest_write_u32(cursor + 16u, word3);
    cursor += 20u;
    bf_guest_write_u32(device, cursor);
    return cursor;
}
