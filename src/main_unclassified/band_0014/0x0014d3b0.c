/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9D35B4CD5C17C4B5F6D3464D9903731BC1900B653230EAD1AB2612242141DF2C
 * Entry: 0x0014d3b0, Ghidra index: 4360, label: FUN_0014d3b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0014d3b0(void)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  
  if (*(int *)(in_EAX + 0x1cc) == 2) {
    cVar2 = (**(code **)(*(int *)(in_EAX + 0x144) + 0x20))();
    if (((cVar2 != '\0') && (iVar1 = *(int *)(in_EAX + 0x164), iVar1 != 0)) &&
       (*(int *)(*(int *)(iVar1 + 0xc) + 4) == 0x14)) {
      return iVar1;
    }
  }
  else if (*(int *)(in_EAX + 0x1d0) == 2) {
    cVar2 = (**(code **)(*(int *)(in_EAX + 0x178) + 0x20))();
    if (cVar2 != '\0') {
      return *(int *)(in_EAX + 0x198);
    }
  }
  else {
    cVar2 = (**(code **)(*(int *)(in_EAX + 0x44) + 0x20))();
    if (cVar2 != '\0') {
      return *(int *)(in_EAX + 100);
    }
  }
  return 0;
}
