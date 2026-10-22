/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 53F001F6B369474DE3F0820D26102548ECC80557B593FFAFF92C5799EDAE1DEC
 * Entry: 0x001411e0, Ghidra index: 4100, label: FUN_001411e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001411e0(undefined4 *param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  uint in_EAX;
  undefined4 uVar3;
  int in_ECX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 **ppuVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *local_4;
  
  local_4 = *(undefined4 **)(in_ECX + 0x2c);
  uVar3 = 0;
  cVar1 = *(char *)((int)local_4[1] + 0x1d);
  puVar2 = local_4;
  puVar8 = (undefined4 *)local_4[1];
  while (cVar1 == '\0') {
    if ((uint)puVar8[3] < in_EAX) {
      puVar4 = (undefined4 *)puVar8[2];
      puVar8 = puVar2;
    }
    else {
      puVar4 = (undefined4 *)*puVar8;
    }
    puVar2 = puVar8;
    puVar8 = puVar4;
    cVar1 = *(char *)((int)puVar4 + 0x1d);
  }
  if ((puVar2 == local_4) || (in_EAX < (uint)puVar2[3])) {
    ppuVar6 = &local_4;
  }
  else {
    ppuVar6 = &param_1;
  }
  puVar2 = *ppuVar6;
  if (puVar2 != *(undefined4 **)(in_ECX + 0x2c)) {
    local_4 = (undefined4 *)puVar2[5];
    cVar1 = *(char *)((int)local_4[1] + 0x1d);
    puVar8 = local_4;
    puVar4 = (undefined4 *)local_4[1];
    while (cVar1 == '\0') {
      if ((undefined4 *)puVar4[3] < param_1) {
        puVar5 = (undefined4 *)puVar4[2];
        puVar4 = puVar8;
      }
      else {
        puVar5 = (undefined4 *)*puVar4;
      }
      puVar8 = puVar4;
      puVar4 = puVar5;
      cVar1 = *(char *)((int)puVar5 + 0x1d);
    }
    if ((puVar8 == local_4) || (param_1 < (undefined4 *)puVar8[3])) {
      ppuVar6 = &local_4;
    }
    else {
      ppuVar6 = &param_1;
    }
    puVar8 = *ppuVar6;
    if (puVar8 != (undefined4 *)puVar2[5]) {
      piVar7 = (int *)0x0;
      if ((undefined4 *)puVar8[5] != (undefined4 *)0x0) {
        piVar7 = *(int **)puVar8[5];
      }
      if (piVar7 != (int *)puVar8[5]) {
        while (piVar7[2] != param_2) {
          piVar7 = (int *)*piVar7;
          if (piVar7 == (int *)puVar8[5]) {
            return uVar3;
          }
        }
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}
