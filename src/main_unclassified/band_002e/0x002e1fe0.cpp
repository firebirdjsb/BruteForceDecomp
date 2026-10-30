/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0B5A6EF10F98EF6EFC331305C2299C65BE379CDE41D87FD914432999FECF27BF
 * Entry: 0x002e1fe0, Ghidra index: 10376, label: FUN_002e1fe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
FUN_002e1fe0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int in_ECX;
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (((param_2 == -2) && (*(int *)(in_ECX + 0x638) == -5)) &&
     (uVar1 = 0, *(int *)(in_ECX + 0x124) != 0)) {
    iVar3 = 0;
    do {
      if (*(int *)(*(int *)(in_ECX + 0x128) + 0x28 + iVar3) != 0) {
        FUN_002e1cc0(*(int *)(in_ECX + 0x128) + iVar3,param_5,param_3,param_4,0,0,3);
      }
      uVar1 = uVar1 + 1;
      iVar3 = iVar3 + 0x7c8;
    } while (uVar1 < *(uint *)(in_ECX + 0x124));
  }
  uVar1 = 0;
  if (*(int *)(in_ECX + 0x40) != 0) {
    puVar2 = (undefined4 *)(in_ECX + 0x44);
    do {
      (*(code *)**(undefined4 **)*puVar2)(param_1,param_2,param_3,param_4,param_5);
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar1 < *(uint *)(in_ECX + 0x40));
  }
  return 0;
}
