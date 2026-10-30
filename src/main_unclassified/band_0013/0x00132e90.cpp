/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A75C18CFC49850EE6DFBBCB00FAF9B70B170140115EEB2D8CD43080C44DAF4E2
 * Entry: 0x00132e90, Ghidra index: 3866, label: FUN_00132e90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039db74;
void FUN_00132e90(void)

{
  undefined4 *unaff_EDI;
  
  unaff_EDI[4] = 0;
  unaff_EDI[4] = 0;
  unaff_EDI[2] = 0;
  *unaff_EDI = &PTR_LAB_0039db74;
  *(byte *)(unaff_EDI + 5) = *(byte *)(unaff_EDI + 5) & 0xfb | 0xb;
  unaff_EDI[0x17] = 0;
  unaff_EDI[0x19] = 0;
  unaff_EDI[0x1c] = 0xffffffff;
  unaff_EDI[0x1b] = 10;
  *(byte *)(unaff_EDI + 0x28) = *(byte *)(unaff_EDI + 0x28) & 0xdf;
  unaff_EDI[1] = 0;
  unaff_EDI[0x1b] = 10;
  unaff_EDI[0x1c] = 0xffffffff;
  unaff_EDI[6] = 9;
  *(undefined1 *)(unaff_EDI + 7) = 0;
  unaff_EDI[8] = 0;
  unaff_EDI[9] = 0;
  unaff_EDI[10] = 0;
  unaff_EDI[0xe] = 0;
  unaff_EDI[0xb] = 0;
  *(undefined1 *)((int)unaff_EDI + 0x1d) = 1;
  unaff_EDI[0x11] = 0;
  unaff_EDI[0x12] = 0x3e4ccccd;
  unaff_EDI[0x13] = 0;
  unaff_EDI[0x14] = 0x3e99999a;
  *(byte *)(unaff_EDI + 0x28) = *(byte *)(unaff_EDI + 0x28) | 0x10;
  unaff_EDI[0x15] = 0;
  unaff_EDI[0x10] = 0xbf800000;
  unaff_EDI[0x1a] = 0;
  if (unaff_EDI[0x19] != 0) {
    FUN_0008f6a0(0);
  }
  unaff_EDI[0xd] = 0;
  unaff_EDI[0xf] = 0;
  unaff_EDI[0xc] = 0;
  *(byte *)((int)unaff_EDI + 0xa1) = *(byte *)((int)unaff_EDI + 0xa1) & 0xf2;
  unaff_EDI[0x1d] = 0;
  unaff_EDI[0x1e] = 0;
  unaff_EDI[0x1f] = 0;
  unaff_EDI[0x20] = 0;
  unaff_EDI[0x24] = 0;
  unaff_EDI[0x25] = 0;
  unaff_EDI[0x26] = 0;
  unaff_EDI[0x27] = 0;
  unaff_EDI[0x29] = 0;
  *(byte *)(unaff_EDI + 0x28) = *(byte *)(unaff_EDI + 0x28) & 0x30 | 0x87;
  unaff_EDI[0x21] = 0x41200000;
  unaff_EDI[0x22] = 0xffffffff;
  unaff_EDI[0x23] = 0x3f800000;
  return;
}
