/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EDEAC49161229901EB8D9B8C8E8B4F07B42DC317D54D49C6AA87C70621FF22BC
 * Entry: 0x002a82a0, Ghidra index: 9611, label: FUN_002a82a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002a82a0(void)

{
  /* Guest register inputs: ESI=reader and EDI=destination (host ABI unverified).
   * The original reads two separate single-byte header stack locations,
   * then processes a four-byte value and a 4-byte payload per entry.
   * Opcode widths/stack operands are checked by verify_002a82xx_io.py. */
  int *unaff_ESI;
  int *unaff_EDI;
  uint8_t guest_header_byte_a;
  uint8_t guest_header_byte_b;

  (**(code **)(*unaff_EDI + 0xc))();
  (**(code **)(*unaff_ESI + 0x10))(unaff_ESI,&guest_header_byte_a,1,0);
  (**(code **)(*unaff_EDI + 0x34))(unaff_EDI,(uint32_t)guest_header_byte_a);
  (**(code **)(*unaff_ESI + 0x10))(unaff_ESI,&guest_header_byte_b,1,0);

  for (uint8_t index = 0; index < guest_header_byte_b; index++) {
    uint32_t guest_payload_a;
    uint32_t guest_payload_b;
    (**(code **)(*unaff_ESI + 0x10))(unaff_ESI,&guest_payload_a,4,0);
    (**(code **)(*unaff_ESI + 0x10))(unaff_ESI,&guest_payload_b,4,0);
    (**(code **)(*unaff_EDI + 0x14))(unaff_EDI,guest_payload_a,&guest_payload_b);
  }
  return;
}
