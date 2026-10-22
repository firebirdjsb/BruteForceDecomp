/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 93AEDC6126B545B439198A87A3143BE868704F78D9A7148E19FA8771B2532952
 * Entry: 0x0027a940, Ghidra index: 8957, label: FUN_0027a940
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0027a940(void)

{
  undefined4 uVar1;
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  if (in_EAX != (undefined4 *)0x0) {
    *in_EAX = *in_ECX;
    in_EAX[1] = in_ECX[1];
    uVar1 = in_ECX[3];
    in_EAX[2] = in_ECX[2];
    in_EAX[3] = uVar1;
  }
  return;
}
