/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B962DBF3F0B1FB6AAB7D571939DDD93854F417169701B52FF5E35E84C453BA96
 * Entry: 0x001e80e0, Ghidra index: 6835, label: FUN_001e80e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e80e0(void)

{
  char cVar1;
  int *in_ECX;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)in_ECX[0x2e];
  in_ECX[0x2e] = in_ECX[0x2d];
  in_ECX[0x2d] = (int)puVar3;
  for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  if ((char)in_ECX[1] == '\0') {
    cVar1 = (**(code **)(*in_ECX + 0x1c))();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*in_ECX + 0x14))();
      if (cVar1 == '\0') {
        *(undefined1 *)(in_ECX + 1) = 0;
        return;
      }
    }
  }
  else {
    cVar1 = (**(code **)(*in_ECX + 0x20))();
    if ((cVar1 == '\0') && (*(char *)((int)in_ECX + 5) == '\0')) {
      if (in_ECX[2] != 0) {
        FUN_001e8fd0();
        return;
      }
    }
    else {
      (**(code **)(*in_ECX + 0x18))();
      *(undefined1 *)((int)in_ECX + 5) = 0;
    }
  }
  return;
}
