/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9518A1C73BE5E93533B53C87BC64D7115D221F78BA8E3A61417333EC4395003B
 * Entry: 0x0033ea20, Ghidra index: 12623, label: FUN_0033ea20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0033ea20(int param_1)

{
  int in_ECX;
  
  if (param_1 != 0) {
    XAPILIB__HeapFree(*(undefined4 *)(in_ECX + 0x8c),0,param_1);
  }
  return;
}
