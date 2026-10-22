/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E83E9148CFC2ECAF9F13EBDD7CF081742B139E873AA51B511C649410659A6EBD
 * Entry: 0x000d4240, Ghidra index: 2642, label: FUN_000d4240
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000d4240(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  undefined4 in_EDX;
  
  *in_EAX = in_EDX;
  uVar1 = in_ECX[2];
  uVar2 = in_ECX[1];
  in_EAX[1] = *in_ECX;
  in_EAX[2] = uVar2;
  in_EAX[3] = uVar1;
  in_EAX[4] = param_1;
  return;
}
