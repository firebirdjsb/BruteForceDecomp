/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 55FB658C536F8E80C5471A1575998FD310C3BF99DDA147754782ECE9003AB8F7
 * Entry: 0x003556b8, Ghidra index: 13121, label: FUN_003556b8
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_003556b8(int param_1,int param_2,short param_3)

{
  int iVar1;
  uint extraout_ECX;
  
  if (param_2 == 0) {
    if (param_3 != 0) {
      return -0x7ff8d8bf;
    }
  }
  else if (param_3 == 0) {
    return -0x7ff8d8bf;
  }
  if (((((byte)param_2 & 0xf0) == 0xe0) && (param_2 != -1)) ||
     (((byte)param_2 == 0x7f && (param_2 != 0x100007f)))) {
    return -0x7ff8d8bf;
  }
  if ((param_2 == *(int *)(param_1 + 0x44)) && (param_3 == *(short *)(param_1 + 0x48))) {
    return 0;
  }
  if ((param_2 == -1) && ((*(byte *)(param_1 + 0xe) & 2) == 0)) {
    return -0x7ff8d8e3;
  }
  KeRaiseIrqlToDpcLevel();
  if ((*(byte *)(param_1 + 0xc) & 0x40) != 0) {
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined2 *)(param_1 + 0x48) = 0;
    if (*(int *)(param_1 + 0x4c) != 0) {
      FUN_00347b2c(*(int *)(param_1 + 0x4c));
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
    FUN_00345541(0xffffffbf,0);
  }
  FUN_003455c1(param_1);
  if (param_2 != 0) {
    if (((*(byte *)(param_1 + 0xc) & 0x20) == 0) &&
       (iVar1 = FUN_003457b3(param_1,extraout_ECX & 0xffff0000), iVar1 < 0)) goto LAB_0035579c;
    *(int *)(param_1 + 0x44) = param_2;
    *(short *)(param_1 + 0x48) = param_3;
    FUN_00345541(0xffffffff,0x40);
  }
  iVar1 = 0;
LAB_0035579c:
  KfLowerIrql();
  return iVar1;
}
