/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CDDEB4BC067404B3F1A6AC75AE95545A67463DA430CD43CFE153ACC3DD2CF435
 * Entry: 0x00039880, Ghidra index: 406, label: FUN_00039880
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_00039880(int param_1)

{
  int iVar1;
  int in_EAX;
  int *piVar2;
  int in_ECX;
  undefined1 uVar3;
  undefined1 local_9c [4];
  int local_98;
  int local_38;
  undefined1 uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  if (in_EAX != 0) {
    FUN_00054810();
    local_38 = param_1;
    piVar2 = (int *)FUN_0003c000(in_ECX,local_9c);
    iVar1 = *piVar2;
    if ((char)piVar2[1] == '\0') {
      uVar3 = uVar4;
      if (((iVar1 != *(int *)(in_ECX + 4)) && (*(int *)(iVar1 + 0x10) != 0)) &&
         (param_1 != *(int *)(iVar1 + 0x70))) {
        FUN_000236e0();
        *(int *)(iVar1 + 0x70) = param_1;
      }
    }
    else {
      uVar3 = 1;
    }
    FUN_0001bd30();
    FUN_0001bd30();
    if (local_98 != 0) {
      FUN_0008f6e0();
    }
  }
  return uVar3;
}
