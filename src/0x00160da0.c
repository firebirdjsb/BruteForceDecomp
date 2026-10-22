/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 32008F6F0411B7EE34AF0C0BA05592E8FF86C48A02868B0A2F2A5DD6B5D8BBD0
 * Entry: 0x00160da0, Ghidra index: 4596, label: FUN_00160da0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00160da0(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  undefined4 *puVar4;
  undefined4 **ppuVar5;
  uint *in_EDX;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *local_8;
  undefined4 *local_4;
  
  uVar2 = *in_EDX;
  if (uVar2 != 0) {
    for (piVar6 = *(int **)(in_ECX + 8); piVar6 != *(int **)(in_ECX + 0xc); piVar6 = piVar6 + 1) {
      local_4 = *(undefined4 **)(*piVar6 + 0x10c);
      iVar3 = 0;
      cVar1 = *(char *)((int)local_4[1] + 0x19);
      local_8 = local_4;
      puVar7 = (undefined4 *)local_4[1];
      while (cVar1 == '\0') {
        if ((uint)puVar7[3] < uVar2) {
          puVar4 = (undefined4 *)puVar7[2];
          puVar7 = local_8;
        }
        else {
          puVar4 = (undefined4 *)*puVar7;
        }
        local_8 = puVar7;
        puVar7 = puVar4;
        cVar1 = *(char *)((int)puVar4 + 0x19);
      }
      if ((local_8 == local_4) || (uVar2 < (uint)local_8[3])) {
        ppuVar5 = &local_4;
      }
      else {
        ppuVar5 = &local_8;
      }
      if (*ppuVar5 != *(undefined4 **)(*piVar6 + 0x10c)) {
        iVar3 = (*ppuVar5)[5];
      }
      if (iVar3 != 0) {
        return;
      }
    }
  }
  return;
}
