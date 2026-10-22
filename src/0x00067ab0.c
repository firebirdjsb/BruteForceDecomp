/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5D6E41D9018DD1DB9237C6068A527AFE3DE8020D8411D1DD3600C315F877066F
 * Entry: 0x00067ab0, Ghidra index: 1134, label: FUN_00067ab0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00067ab0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x22] != 0) {
    param_1[0x22] = param_1[0x22] + -1;
  }
  iVar1 = param_1[0x22];
  if (iVar1 == 0) {
    param_1[0x22] = 1;
    (**(code **)(*param_1 + 0x6c))(1);
    iVar1 = 0;
  }
  return iVar1;
}
