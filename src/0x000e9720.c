/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D8CA6A44838C629260757681410FFD3D86242EBFF48538A29F326B4FF756178E
 * Entry: 0x000e9720, Ghidra index: 2887, label: FUN_000e9720
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00011e29;
extern uint32_t *DAT_00443308;
undefined4 FUN_000e9720(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int unaff_ESI;
  uint *puVar9;
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  undefined4 local_8;
  undefined4 local_4;
  
  uStack_1c = 0;
  *(undefined4 *)(unaff_ESI + 0x58) = 0;
  *(undefined1 *)(unaff_ESI + 0x39) = 1;
  *(undefined1 *)(unaff_ESI + 0x3a) = 1;
  *(undefined1 *)(unaff_ESI + 0x3b) = 1;
  *(undefined1 *)(unaff_ESI + 0x3c) = 1;
  local_8 = 0x35de755;
  local_4 = 0x35de755;
  puStack_18 = (undefined4 *)(unaff_ESI + 0x5c);
  (**(code **)(*DAT_00443308 + 0x24))(DAT_00443308,&local_4,&local_8);
  piVar4 = *(int **)(unaff_ESI + 0x5c);
  (**(code **)(*piVar4 + 0x14))(piVar4);
  *(undefined4 *)(unaff_ESI + 8) = 0;
  *(undefined4 *)(unaff_ESI + 0x1c) = 0;
  uStack_1c = 0xf83a78b5;
  piVar4 = (int *)FUN_000a7770(&uStack_1c);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(piVar4);
    piVar3 = *(int **)(unaff_ESI + 0x20);
    puVar1 = (undefined4 *)(unaff_ESI + 0x20);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
      *puVar1 = 0;
    }
    (**(code **)(*piVar4 + 0x30))(piVar4,0,puVar1);
    uVar5 = (**(code **)(*(int *)*puVar1 + 0x28))((int *)*puVar1);
    *(undefined4 *)(unaff_ESI + 0x1c) = uVar5;
  }
  if (*(int *)(unaff_ESI + 0x1c) == 0) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4);
    }
    return 0;
  }
  uVar5 = (**(code **)(**(int **)(unaff_ESI + 0x20) + 0x14))(*(int **)(unaff_ESI + 0x20));
  *(undefined4 *)(unaff_ESI + 8) = uVar5;
  puVar1 = *(undefined4 **)(unaff_ESI + 0x1c);
  *(undefined4 *)(unaff_ESI + 0x58) = 0x4b7fffff;
  *(undefined4 *)(unaff_ESI + 0x24) = *puVar1;
  *(undefined4 *)(unaff_ESI + 0x34) = puVar1[4];
  *(undefined4 *)(unaff_ESI + 0x28) = puVar1[1];
  *(undefined4 *)(unaff_ESI + 0x2c) = 0;
  puVar2 = (uint *)(unaff_ESI + 0x40);
  *(uint *)(unaff_ESI + 0x30) = puVar1[3] & 0xffff41ff | 0x4100;
  puVar9 = puVar2;
  for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  uVar6 = *(int *)(unaff_ESI + 8) * 4 + 0x3fU & 0xffffffc0;
  *puVar2 = 0x81050001;
  *(undefined **)(unaff_ESI + 0x4c) = &DAT_00011e29;
  if (uVar6 < 0x40) {
    uVar6 = 0x40;
  }
  uVar8 = *(int *)(unaff_ESI + 8) - 1;
  *(uint *)(unaff_ESI + 0x50) = (((uVar6 >> 6) - 1) * 0x1000 | uVar8) << 0xc | uVar8;
  *(undefined4 *)(unaff_ESI + 0x44) = 0;
  *(uint **)(unaff_ESI + 0x14) = puVar2;
  if ((((*puVar2 & 0xffff) == 0) && ((*puVar2 & 0x70000) == 0x50000)) &&
     (*(int *)(unaff_ESI + 0x54) != 0)) {
    D3D8LTCG__D3DResource_AddRef(*(int *)(unaff_ESI + 0x54));
  }
  *puVar2 = *puVar2 + 1;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  return 1;
}
