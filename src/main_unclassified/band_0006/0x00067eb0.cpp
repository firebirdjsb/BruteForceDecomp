/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 15E23834F337D79A7FF9129D6ED6BE4BED6F1E8DB0E80CC9F8062F5C2029A7B1
 * Entry: 0x00067eb0, Ghidra index: 1145, label: FUN_00067eb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a2a18;
extern uint32_t _DAT_00469b34;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00067eb0(void)

{
  undefined4 *unaff_ESI;
  undefined8 uVar1;
  
  *unaff_ESI = PTR_LAB_003a2a18;
  _DAT_00469b34 = (int)unaff_ESI + 5;
  unaff_ESI[0x18] = 0;
  unaff_ESI[0x19] = 0;
  unaff_ESI[0x1a] = 0;
  unaff_ESI[0x1b] = 0;
  unaff_ESI[0x1c] = 0;
  unaff_ESI[0x1d] = 0;
  XAPILIB__QueryPerformanceFrequency(unaff_ESI + 0x1e);
  uVar1 = __alldiv(unaff_ESI[0x1e],unaff_ESI[0x1f],1000,0);
  *(undefined8 *)(unaff_ESI + 0x20) = uVar1;
  unaff_ESI[0x22] = 0;
  unaff_ESI[0x23] = 0;
  unaff_ESI[0x24] = 0;
  unaff_ESI[0x25] = 0;
  unaff_ESI[0x26] = 0;
  unaff_ESI[0x27] = 0;
  XAPILIB__QueryPerformanceFrequency(unaff_ESI + 0x28);
  uVar1 = __alldiv(unaff_ESI[0x28],unaff_ESI[0x29],1000,0);
  *(undefined8 *)(unaff_ESI + 0x2a) = uVar1;
  unaff_ESI[2] = 0;
  unaff_ESI[3] = 0;
  unaff_ESI[4] = 0x3f800000;
  unaff_ESI[5] = 0x3f800000;
  unaff_ESI[6] = 0x3f800000;
  unaff_ESI[7] = 0;
  unaff_ESI[8] = 0;
  *(byte *)(unaff_ESI + 1) = *(byte *)(unaff_ESI + 1) & 0xfd | 1;
  unaff_ESI[0xe] = 0;
  unaff_ESI[0xf] = 0;
  unaff_ESI[0x10] = 0;
  unaff_ESI[0x11] = 0;
  unaff_ESI[0x14] = 0;
  unaff_ESI[0x15] = 0;
  unaff_ESI[0x2c] = 0x3f800000;
  *(undefined1 *)(unaff_ESI + 0x16) = 1;
  unaff_ESI[0x12] = 0;
  unaff_ESI[0x13] = 0;
  unaff_ESI[0x2f] = 0;
  unaff_ESI[0x3a] = 0;
  unaff_ESI[0x3b] = 0;
  unaff_ESI[0x38] = 0;
  unaff_ESI[0x30] = 0;
  unaff_ESI[0x34] = 0x7f7fffff;
  unaff_ESI[0x32] = 0;
  unaff_ESI[0x33] = 0;
  unaff_ESI[0x36] = 0;
  unaff_ESI[0x37] = 0;
  unaff_ESI[0x2d] = 0;
  *(undefined1 *)(unaff_ESI + 0x2e) = 0;
  *(undefined1 *)((int)unaff_ESI + 0xb9) = 1;
  *(undefined1 *)(unaff_ESI + 0x3c) = 0;
  unaff_ESI[0x3d] = 0;
  unaff_ESI[0x3e] = 0;
  unaff_ESI[0x3f] = 0;
  unaff_ESI[0x40] = 0;
  unaff_ESI[0x41] = 0x3f800000;
  unaff_ESI[0x42] = 0;
  return;
}
