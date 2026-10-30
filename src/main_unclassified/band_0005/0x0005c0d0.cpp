/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BB2103B2FEC73BF2B0EB5F2BEDA7C2986C75B1263F7FD7F984C61E87269C2184
 * Entry: 0x0005c0d0, Ghidra index: 943, label: FUN_0005c0d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0005c0d0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int unaff_ESI;
  int unaff_EDI;
  
  uVar4 = 0;
  if ((unaff_EDI != 0) && (uVar1 = *(uint *)(unaff_ESI + 4), uVar1 != 0)) {
    if (uVar1 == 0) goto LAB_0005c0f0;
    do {
      iVar2 = *(int *)(*(int *)(unaff_ESI + 8) + uVar4 * 4);
      if ((iVar2 != 0) && (*(int *)(iVar2 + 4) == unaff_EDI)) {
        uVar3 = *(undefined4 *)(iVar2 + 0x18);
        *(undefined4 *)(iVar2 + 0x18) = 0;
        return uVar3;
      }
LAB_0005c0f0:
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return 0;
}
