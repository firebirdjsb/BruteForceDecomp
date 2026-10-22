/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 00A41CFEDBB2A8DF3BDAB4F2C3FBCDA07AA6AF2AEDF395DA7B094DFC75580C8A
 * Entry: 0x0035343c, Ghidra index: 13085, label: FUN_0035343c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0035343c(int param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 < *(byte *)(param_1 + 0x7d)) {
    do {
      uVar1 = -(uint)(*(int *)(param_1 + 0x68) != param_1 + 100) & *(int *)(param_1 + 0x68) - 100U;
      FUN_00353101(uVar1);
      FUN_00346cd5(uVar1,1);
    } while (param_2 < *(byte *)(param_1 + 0x7d));
  }
  return;
}
