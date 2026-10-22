/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 088D8BAFA38D1FBA618F2A343976E85BA2F1F4C966D4B79011A7A6B31B7E9CF2
 * Entry: 0x002441e0, Ghidra index: 8073, label: FUN_002441e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002441e0(void)

{
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  *unaff_ESI = *unaff_EDI;
  unaff_ESI[7] = 0xf;
  unaff_ESI[6] = 0;
  *(undefined1 *)(unaff_ESI + 2) = 0;
  FUN_0001f4f0(unaff_EDI + 1,0,0xffffffff);
  unaff_ESI[8] = unaff_EDI[8];
  FUN_00246490(unaff_ESI + 9);
  FUN_002468b0(unaff_ESI + 0xd);
  FUN_00246d60(unaff_ESI + 0x11);
  FUN_002471f0(unaff_ESI + 0x15);
  return;
}
