/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 87E458D721ACE8D60907F46DF7801F807F9F2E3C7C28A6976BCE678304944FA1
 * Entry: 0x00312e64, Ghidra index: 11985, label: FUN_00312e64
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00312e64(byte param_1)

{
  undefined4 in_ECX;
  
  FUN_00311d35();
  if ((param_1 & 1) != 0) {
    FUN_00314937(in_ECX);
  }
  return;
}
