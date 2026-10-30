/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4D08DB099791FC86353C5EFC369A5FF0F5ADDB56DB3BB6CAE51FF0C72CB2AB5B
 * Entry: 0x00056f50, Ghidra index: 843, label: FUN_00056f50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00056f50(void)

{
  char cVar1;
  int *in_EAX;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int *in_ECX;
  
  iVar2 = (**(code **)(*in_ECX + 0xec))();
  if ((iVar2 != 0) && (iVar2 = (**(code **)(*in_EAX + 0xec))(), iVar2 != 0)) {
    if ((*(byte *)(in_ECX + 0x1c) & 1) != 0) {
      return 0;
    }
    if ((*(byte *)(in_EAX + 0x1c) & 1) == 0) {
      piVar3 = (int *)(**(code **)(*in_EAX + 0xec))();
      piVar4 = (int *)(**(code **)(*in_ECX + 0xec))();
      iVar2 = *piVar4;
      uVar5 = (**(code **)(*piVar3 + 0x9c))();
      cVar1 = (**(code **)(iVar2 + 0xc0))(uVar5);
      if (cVar1 == '\0') {
        return 0;
      }
    }
    else if ((*(int *)(in_ECX[3] + 4) == 3) && (cVar1 = FUN_00112770(), cVar1 != '\0')) {
      return 0;
    }
  }
  return 1;
}
