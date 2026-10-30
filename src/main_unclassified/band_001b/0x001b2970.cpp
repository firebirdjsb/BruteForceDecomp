/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BF8D571BD7852DA525BEBE51EA4A833E97E1915428E50DCCC97B62FBFAE0369B
 * Entry: 0x001b2970, Ghidra index: 5628, label: FUN_001b2970
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001b2970(void)

{
  uint in_EAX;
  int iVar1;
  int unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 4) = 0;
  *(undefined4 *)(unaff_ESI + 8) = 0;
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
  if (in_EAX == 0) {
    return 0;
  }
  if (0xd4c77b < in_EAX) {
    FUN_00038940();
    return 1;
  }
  iVar1 = FUN_002ea01d(in_EAX * 0x134);
  *(int *)(unaff_ESI + 4) = iVar1;
  *(int *)(unaff_ESI + 8) = iVar1;
  *(uint *)(unaff_ESI + 0xc) = in_EAX * 0x134 + iVar1;
  return 1;
}
