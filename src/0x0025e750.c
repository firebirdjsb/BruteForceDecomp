/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5C84FDD426A8B6FE09B25F3BE60439FDB768E6E72FE1282E4EB38CF64F8361BA
 * Entry: 0x0025e750, Ghidra index: 8599, label: FUN_0025e750
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0025e750(void)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  uVar1 = FUN_00061500(unaff_ESI + 4);
  *(undefined4 *)(unaff_ESI + 8) = uVar1;
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
  uVar1 = FUN_00061500(unaff_ESI + 0x10);
  *(undefined4 *)(unaff_ESI + 0x14) = uVar1;
  *(undefined4 *)(unaff_ESI + 0x18) = 0;
  uVar1 = FUN_00061500(unaff_ESI + 0x1c);
  *(undefined4 *)(unaff_ESI + 0x20) = uVar1;
  *(undefined4 *)(unaff_ESI + 0x24) = 0;
  uVar1 = FUN_00061500(unaff_ESI + 0x28);
  *(undefined4 *)(unaff_ESI + 0x2c) = uVar1;
  *(undefined4 *)(unaff_ESI + 0x30) = 0;
  return;
}
