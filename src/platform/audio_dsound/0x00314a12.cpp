/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0BB3C55A65A6392E768AF77B45363201363A96A74C28C18CC5F3BC8B08D9C7D1
 * Entry: 0x00314a12, Ghidra index: 12077, label: FUN_00314a12
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00314a12(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  in_ECX[1] = in_ECX[1] | 1;
  *in_ECX = param_1;
  return;
}
