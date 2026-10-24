/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8064A3DFD9EF1BFE36118311119A804D6ACB2980E9F3008E5FC3D3330A6C54DF
 * Entry: 0x002a8070, Ghidra index: 9608, label: FUN_002a8070
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002a8070(void)

{
  /* Two disjoint guest header bytes at 0x002A808E/0x002A809D.
   * The loop writes one four-byte and one twelve-byte buffer:
   * the original PUSH 0x04 and PUSH 0x0C specify these widths. */
  int *unaff_ESI;
  int *unaff_EDI;
  uint8_t guest_header_byte_a = (uint8_t)(**(code **)(*unaff_ESI + 0x34))(unaff_ESI);
  uint8_t guest_header_byte_b = (uint8_t)(**(code **)(*unaff_ESI + 0x3c))(unaff_ESI);
  (**(code **)(*unaff_EDI + 0x14))(unaff_EDI,&guest_header_byte_a,1,0);
  (**(code **)(*unaff_EDI + 0x14))(unaff_EDI,&guest_header_byte_b,1,0);
  for (uint8_t i = 0; i < guest_header_byte_b; ++i) {
    uint32_t guest_payload_a;
    uint32_t guest_payload_b[3];
    (**(code **)(*unaff_ESI + 0x24))(unaff_ESI,i,&guest_payload_a);
    (**(code **)(*unaff_ESI + 0x28))(unaff_ESI,i,guest_payload_b);
    (**(code **)(*unaff_EDI + 0x14))(unaff_EDI,&guest_payload_a,4,0);
    (**(code **)(*unaff_EDI + 0x14))(unaff_EDI,guest_payload_b,12,0);
  }
  return;
}
