/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 780836D3FD031749D9E9A1DB72BBDFD1BF364CA39C7BA903C1DF5344DC7F36EB
 * Entry: 0x002bea90, Ghidra index: 9979, label: FUN_002bea90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_00000000;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_002bea90(undefined4 param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *unaff_ESI;
  uint uVar8;
  
  uVar7 = param_2;
  while( true ) {
    uVar7 = uVar7 & unaff_ESI[1];
    puVar1 = (uint *)(unaff_ESI[3] + uVar7 * 8);
    if (puVar1[1] == 0) {
      _DAT_00000000 = 0;
    }
    if (((*puVar1 | 0x80000000) == param_2) &&
       (iVar4 = (**(code **)*unaff_ESI)(puVar1[1],param_1), iVar4 == 1)) break;
    uVar7 = uVar7 + 1;
  }
  uVar5 = unaff_ESI[2];
  uVar2 = puVar1[1];
  iVar4 = unaff_ESI[3];
  uVar3 = unaff_ESI[1];
  unaff_ESI[2] = (uVar5 - 1 ^ uVar5) & 0xffffff ^ uVar5;
  uVar5 = uVar3;
  if (*(int *)(iVar4 + 4 + uVar3 * 8) != 0) {
    uVar5 = *(uint *)(iVar4 + uVar3 * 8) & uVar3;
  }
  uVar6 = uVar7 + 1 & uVar3;
  puVar1 = (uint *)(iVar4 + uVar6 * 8);
  uVar8 = *(uint *)(iVar4 + 4 + uVar6 * 8);
  while (uVar8 != 0) {
    uVar8 = uVar3 & *puVar1;
    if ((int)uVar7 < (int)uVar6) {
      if ((((int)uVar5 <= (int)uVar8) && ((uVar8 != uVar5 || ((int)uVar6 < (int)uVar8)))) ||
         ((int)uVar8 <= (int)uVar7)) {
LAB_002beb3d:
        iVar4 = unaff_ESI[3];
        *(uint *)(iVar4 + uVar7 * 8) = *puVar1;
        *(uint *)(iVar4 + 4 + uVar7 * 8) = puVar1[1];
        uVar7 = uVar6;
      }
    }
    else {
      if (uVar7 != uVar3) break;
      if ((int)uVar5 <= (int)uVar8) goto LAB_002beb3d;
    }
    uVar3 = unaff_ESI[1];
    uVar6 = uVar6 + 1 & uVar3;
    puVar1 = (uint *)(unaff_ESI[3] + uVar6 * 8);
    uVar8 = puVar1[1];
  }
  *(undefined4 *)(unaff_ESI[3] + 4 + uVar7 * 8) = 0;
  *(undefined4 *)(unaff_ESI[3] + uVar7 * 8) = 0;
  return uVar2;
}
