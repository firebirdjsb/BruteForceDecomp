/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E9CEC91B7E92CE9235350FCC570A5892F2C48DABFCD63921BDD5DEC1DDBB3AC3
 * Entry: 0x0036d750, Ghidra index: 13292, label: FUN_0036d750
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0036d750(void)

{
  int in_EAX;
  uint *extraout_ECX;
  uint *extraout_ECX_00;
  uint *extraout_ECX_01;
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = *(uint **)(in_EAX + 0x15b4);
  *(uint **)(in_EAX + 0x163c) = puVar1;
  if ((((*puVar1 & 0xffff) == 0) && ((*puVar1 & 0x70000) == 0x50000)) && (puVar1[5] != 0)) {
    D3D8LTCG__D3DResource_AddRef(puVar1[5]);
    puVar1 = extraout_ECX;
  }
  *puVar1 = *puVar1 + 1;
  puVar1 = *(uint **)(in_EAX + 0x15b8);
  *(uint **)(in_EAX + 0x1640) = puVar1;
  if (puVar1 != (uint *)0x0) {
    if ((((*puVar1 & 0xffff) == 0) && ((*puVar1 & 0x70000) == 0x50000)) && (puVar1[5] != 0)) {
      D3D8LTCG__D3DResource_AddRef(puVar1[5]);
      puVar1 = extraout_ECX_00;
    }
    *puVar1 = *puVar1 + 1;
  }
  puVar1 = *(uint **)(in_EAX + 0xb38);
  *(uint **)(in_EAX + 0x1644) = puVar1;
  if (puVar1 != (uint *)0x0) {
    if ((((*puVar1 & 0xffff) == 0) && ((*puVar1 & 0x70000) == 0x50000)) && (puVar1[5] != 0)) {
      D3D8LTCG__D3DResource_AddRef(puVar1[5]);
      puVar1 = extraout_ECX_01;
    }
    *puVar1 = *puVar1 + 1;
  }
  puVar3 = (undefined4 *)(in_EAX + 0xa90);
  puVar4 = (undefined4 *)(in_EAX + 0x1648);
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return;
}
