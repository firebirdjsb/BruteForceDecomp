/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 33CC70FADFED1030DFB6711AD7C8F826445A797D9B5F73EA5FCCBE30C085C50A
 * Entry: 0x002592a0, Ghidra index: 8496, label: FUN_002592a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002592a0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int unaff_ESI;
  int unaff_retaddr;
  
  piVar2 = param_1;
  (**(code **)(*param_1 + 0x18))(param_1,&param_1);
  iVar1 = (unaff_ESI - unaff_retaddr) + -1;
  if (-1 < iVar1) {
    if (0 < iVar1) {
      do {
        iVar1 = iVar1 + -1;
        piVar2 = (int *)piVar2[3];
      } while (iVar1 != 0);
    }
    *param_1 = (int)piVar2;
    (**(code **)(*piVar2 + 4))(piVar2);
    return 0;
  }
  return 0x80004005;
}
