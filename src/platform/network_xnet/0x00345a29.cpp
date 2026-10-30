/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3344D36E1E5630C2B08F5444C6CD3B1BFF416D66FA5D0508DF06015F4B5DFDA7
 * Entry: 0x00345a29, Ghidra index: 12819, label: FUN_00345a29
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00345a29(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  KeRaiseIrqlToDpcLevel();
  if ((*(uint *)(param_1 + 0xc) & 2) == 0) {
    uVar2 = -(uint)(*(uint *)(param_1 + 0x3c) < *(uint *)(param_1 + 0x58)) & 0x1000 |
            -(uint)(*(int **)(param_1 + 0x24) != (int *)(param_1 + 0x24)) & 0x800;
  }
  else {
    if ((*(int *)(param_1 + 0x40) < 0) &&
       ((param_2 != 0x10000 || ((*(uint *)(param_1 + 0xc) & 0x100) == 0)))) {
      uVar2 = 0x10000;
      goto LAB_00345b1c;
    }
    iVar1 = FUN_003537fa();
    uVar2 = -(uint)(*(int *)(param_1 + 0x2c) != 0) & 0x800 |
            (-(uint)(*(byte *)(param_1 + 0x7c) < 7) & 0xffff7800) + 0x8800 |
            -(uint)(iVar1 != 0) & 0x2000;
    if ((*(uint *)(param_1 + 0xc) & 0x40) != 0) {
      if (*(uint *)(param_1 + 0x3c) < *(uint *)(param_1 + 0x58)) {
        uVar2 = uVar2 | 0x1000;
      }
      if ((((param_2 & 0x4000) != 0) && ((*(uint *)(param_1 + 0xc) & 0x100) == 0)) &&
         (uVar2 = uVar2 | 0x4000, -1 < param_3)) {
        FUN_00345541(0xffffffff,0x100);
      }
    }
  }
  uVar2 = uVar2 & param_2;
  if ((uVar2 == 0) && (param_3 != 0)) {
    FUN_00345541(0xfffe07ff,param_2 & 0x1f800);
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
LAB_00345b1c:
  KfLowerIrql();
  return uVar2;
}
