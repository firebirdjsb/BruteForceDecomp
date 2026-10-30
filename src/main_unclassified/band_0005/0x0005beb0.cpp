/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B08FDCFEC90B542D27C61D0F64DBB8BFA767BD31AAF3EBD5AEA5E33E80F51F43
 * Entry: 0x0005beb0, Ghidra index: 937, label: FUN_0005beb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0005beb0(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int unaff_ESI;
  int unaff_EDI;
  
  uVar1 = *(uint *)(unaff_ESI + 4);
  uVar2 = 0;
  if (uVar1 == 0) {
LAB_0005bed1:
    uVar2 = 0xffffffff;
  }
  else {
    if (uVar1 != 0) goto LAB_0005bec1;
    iVar3 = 0;
    while (*(int *)(iVar3 + 4) != unaff_EDI) {
      uVar2 = uVar2 + 1;
      if (uVar1 <= uVar2) goto LAB_0005bed1;
LAB_0005bec1:
      iVar3 = *(int *)(*(int *)(unaff_ESI + 8) + uVar2 * 4);
    }
  }
  return CONCAT31((int3)(uVar2 >> 8),uVar2 != 0xffffffff);
}
