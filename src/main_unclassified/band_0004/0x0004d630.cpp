/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0DA9452D5EA481DF6E50CFE64A4A6284259644B8739D57CA379D1B844ED7890A
 * Entry: 0x0004d630, Ghidra index: 651, label: FUN_0004d630
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0004d630(float *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  int in_ECX;
  undefined4 *unaff_EBX;
  undefined4 *puVar7;
  float local_1c;
  int local_18;
  
  puVar1 = *(undefined4 **)(in_ECX + 4);
  local_18 = 0;
  local_1c = 3.4028235e+38;
  if (puVar1 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = (undefined4 *)*puVar1;
  }
  for (; puVar7 != puVar1; puVar7 = (undefined4 *)*puVar7) {
    iVar2 = puVar7[3];
    if ((((iVar2 != 0) && ((*(byte *)(iVar2 + 0x28) & 4) != 0)) &&
        ((unaff_EBX == (undefined4 *)0x0 || (cVar6 = (**(code **)*unaff_EBX)(iVar2), cVar6 != '\0'))
        )) && (fVar3 = *(float *)(iVar2 + 0x1c) - param_1[2],
              fVar4 = *(float *)(iVar2 + 0x18) - param_1[1],
              fVar5 = *(float *)(iVar2 + 0x14) - *param_1,
              fVar3 = fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3, fVar3 < local_1c)) {
      local_1c = fVar3;
      local_18 = iVar2;
    }
  }
  return local_18;
}
