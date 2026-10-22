/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2574675DF4630FC17FEE3E1B1DC263A5A63A31511C7178FA1FDCA3EB2A30BDE6
 * Entry: 0x00343ee6, Ghidra index: 12729, label: FUN_00343ee6
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_00343ee6(int *param_1,undefined4 *param_2,int param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  uVar3 = param_3 + 3U & 0xfffffffc;
  param_1[0x13] = param_1[0x13] + uVar3;
  if (param_1[0xe] == 0) {
    if (param_2 == (undefined4 *)0x0) {
      iVar4 = *param_1;
      puVar2 = *(undefined4 **)(iVar4 + 8);
      *(undefined1 **)(iVar4 + 8) = (undefined1 *)(uVar3 + (int)puVar2);
      if (*(undefined1 **)(iVar4 + 4) < (undefined1 *)(uVar3 + (int)puVar2)) {
        *(undefined4 **)(iVar4 + 8) = puVar2;
        puVar2 = (undefined4 *)0x0;
      }
    }
    else {
      iVar4 = *param_1;
      puVar1 = (uint *)(iVar4 + 8);
      puVar2 = (undefined4 *)*puVar1;
      *puVar1 = *puVar1 + uVar3;
      if (*(uint *)(iVar4 + 4) < *puVar1) {
        *puVar1 = (uint)puVar2;
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar5 = puVar2;
        for (uVar3 = param_3 + 3U >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar5 = *param_2;
          param_2 = param_2 + 1;
          puVar5 = puVar5 + 1;
        }
        for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(undefined1 *)puVar5 = *(undefined1 *)param_2;
          param_2 = (undefined4 *)((int)param_2 + 1);
          puVar5 = (undefined4 *)((int)puVar5 + 1);
        }
      }
    }
  }
  else {
    if (param_2 != (undefined4 *)0x0) goto LAB_00343f66;
    puVar2 = (undefined4 *)FUN_00343e85(param_1,uVar3);
  }
  if (puVar2 != (undefined4 *)0x0) {
    return puVar2;
  }
LAB_00343f66:
  FUN_00343377(param_1,0xfffffc12);
  return (undefined4 *)0x0;
}
