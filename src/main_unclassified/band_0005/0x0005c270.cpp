/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B6B1B1A474A687427E65434B734BF615E2878C7A443320DC02DFC62F36A1EEF1
 * Entry: 0x0005c270, Ghidra index: 947, label: FUN_0005c270
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0005c270(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBX;
  int unaff_EDI;
  
  uVar1 = *(uint *)(unaff_EDI + 4);
  uVar4 = 0;
  if (uVar1 != 0) {
    if (uVar1 == 0) goto LAB_0005c29e;
    do {
      iVar2 = *(int *)(*(int *)(unaff_EDI + 8) + uVar4 * 4);
      if ((((iVar2 != 0) && (*(int *)(iVar2 + 4) != 0)) &&
          (iVar3 = *(int *)(*(int *)(iVar2 + 4) + 0xc), iVar3 != 0)) &&
         (*(int *)(iVar3 + 0x120) == unaff_EBX)) {
        return *(undefined4 *)(iVar2 + 4);
      }
LAB_0005c29e:
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return 0;
}
