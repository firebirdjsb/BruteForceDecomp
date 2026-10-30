/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9B2F6180D570B554E7D9A2DFB36672F80710FA93AB65694FB88772A1F3FCFE33
 * Entry: 0x000ee640, Ghidra index: 2964, label: FUN_000ee640
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039e5c8;
void FUN_000ee640(void)

{
  undefined4 *unaff_ESI;
  
  *unaff_ESI = PTR_LAB_0039e5c8;
  unaff_ESI[9] = 0;
  FUN_000b2020();
  unaff_ESI[0x15] = 0;
  unaff_ESI[0x16] = 0;
  unaff_ESI[0x17] = 0;
  *(byte *)(unaff_ESI + 10) = *(byte *)(unaff_ESI + 10) & 0xd6 | 0x16;
  *(undefined4 *)((int)unaff_ESI + 0x29) = 0xffffffff;
  unaff_ESI[2] = 0;
  unaff_ESI[1] = 0;
  unaff_ESI[3] = 0;
  unaff_ESI[4] = 0;
  unaff_ESI[5] = 0;
  unaff_ESI[6] = 0;
  unaff_ESI[7] = 0;
  unaff_ESI[8] = 0;
  *(undefined4 *)((int)unaff_ESI + 0x31) = 0xc8646464;
  unaff_ESI[0x13] = 0;
  *(undefined4 *)((int)unaff_ESI + 0x2d) = 0xffe6b4b4;
  unaff_ESI[0x10] = 0x3f000000;
  return;
}
