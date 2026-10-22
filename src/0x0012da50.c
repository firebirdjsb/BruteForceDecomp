/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D398BE260C0858E3B5D9BE50A17F507AEEE2F09B9E35B7E79E6D5182871D138F
 * Entry: 0x0012da50, Ghidra index: 3801, label: FUN_0012da50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0012da50(void)

{
  byte *unaff_EDI;
  
  unaff_EDI[1] = 0;
  if (*(int *)(unaff_EDI + 0xc) != 0) {
    FUN_0008f6a0(0);
  }
  *unaff_EDI = *unaff_EDI & 0xfc;
  unaff_EDI[4] = 0;
  unaff_EDI[5] = 0;
  unaff_EDI[6] = 0;
  unaff_EDI[7] = 0;
  unaff_EDI[0x10] = 0;
  unaff_EDI[0x11] = 0;
  unaff_EDI[0x12] = 0;
  unaff_EDI[0x13] = 0;
  unaff_EDI[0x14] = 0;
  unaff_EDI[0x15] = 0;
  unaff_EDI[0x16] = 0x80;
  unaff_EDI[0x17] = 0x3f;
  unaff_EDI[0x18] = 0;
  unaff_EDI[0x19] = 0;
  unaff_EDI[0x1a] = 0;
  unaff_EDI[0x1b] = 0;
  return;
}
