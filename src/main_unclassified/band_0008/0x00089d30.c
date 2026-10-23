/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 488141414A4927DDA8187A75FBD8CE5E19F9EF26E2651B79D36E7D4782A428BB
 * Entry: 0x00089d30, Ghidra index: 1647, label: FUN_00089d30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00089d30(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if ((((iVar1 != 0) && (iVar2 = FUN_0005baf0(), iVar2 == 0)) && (0 < *(int *)(iVar1 + 0x20))) &&
     ((*(byte *)(*(int *)(param_1 + 4) + 0xc50) & 0x10) == 0)) {
    if ((*(byte *)(param_1 + 0x24) & 0x10) != 0) {
      FUN_00179e10();
    }
    param_2 = *(float *)(param_1 + 0x20) - param_2;
    *(byte *)(param_1 + 0x24) = *(byte *)(param_1 + 0x24) & 0xef;
    *(float *)(param_1 + 0x20) = param_2;
    if (param_2 < 0.0 != (param_2 == 0.0)) {
      return 1;
    }
  }
  return 0;
}
