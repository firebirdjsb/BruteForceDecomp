/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3A191A6F2589B935699901030FA0487C45F154BA57B18F5EED37293EC3618A91
 * Entry: 0x00383904, Ghidra index: 13626, label: FUN_00383904
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00383904(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((*(byte *)(param_2 + 0x22) & 1) != 0) {
    return 0x40020000;
  }
  KeRaiseIrqlToDpcLevel();
  iVar2 = *(int *)(param_2 + 0x10);
  if ((*(byte *)(iVar2 + 0x10) & 0x10) == 0) {
    if ((*(ushort *)(param_2 + 0x22) & 2) != 0) {
      cVar1 = *(char *)(iVar2 + 0x11);
      if (cVar1 == '\0') {
        FUN_00383775();
      }
      else if (cVar1 == '\x02') {
        FUN_003837ae();
      }
      else {
        if (cVar1 != '\x03') {
          uVar3 = 0x80000600;
          goto LAB_003839ab;
        }
        FUN_003837e7();
      }
      *(char *)(iVar2 + 0x26) = *(char *)(iVar2 + 0x26) + -1;
      *(byte *)(param_2 + 0x22) = *(byte *)(param_2 + 0x22) | 1;
      *(undefined4 *)(param_2 + 4) = 0xc000000f;
      FUN_00380eda(param_2);
      uVar3 = 0;
      goto LAB_003839ab;
    }
    *(ushort *)(param_2 + 0x22) = *(ushort *)(param_2 + 0x22) | 1;
    *(int *)(param_2 + 0x24) = *(int *)(param_1 + 0x42c);
    *(int *)(param_1 + 0x42c) = param_2;
    FUN_0038388c();
  }
  uVar3 = 0x40020000;
LAB_003839ab:
  KfLowerIrql();
  return uVar3;
}
