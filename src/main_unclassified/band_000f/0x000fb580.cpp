/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BFA7D2DAD55AC930BF422C60EADB6654B098BEC36E0415D6C619C69148B5CE36
 * Entry: 0x000fb580, Ghidra index: 3132, label: FUN_000fb580
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000fb580(int param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  int *piVar4;
  
  uVar3 = 0;
  if (((*(int *)(param_1 + 0x24) == -0xb018149) || (*(int *)(param_1 + 0x24) == -0xd4c479f)) &&
     ((*param_2 == -0x12069f22 || (*param_2 == -0xafe436)))) {
    piVar4 = (int *)FUN_00100f90();
    if (piVar4 != (int *)0x0) {
      bVar2 = FUN_000f9470();
      bVar1 = *(byte *)(piVar4 + 10);
      if ((bVar1 >> 1 & 1) != bVar2) {
        *(byte *)(piVar4 + 10) = (bVar2 << 1 ^ bVar1) & 2 ^ bVar1;
        (**(code **)(*piVar4 + 0x24))();
      }
    }
    piVar4 = (int *)FUN_00100f90();
    if (piVar4 != (int *)0x0) {
      bVar2 = FUN_000f94c0();
      bVar1 = *(byte *)(piVar4 + 10);
      if ((bVar1 >> 1 & 1) != bVar2) {
        *(byte *)(piVar4 + 10) = (bVar2 << 1 ^ bVar1) & 2 ^ bVar1;
        (**(code **)(*piVar4 + 0x24))();
      }
    }
    piVar4 = (int *)FUN_00100f90();
    if (piVar4 != (int *)0x0) {
      bVar2 = FUN_00106600();
      bVar1 = *(byte *)(piVar4 + 10);
      if ((bVar1 >> 1 & 1) != bVar2) {
        *(byte *)(piVar4 + 10) = (bVar2 << 1 ^ bVar1) & 2 ^ bVar1;
        (**(code **)(*piVar4 + 0x24))();
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}
