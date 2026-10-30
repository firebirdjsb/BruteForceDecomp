/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 788FA24DE34FB6DFD5185A1CE9472294DAB3CDBF447C110C919501BCEC7D92E6
 * Entry: 0x003024c0, Ghidra index: 11080, label: FUN_003024c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003024c0(int param_1)

{
  int iVar1;
  int *in_ECX;
  uint uVar2;
  
  if (*(ushort *)((int)in_ECX + 0x26) != 0) {
    uVar2 = (uint)*(ushort *)((int)in_ECX + 0x26);
    while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
      iVar1 = *(int *)(in_ECX[10] + uVar2 * 4);
      if (*(int *)(iVar1 + 0x90) == param_1) {
        (**(code **)(*in_ECX + 0x24))(iVar1);
      }
    }
  }
  return;
}
