/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E078449066557F939348E982244070E2135F10E1779A53C42A17468AB6D3B1A6
 * Entry: 0x003795d3, Ghidra index: 13485, label: FUN_003795d3
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003795d3(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int *unaff_ESI;
  
  iVar1 = *unaff_ESI;
  uVar2 = *(undefined4 *)(iVar1 + 0x2500);
  uVar3 = *(undefined4 *)(iVar1 + 0x3200);
  uVar4 = *(undefined4 *)(iVar1 + 0x3250);
  iVar5 = unaff_ESI[0x4a];
  *(undefined4 *)(iVar1 + 0x2500) = 0;
  *(undefined4 *)(iVar1 + 0x3200) = 0;
  *(undefined4 *)(iVar1 + 0x3250) = 0;
  uVar6 = *(uint *)(iVar1 + 0x3204) & 0x1f;
  puVar8 = (undefined4 *)(uVar6 * 0x40 + iVar5 + iVar1);
  *puVar8 = *(undefined4 *)(iVar1 + 0x3240);
  puVar8[1] = *(undefined4 *)(iVar1 + 0x3244);
  puVar8[2] = *(undefined4 *)(iVar1 + 0x3248);
  puVar8[3] = *(undefined4 *)(iVar1 + 0x322c);
  puVar8[4] = *(undefined4 *)(iVar1 + 0x3228);
  puVar8[5] = *(undefined4 *)(iVar1 + 0x3224);
  puVar8[6] = *(undefined4 *)(iVar1 + 0x3280);
  puVar8[7] = *(undefined4 *)(iVar1 + 0x3254);
  puVar8[8] = *(undefined4 *)(iVar1 + 0x3268);
  puVar8[9] = *(undefined4 *)(iVar1 + 0x3264);
  puVar8[10] = *(undefined4 *)(iVar1 + 0x3260);
  puVar8[0xb] = *(undefined4 *)(iVar1 + 0x326c);
  puVar8[0xc] = *(undefined4 *)(iVar1 + 0x324c);
  if ((*(uint *)(iVar1 + 0x3204) & 0x100) != 0) {
    uVar6 = 1 << (sbyte)uVar6;
    uVar7 = ~uVar6 & *(uint *)(iVar1 + 0x2508);
    if (*(int *)(iVar1 + 0x3240) != *(int *)(iVar1 + 0x3244)) {
      uVar7 = uVar7 | uVar6;
    }
    *(uint *)(iVar1 + 0x2508) = uVar7;
  }
  *(uint *)(iVar1 + 0x3204) = param_1 & 0x1f;
  uVar6 = 1 << ((byte)param_1 & 0x1f);
  if (((unaff_ESI[0x41] & uVar6) != 0) && (param_1 != 1)) {
    *(uint *)(iVar1 + 0x3204) = *(uint *)(iVar1 + 0x3204) | 0x100;
  }
  puVar8 = (undefined4 *)(param_1 * 0x40 + iVar5 + iVar1);
  *(undefined4 *)(iVar1 + 0x3240) = *puVar8;
  *(undefined4 *)(iVar1 + 0x3244) = puVar8[1];
  *(undefined4 *)(iVar1 + 0x3248) = puVar8[2];
  *(undefined4 *)(iVar1 + 0x322c) = puVar8[3];
  *(undefined4 *)(iVar1 + 0x3228) = puVar8[4];
  *(undefined4 *)(iVar1 + 0x3224) = puVar8[5];
  *(undefined4 *)(iVar1 + 0x3280) = puVar8[6];
  *(undefined4 *)(iVar1 + 0x3254) = puVar8[7];
  *(undefined4 *)(iVar1 + 0x3268) = puVar8[8];
  *(undefined4 *)(iVar1 + 0x3264) = puVar8[9];
  *(undefined4 *)(iVar1 + 0x3260) = puVar8[10];
  *(undefined4 *)(iVar1 + 0x326c) = puVar8[0xb];
  *(undefined4 *)(iVar1 + 0x324c) = puVar8[0xc];
  if (((unaff_ESI[0x41] & uVar6) != 0) && (param_1 != 1)) {
    *(undefined4 *)(iVar1 + 0x3220) = 1;
  }
  *(undefined4 *)(iVar1 + 0x204c) = 0x1fffff;
  *(undefined4 *)(iVar1 + 0x3250) = uVar4;
  *(undefined4 *)(iVar1 + 0x3200) = uVar3;
  *(undefined4 *)(iVar1 + 0x2500) = uVar2;
  return;
}
