/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0CC65FFB93FD54A9FA1E7D32A3019D8C98A542DF061572454193BC9A52C9C7DB
 * Entry: 0x00101680, Ghidra index: 3243, label: FUN_00101680
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00101680(void)

{
  byte bVar1;
  uint in_EAX;
  uint uVar2;
  undefined3 extraout_var;
  undefined3 uVar3;
  int *in_ECX;
  byte in_DL;
  
  uVar3 = (undefined3)(in_EAX >> 8);
  uVar2 = in_EAX & 0xffffff00;
  if (in_ECX != (int *)0x0) {
    bVar1 = *(byte *)(in_ECX + 10);
    if ((bVar1 >> 1 & 1) != in_DL) {
      *(byte *)(in_ECX + 10) = (in_DL << 1 ^ bVar1) & 2 ^ bVar1;
      (**(code **)(*in_ECX + 0x24))();
      uVar3 = extraout_var;
    }
    uVar2 = CONCAT31(uVar3,1);
  }
  return uVar2;
}
