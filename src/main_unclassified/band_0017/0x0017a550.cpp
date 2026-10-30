/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4C5E037129A44EEB1E848799E468B98D45137D44BEFB9AC748BAD3A4B077AE0F
 * Entry: 0x0017a550, Ghidra index: 5011, label: FUN_0017a550
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0017a550(undefined4 param_1)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  undefined4 in_EDX;
  
  *in_EAX = in_EDX;
  in_EAX[1] = param_1;
  in_EAX[2] = *in_ECX;
  in_EAX[3] = in_ECX[1];
  in_EAX[4] = in_ECX[2];
  in_EAX[5] = in_ECX[3];
  return;
}
