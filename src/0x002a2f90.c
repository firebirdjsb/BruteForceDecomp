/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7F64738C9B547481D3E2602FD3EAE614A153F09F3FB0347BEA5E5EB9A31F2D62
 * Entry: 0x002a2f90, Ghidra index: 9534, label: FUN_002a2f90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002a2f90(int param_1)

{
  int in_ECX;
  
  FUN_002a5bd0(param_1);
  *(undefined4 *)(in_ECX + 0xac) = *(undefined4 *)(param_1 + 0xac);
  FUN_00262da0();
  *(undefined4 *)(in_ECX + 200) = *(undefined4 *)(param_1 + 200);
  return;
}
