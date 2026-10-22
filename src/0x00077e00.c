/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 857066BB53CD4CBD381624494E490B62C0CFE3ECDC8C30CF62EB6C832CD0DA5A
 * Entry: 0x00077e00, Ghidra index: 1414, label: FUN_00077e00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00077e00(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 1) {
    return (int)*(float *)(param_1 + 4);
  }
  if (iVar1 != 2) {
    if (iVar1 != 3) {
      return 0;
    }
    return (uint)*(byte *)(param_1 + 4);
  }
  return *(uint *)(param_1 + 4);
}
