/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5F36F19E30936CACC291515AD9A1456F6EAAD327FDD2429DB36D42264755E585
 * Entry: 0x000622f0, Ghidra index: 1053, label: FUN_000622f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000622f0(int *param_1)

{
  undefined4 uVar1;
  uint *extraout_ECX;
  uint *puVar2;
  int iVar3;
  int unaff_EBX;
  uint uVar4;
  uint uVar5;
  int unaff_EDI;
  
  uVar5 = *(uint *)(unaff_EDI + 4);
  if ((*(byte *)(uVar5 + 0xc) & 1) != 0) {
    do {
      uVar4 = uVar5;
      uVar5 = *(uint *)(uVar4 + 8);
    } while ((*(byte *)(*(uint *)(uVar4 + 8) + 0xc) & 1) != 0);
    if (((*(uint *)(*(uint *)(unaff_EBX + 0x38) + 0x10) < uVar4) &&
        (uVar4 < *(uint *)(unaff_EBX + 0x38))) && (*(int *)(uVar4 + 0x10) == *param_1)) {
      *(uint *)(uVar4 + 0xc) = *(uint *)(uVar4 + 0xc) & 0xfffffffe;
      return 0;
    }
    FUN_00238740();
    uVar5 = *(uint *)(unaff_EDI + 4);
  }
  puVar2 = (uint *)*param_1;
  if (*(uint **)(uVar5 + 0x10) != puVar2) {
    if (uVar5 < *(uint *)(unaff_EBX + 0x38)) {
      if (puVar2 != (uint *)0x0) {
        if ((((*puVar2 & 0xffff) == 0) && ((*puVar2 & 0x70000) == 0x50000)) && (puVar2[5] != 0)) {
          D3D8LTCG__D3DResource_AddRef(puVar2[5]);
          puVar2 = extraout_ECX;
        }
        *puVar2 = *puVar2 + 1;
      }
      if (*(int *)(uVar5 + 0x10) != 0) {
        D3D8LTCG__D3DResource_Release(*(int *)(uVar5 + 0x10));
      }
      *(int *)(uVar5 + 0x10) = *param_1;
    }
    else {
      if (*(int *)(unaff_EBX + 0x58) != 0) {
        FUN_00238740();
      }
      iVar3 = *(int *)(unaff_EBX + 0x54) + -0x14;
      *(int *)(unaff_EBX + 0x54) = iVar3;
      if (iVar3 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = FUN_000623e0(param_1);
      }
      *(undefined4 *)(unaff_EDI + 4) = uVar1;
    }
    if (*(int *)(unaff_EDI + 0xc) != 0) {
      *(undefined4 *)(*(int *)(unaff_EDI + 0xc) + 8) = *(undefined4 *)(unaff_EDI + 4);
      return 0;
    }
    FUN_00238910(*(undefined4 *)(unaff_EDI + 4));
    *(undefined4 *)(unaff_EDI + 0xc) = *(undefined4 *)(unaff_EBX + 0x2c);
  }
  return 0;
}
