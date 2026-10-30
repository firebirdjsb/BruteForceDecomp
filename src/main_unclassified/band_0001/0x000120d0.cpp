/* Brute Force 0x000120d0; Original body SHA-256: A64E91D3471A4FB7B85953214F39CA5876EC33002C6118E5540DA1D2A0FD8AF6
 * DRAFT: explicit guest EAX/ECX models, NOT the original native C++ ABI. */
#include "bf_xbe_guest32_record_model.h"

void BF_000120d0_C11_draft(std::uint32_t incoming_eax, std::uint32_t incoming_ecx)
{
    // XBE 000120D0..000120E7: ESI <- ECX; ECX <- [ESI+0x10]; ESI += 0xC.
    if (bf_guest_read_u32(incoming_ecx + UINT32_C(0x10)) != incoming_eax) {
        // PUSH EAX / CALL 0008F6A0 / ADD ESP,4. The callee also reads ESI.
        FUN_0008f6a0(incoming_ecx + UINT32_C(0xC), incoming_eax);
    }
}
