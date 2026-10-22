/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 327EB0E73F75FB3D50A148A1166C6C1CADCB731A12A3DD5FA96CA70E2C63764C
 * Entry: 0x00349366, Ghidra index: 12913, label: FUN_00349366
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00349366(int param_1,undefined2 param_2,undefined4 *param_3,uint param_4,
                 undefined4 *param_5,uint param_6)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = FUN_0034cb5a(0x7654454e,0x40004,param_4 + 4 + param_6,0,0,0);
  if (iVar1 != 0) {
    FUN_00347fe3(iVar1,*(undefined4 *)(param_1 + 4),0);
    puVar2 = (undefined4 *)FUN_0034c932();
    *(undefined2 *)puVar2 = param_2;
    *(short *)((int)puVar2 + 2) = (short)param_6 + 4 + (short)param_4;
    if (param_4 != 0) {
      puVar4 = puVar2;
      for (uVar3 = param_4 >> 2; puVar4 = puVar4 + 1, uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar4 = *param_3;
        param_3 = param_3 + 1;
      }
      for (uVar3 = param_4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar4 = *(undefined1 *)param_3;
        param_3 = (undefined4 *)((int)param_3 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
    }
    if (param_6 != 0) {
      puVar2 = (undefined4 *)((int)puVar2 + param_4 + 4);
      for (uVar3 = param_6 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar2 = *param_5;
        param_5 = param_5 + 1;
        puVar2 = puVar2 + 1;
      }
      for (param_6 = param_6 & 3; param_6 != 0; param_6 = param_6 - 1) {
        *(undefined1 *)puVar2 = *(undefined1 *)param_5;
        param_5 = (undefined4 *)((int)param_5 + 1);
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
    }
    FUN_00348e95(iVar1,param_1,0);
  }
  return;
}
