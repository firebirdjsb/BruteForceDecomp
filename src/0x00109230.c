/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 98437E5B27C6F7FB92AF7AC7D861AEEB798FD0473681322E5F5A4C6E1267A525
 * Entry: 0x00109230, Ghidra index: 3400, label: FUN_00109230
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00109230(int param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  int *piVar4;
  
  uVar3 = 0;
  if ((*(int *)(param_1 + 0x24) == -0x171eb031) && (*param_2 == -0xafe436)) {
    bVar2 = FUN_00106eb0();
    piVar4 = (int *)FUN_00100f90();
    if ((piVar4 != (int *)0x0) && (bVar1 = *(byte *)(piVar4 + 10), (bVar1 >> 1 & 1) != bVar2)) {
      *(byte *)(piVar4 + 10) = (bVar2 << 1 ^ bVar1) & 2 ^ bVar1;
      (**(code **)(*piVar4 + 0x24))();
    }
    piVar4 = (int *)FUN_00100f90();
    if ((piVar4 != (int *)0x0) && (bVar1 = *(byte *)(piVar4 + 10), (bVar1 >> 1 & 1) != bVar2)) {
      *(byte *)(piVar4 + 10) = (bVar2 << 1 ^ bVar1) & 2 ^ bVar1;
      (**(code **)(*piVar4 + 0x24))();
    }
    uVar3 = 1;
  }
  return uVar3;
}
