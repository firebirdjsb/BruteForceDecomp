/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 601A9A2D40BA0B71B574491A613C67154F9E9DADC9FB6FFB97D7D0F78333B49C
 * Entry: 0x001b4ef0, Ghidra index: 5663, label: FUN_001b4ef0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b4ef0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_002ea01d(0x14);
  if (iVar1 != 0) {
    FUN_001c4cb0(iVar1);
    *(undefined4 *)(iVar1 + 0x10) = 0;
    FUN_001cd360();
    *param_1 = iVar1;
    return;
  }
  *param_1 = 0;
  return;
}
