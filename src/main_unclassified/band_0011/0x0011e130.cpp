/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A94C305F8C6EC047EE84F0597E421FD70AC4B764F51EC96E480EFEE7760BFABC
 * Entry: 0x0011e130, Ghidra index: 3625, label: FUN_0011e130
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_0011e130(void)

{
  int iVar1;
  char cVar2;
  char cVar3;
  int in_EAX;
  
  cVar2 = FUN_00117210();
  if (cVar2 == '\0') {
    return '\0';
  }
  iVar1 = *(int *)(*(int *)(in_EAX + 0xc) + 0x15c);
  if (iVar1 == 1) {
    cVar2 = FUN_00122da0();
  }
  else if (iVar1 == 2) {
    cVar2 = FUN_00122940();
  }
  else {
    if (iVar1 != 3) {
      return '\0';
    }
    cVar2 = FUN_00122b20();
  }
  if (cVar2 != '\0') {
    iVar1 = *(int *)(in_EAX + 0x2e8);
    cVar3 = (**(code **)(*(int *)(iVar1 + 0x144) + 0x20))();
    if ((((cVar3 != '\0') && (iVar1 = *(int *)(iVar1 + 0x164), iVar1 != 0)) &&
        (*(int *)(*(int *)(iVar1 + 0xc) + 4) == 0x14)) && (iVar1 != 0)) {
      FUN_0014d2e0();
      FUN_0022dc00();
    }
  }
  return cVar2;
}
