/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1FC4C1E6E3E523306B5F9D2B618249E9D17BADFEAE5C3C7AA6FB509944C6355F
 * Entry: 0x00210880, Ghidra index: 7428, label: FUN_00210880
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_00210880(undefined4 param_1,float *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  float local_88;
  float local_84;
  undefined4 local_80 [32];
  
  iVar2 = FUN_00210740(local_80);
  cVar1 = '\0';
  iVar3 = 0;
  local_88 = 0.0;
  if (0 < iVar2) {
    do {
      local_84 = 0.0;
      if (cVar1 == '\0') {
        cVar1 = (**(code **)(*(int *)local_80[iVar3] + 0x20))(&local_84);
        if (cVar1 != '\0') goto LAB_002108d5;
        cVar1 = '\0';
      }
      else {
LAB_002108d5:
        cVar1 = '\x01';
      }
      if (local_88 < local_84) {
        local_88 = local_84;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  if (param_2 != (float *)0x0) {
    *param_2 = local_88;
  }
  return cVar1;
}
