/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3A2D72ACF794F42E3222B534F1FB81968956E20EA9C25154418D5A02AB5C3FF3
 * Entry: 0x00101650, Ghidra index: 3242, label: FUN_00101650
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00101650(void)

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
    if (in_DL != (bVar1 >> 2 & 1)) {
      *(byte *)(in_ECX + 10) = (in_DL << 2 ^ bVar1) & 4 ^ bVar1;
      (**(code **)(*in_ECX + 0x28))();
      uVar3 = extraout_var;
    }
    uVar2 = CONCAT31(uVar3,1);
  }
  return uVar2;
}
