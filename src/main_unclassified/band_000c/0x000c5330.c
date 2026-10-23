/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 46CB188C3A1197703AFAD900BD72765430D27E595FA2D68891A0F217B9751A42
 * Entry: 0x000c5330, Ghidra index: 2427, label: FUN_000c5330
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000c5330(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int *in_ECX;
  int unaff_ESI;
  float10 fVar10;
  int *local_40;
  float fStack_1c;
  undefined1 auStack_18 [12];
  undefined1 auStack_c [12];
  
  iVar7 = (**(code **)(*in_ECX + 0x30))();
  if (iVar7 == 0) {
    iVar7 = (**(code **)(*(int *)in_ECX[0x2a] + 0x40))();
    fVar3 = *(float *)(iVar7 + 0x28);
    fVar4 = *(float *)(iVar7 + 0x2c);
    fVar5 = *(float *)(iVar7 + 0x24);
    (**(code **)(*(int *)(in_ECX[0x2a] + 0x1b4) + 0x2c))(auStack_18);
    iVar7 = *(int *)(*(int *)(unaff_ESI + 0xa8) + 0x2e8);
    cVar6 = (**(code **)(*(int *)(iVar7 + 0x144) + 0x20))();
    local_40 = in_ECX;
    if ((((cVar6 != '\0') && (iVar7 = *(int *)(iVar7 + 0x164), iVar7 != 0)) &&
        (*(int *)(*(int *)(iVar7 + 0xc) + 4) == 0x14)) && (iVar7 != 0)) {
      fVar10 = (float10)FUN_002324c0();
      local_40 = (int *)(float)fVar10;
      FUN_00231720(0);
    }
    *(float *)(unaff_ESI + 0xac) = fVar4 + (float)local_40 * fStack_1c;
    *(float *)(unaff_ESI + 0xb0) = (float)local_40 * (float)auStack_18._0_8_ + fVar5;
    *(float *)(unaff_ESI + 0xb4) = (float)local_40 * SUB84(auStack_18._0_8_,4) + fVar3;
    return;
  }
  iVar7 = *in_ECX;
  iVar8 = (**(code **)(iVar7 + 0x30))();
  puVar9 = (undefined4 *)(**(code **)(iVar7 + 0x3c))(auStack_c);
  uVar1 = puVar9[2];
  uVar2 = puVar9[1];
  *(undefined4 *)(iVar8 + 0xac) = *puVar9;
  *(undefined4 *)(iVar8 + 0xb0) = uVar2;
  *(undefined4 *)(iVar8 + 0xb4) = uVar1;
  return;
}
