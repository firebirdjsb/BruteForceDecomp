/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 42EABDC3481101CE82F0F982223850BDD669F84B1591DD745E41A2F54EA88791
 * Entry: 0x0015bc10, Ghidra index: 4539, label: FUN_0015bc10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039ac30;
extern uint32_t PTR_LAB_0039ac50;
void FUN_0015bc10(void)

{
  int unaff_EBX;
  undefined4 *unaff_ESI;
  
  unaff_ESI[1] = 0;
  unaff_ESI[2] = 0;
  unaff_ESI[3] = 0;
  unaff_ESI[4] = 0;
  unaff_ESI[5] = 1;
  *unaff_ESI = &PTR_LAB_0039ac50;
  unaff_ESI[6] = &PTR_LAB_0039ac30;
  unaff_ESI[10] = 0;
  unaff_ESI[0xe] = 0;
  unaff_ESI[0xf] = 0;
  unaff_ESI[0x10] = 0;
  unaff_ESI[0x11] = 0;
  unaff_ESI[0x12] = 0;
  unaff_ESI[0x13] = 0;
  FUN_00110c60();
  unaff_ESI[0x24] = 0;
  unaff_ESI[0x25] = 0;
  unaff_ESI[0x26] = 0;
  unaff_ESI[0x2b] = 0;
  unaff_ESI[0x2c] = 0;
  unaff_ESI[0x2e] = 0;
  unaff_ESI[0x2f] = 0;
  unaff_ESI[0x30] = 0;
  unaff_ESI[0x32] = 0;
  unaff_ESI[0x33] = 0;
  unaff_ESI[0x34] = 0;
  unaff_ESI[0x36] = 0;
  unaff_ESI[0x37] = 0;
  unaff_ESI[0x38] = 0;
  unaff_ESI[0x39] = 0;
  unaff_ESI[0x3e] = 0;
  unaff_ESI[0x3f] = 0;
  unaff_ESI[0x40] = 0;
  unaff_ESI[0x42] = 0;
  unaff_ESI[0x43] = 0;
  unaff_ESI[0x44] = 0;
  unaff_ESI[0x46] = 0;
  unaff_ESI[0x47] = 0;
  unaff_ESI[0x48] = 0;
  unaff_ESI[0x4a] = 0;
  unaff_ESI[0x4b] = 0;
  unaff_ESI[0x4c] = 0;
  unaff_ESI[0x4e] = 0;
  unaff_ESI[0x4f] = 0;
  unaff_ESI[0x50] = 0;
  unaff_ESI[0x53] = 0xffc00000;
  unaff_ESI[0x55] = 0;
  unaff_ESI[0x56] = 0;
  unaff_ESI[0x57] = 0;
  unaff_ESI[0x5c] = 0;
  unaff_ESI[0x5d] = 0;
  unaff_ESI[0x5e] = 0;
  unaff_ESI[0x60] = 0;
  unaff_ESI[0x61] = 0;
  unaff_ESI[0x62] = 0;
  unaff_ESI[0x73] = 0;
  unaff_ESI[0xb] = 0;
  unaff_ESI[0xc] = 0;
  unaff_ESI[7] = 1;
  unaff_ESI[8] = unaff_EBX;
  *(byte *)(unaff_ESI + 9) = *(byte *)(unaff_ESI + 9) & 0xea;
  if (unaff_EBX != 0) {
    FUN_000d61a0(unaff_EBX);
  }
  return;
}
