/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DF99EA76422407F7A0655E57541A53FEDA1C6C2E08F42ADE32B92D62045E6AFA
 * Entry: 0x003174e7, Ghidra index: 12178, label: FUN_003174e7
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003174e7(void)

{
  uint uVar1;
  int *in_ECX;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = 0;
  if (in_ECX[1] != 0) {
    do {
      *(undefined1 *)(iVar2 + 0xf + *in_ECX) = 0x80;
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0x10;
    } while (uVar1 < (uint)in_ECX[1]);
  }
  return;
}
