/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 105A749E47BE4E3570C84A23F119B857734540EB810FEA7AA5FEFE76C0A6469D
 * Entry: 0x002a7fe0, Ghidra index: 9607, label: FUN_002a7fe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002a7fe0(void)

{
  /* Original stack bytes at ESP+0x0f and ESP+0x0e are distinct
   * one-byte buffers (0x002A7FFE and 0x002A800D).  The loop
   * subsequently exchanges two distinct four-byte payload words. */
  int *unaff_ESI;
  int *unaff_EDI;
  uint8_t guest_header_byte_a = (uint8_t)(**(code **)(*unaff_ESI + 0x30))(unaff_ESI);
  uint8_t guest_header_byte_b = (uint8_t)(**(code **)(*unaff_ESI + 0x38))(unaff_ESI);
  (**(code **)(*unaff_EDI + 0x14))(unaff_EDI,&guest_header_byte_a,1,0);
  (**(code **)(*unaff_EDI + 0x14))(unaff_EDI,&guest_header_byte_b,1,0);
  for (uint8_t i = 0; i < guest_header_byte_b; ++i) {
    uint32_t guest_payload_a;
    uint32_t guest_payload_b;
    (**(code **)(*unaff_ESI + 0x20))(unaff_ESI,i,&guest_payload_a);
    (**(code **)(*unaff_ESI + 0x24))(unaff_ESI,i,&guest_payload_b);
    (**(code **)(*unaff_EDI + 0x14))(unaff_EDI,&guest_payload_a,4,0);
    (**(code **)(*unaff_EDI + 0x14))(unaff_EDI,&guest_payload_b,4,0);
  }
  return;
}
