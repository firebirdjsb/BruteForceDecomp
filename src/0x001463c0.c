/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8A1D6D1AEEAB8A27E004D5764614BAACE59C3F80B735B1AFDD354AFAE62C1B1D
 * Entry: 0x001463c0, Ghidra index: 4210, label: FUN_001463c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001463c0(void)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  undefined4 unaff_EBX;
  
  iVar1 = *(int *)(in_EAX + 0x174);
  cVar2 = FUN_001301e0(unaff_EBX);
  if (cVar2 != '\0') {
    return iVar1;
  }
  iVar3 = (**(code **)(**(int **)(in_EAX + 0x15c) + 8))(iVar1);
  if (iVar3 != iVar1) {
    cVar2 = FUN_001301e0(unaff_EBX);
    if (cVar2 != '\0') {
      return iVar3;
    }
  }
  return 0xd;
}
