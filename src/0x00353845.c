/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3723FD56473D968A1778FB5D207B8695832928C3B17835B2E4456FC7D2DE4E01
 * Entry: 0x00353845, Ghidra index: 13093, label: FUN_00353845
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_00353845(int *param_1,int param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  int in_ECX;
  int iVar3;
  int *piVar4;
  
  if ((param_1[0x18] == 0) && ((*(byte *)((int)param_1 + 0xf) & 1) == 0)) {
    iVar3 = *param_1;
    piVar4 = (int *)param_1[1];
    *piVar4 = iVar3;
    *(int **)(iVar3 + 4) = piVar4;
    puVar1 = *(undefined4 **)(in_ECX + 0xbe4);
    *param_1 = in_ECX + 0xbe0;
    param_1[1] = (int)puVar1;
    *puVar1 = param_1;
    *(int **)(in_ECX + 0xbe4) = param_1;
    if ((param_2 == -0x7ff8d8ba) && (*(byte *)(param_1 + 0x1f) < 4)) {
      param_2 = -0x7ff8d8b3;
    }
    param_1[0x10] = param_2;
    if ((*(byte *)(param_1 + 0x1f) < 4) && ((*(byte *)(param_1 + 3) & 0x18) == 0)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    FUN_00345541(0xffffffff,0x18);
    *(undefined1 *)(param_1 + 0x1f) = 0;
    piVar4 = param_1 + 0x22;
    for (iVar3 = 0x18; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar4 = 0;
      piVar4 = piVar4 + 1;
    }
    FUN_0034c35a(param_1 + 0x1b,0xffffffff);
    *(ushort *)((int)param_1 + 0x82) = (ushort)*(byte *)(in_ECX + 0x32);
    param_1[0x2f] = 0x200;
    param_1[0x33] = 0x200;
    *(undefined2 *)(param_1 + 0x20) = 0;
    param_1[0x21] = 0;
    param_1[0x35] = 0;
    param_1[0x2d] = 0xffff;
    param_1[0x2e] = 0xffff;
    iVar3 = (uint)*(byte *)(in_ECX + 0x34) * 5;
    param_1[0x36] = iVar3;
    param_1[0x37] = iVar3;
    piVar4 = param_1 + 0x19;
    param_1[0x1a] = (int)piVar4;
    *piVar4 = (int)piVar4;
    param_1[0x1d] = -1;
    param_1[0x1b] = 0;
    param_1[0x1e] = (int)FUN_0035418a;
    FUN_00345541(0xfffff9ff,0);
    *(undefined1 *)((int)param_1 + 0x7f) = 0;
    if ((param_1[3] & 0x1f800U) != 0) {
      KeSetEvent(param_1 + 4,1,0);
    }
    FUN_00345f58(param_1);
    if (bVar2) {
      FUN_00345541(0xffffffff,0x80);
    }
  }
  else {
    FUN_00346cd5(param_1,1);
    param_1 = (int *)0x0;
  }
  return param_1;
}
