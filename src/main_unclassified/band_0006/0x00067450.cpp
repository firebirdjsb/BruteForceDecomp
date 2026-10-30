/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C2F694ABB73E9D39261A1F7A554CC8C91BF0EF65D6C18DECFC64A7D196ADF8B1
 * Entry: 0x00067450, Ghidra index: 1126, label: FUN_00067450
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00067450(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x8c) + 1;
  *(int *)(param_1 + 0x8c) = iVar1;
  return iVar1;
}
