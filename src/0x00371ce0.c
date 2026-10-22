/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 52E7C01F2598F40FE46F67BAE59B4C07D2C417CF6B73EC07A1A40ABAA3254F25
 * Entry: 0x00371ce0, Ghidra index: 13386, label: D3D_BlockOnTime
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void D3D8LTCG__D3D_BlockOnTime(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = D3D8__D3D_g_pDevice;
  iVar4 = *(int *)(D3D8__D3D_g_pDevice + 0x2c);
  if ((uint)(iVar4 - **(int **)(D3D8__D3D_g_pDevice + 0x30)) <= (uint)(iVar4 - param_1)) {
    return;
  }
  if (param_1 == iVar4) {
    D3D_SetFence(0);
  }
  piVar2 = (int *)FUN_00371bc0();
  if (piVar2 == (int *)0x0) {
    return;
  }
  uVar3 = FUN_00371b60();
  if (0x23ff < uVar3) {
    if (*(code **)(iVar1 + 0x15ac) != (code *)0x0) {
      *(int *)(iVar1 + 0x15b0) = param_1;
      (**(code **)(iVar1 + 0x15ac))(param_2);
      uVar3 = FUN_00371b60();
      if (uVar3 < 0x2000) goto LAB_00371dad;
    }
    iVar4 = piVar2[1];
    *(undefined4 *)(iVar1 + 0x1970) = 0;
    if ((param_2 & 8) == 0) {
      *(undefined4 *)(iVar4 + 8) = 0x40110;
      *(undefined4 *)(iVar4 + 0xc) = 0;
    }
    *(undefined4 *)(iVar4 + 0x10) = 0x40100;
    *(undefined4 *)(iVar4 + 0x14) = 5;
    FUN_00372180();
    uVar3 = FUN_00371b60();
    if (0x1fff < uVar3) {
      do {
        iVar4 = KeWaitForSingleObject(iVar1 + 0x196c,6,1,0,0);
      } while (iVar4 != 0);
      return;
    }
    *(undefined4 *)(iVar4 + 8) = 0x40100;
    *(undefined4 *)(iVar4 + 0xc) = 0;
    *(undefined4 *)(iVar4 + 0x10) = 0x40100;
    *(undefined4 *)(iVar4 + 0x14) = 0;
    FUN_00372180();
    param_1 = *piVar2;
  }
LAB_00371dad:
  if (*(code **)(iVar1 + 0x15ac) != (code *)0x0) {
    *(int *)(iVar1 + 0x15b0) = param_1;
    (**(code **)(iVar1 + 0x15ac))(param_2 | 0x80000000);
  }
  do {
  } while ((uint)(*(int *)(iVar1 + 0x2c) - param_1) <
           (uint)(*(int *)(iVar1 + 0x2c) - **(int **)(iVar1 + 0x30)));
  return;
}
