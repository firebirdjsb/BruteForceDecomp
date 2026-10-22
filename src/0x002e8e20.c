/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 41DA2D9664C9D7B86F99CDA8063AEEE2249198FF603F668F9567434848E0F20E
 * Entry: 0x002e8e20, Ghidra index: 10546, label: FUN_002e8e20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002e8e20(undefined4 param_1)

{
  int *in_ECX;
  undefined4 local_4;
  
  local_4 = 1;
  (**(code **)(*in_ECX + 0x48))(param_1,&local_4);
  return;
}
