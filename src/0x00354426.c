/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 20CCC7B07CAD9BAD7B3EF14A5B72463BCC4DCE82D535CF966A4C1DEEC74D5312
 * Entry: 0x00354426, Ghidra index: 13110, label: FUN_00354426
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00354426(int param_1,byte param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = 0;
  KeRaiseIrqlToDpcLevel();
  if (((param_2 & 0x10) != 0) && ((*(byte *)(param_1 + 0xc) & 0x10) == 0)) {
    FUN_00345541(0xffffffff,0x10);
    if (*(int *)(param_1 + 0x2c) == 0) {
      if (*(int *)(param_1 + 0x20) != 0) {
        FUN_00345e88(param_1,*(int *)(param_1 + 0x20),0x8007274a);
      }
    }
    else {
      FUN_00353a7a(param_1);
      iVar2 = (-(uint)(param_3 != 0) & 0x7ff8d8ba) + 0x80072746;
      param_1 = FUN_00353845(param_1,0x80072746);
    }
  }
  if (((param_2 & 8) == 0) || ((*(byte *)(param_1 + 0xc) & 8) != 0)) goto LAB_00354503;
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_00345e88(param_1,*(int *)(param_1 + 0x30),0x8007274a);
  }
  bVar1 = *(byte *)(param_1 + 0x7c);
  if (bVar1 < 3) {
LAB_003544fe:
    iVar2 = -0x7ff8d8b7;
  }
  else {
    if (bVar1 < 5) {
      iVar2 = FUN_0035434a(param_1);
      if (iVar2 < 0) goto LAB_00354503;
      *(undefined1 *)(param_1 + 0x7c) = 5;
    }
    else {
      if (bVar1 != 9) goto LAB_003544fe;
      iVar2 = FUN_0035434a(param_1);
      if (iVar2 < 0) goto LAB_00354503;
      *(undefined1 *)(param_1 + 0x7c) = 10;
    }
    FUN_00345541(0xffffffff,8);
  }
LAB_00354503:
  FUN_00345541(0xffffff7f,0);
  KfLowerIrql();
  return iVar2;
}
