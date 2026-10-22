/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7A61044D060F4A495B7F52054A282D61035BAF44DFF326B0DDD190E4ADB6A233
 * Entry: 0x000aaff0, Ghidra index: 2039, label: FUN_000aaff0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_000aaff0(ushort *param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  uint in_EAX;
  ushort *puVar3;
  ushort *puVar4;
  uint uVar5;
  int iVar6;
  int in_EDX;
  uint unaff_EBX;
  int iVar7;
  undefined4 *local_10;
  
  if ((unaff_EBX != 0) || (*(uint *)(in_EDX + 0x14) < in_EAX)) {
    if ((in_EAX < *(uint *)(in_EDX + 0x14)) &&
       (uVar5 = *(uint *)(in_EDX + 0x14) - in_EAX, unaff_EBX <= uVar5)) {
      iVar7 = uVar5 + (1 - unaff_EBX);
      if (*(uint *)(in_EDX + 0x18) < 8) {
        iVar6 = in_EDX + 4;
      }
      else {
        iVar6 = *(int *)(in_EDX + 4);
      }
      local_10 = (undefined4 *)(in_EDX + 4);
      puVar3 = (ushort *)(iVar6 + in_EAX * 2);
      for (; iVar7 != 0; iVar7 = iVar7 + (-1 - (iVar6 >> 1))) {
        puVar4 = puVar3;
        iVar6 = iVar7;
        while (*puVar4 != *param_1) {
          puVar4 = puVar4 + 1;
          iVar6 = iVar6 + -1;
          if (iVar6 == 0) goto LAB_000ab05b;
        }
        puVar1 = puVar4;
        uVar5 = unaff_EBX;
        puVar2 = param_1;
        if (puVar4 == (ushort *)0x0) break;
        while( true ) {
          if (uVar5 == 0) goto LAB_000ab086;
          if (*puVar1 != *puVar2) break;
          puVar1 = puVar1 + 1;
          uVar5 = uVar5 - 1;
          puVar2 = puVar2 + 1;
        }
        if ((-(uint)(*puVar1 < *puVar2) & 0xfffffffe) == 0xffffffff) {
LAB_000ab086:
          if (7 < *(uint *)(in_EDX + 0x18)) {
            local_10 = (undefined4 *)*local_10;
          }
          return (int)puVar4 - (int)local_10 >> 1;
        }
        iVar6 = (int)puVar4 - (int)puVar3;
        puVar3 = puVar4 + 1;
      }
    }
LAB_000ab05b:
    in_EAX = 0xffffffff;
  }
  return in_EAX;
}
