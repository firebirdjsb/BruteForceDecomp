/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6F91ECA1B512F4F69E095924C076CC2A467FD6739FE5046B78F81AAE67042B56
 * Entry: 0x002f648f, Ghidra index: 10914, label: FUN_002f648f
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002f648f(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if ((*(byte *)(param_3 + -0xb) & 1) == 0) {
    iVar1 = -1;
  }
  else if ((*(byte *)(param_3 + -0xb) & 8) == 0) {
    iVar1 = (uint)*(ushort *)(param_3 + -0x10) * 0x10 - (uint)*(byte *)(param_3 + -10);
  }
  else {
    iVar1 = *(int *)(param_3 + -0x18) - (uint)*(ushort *)(param_3 + -0x10);
  }
  return iVar1;
}
