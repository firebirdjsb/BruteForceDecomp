/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F5B43C6F53A0D9CE6AB91D8DDDE913ED53FD46D33B7199DBC4B848A51A2C0EEA
 * Entry: 0x0014d730, Ghidra index: 4368, label: FUN_0014d730
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0014d730(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int unaff_ESI;
  
  cVar1 = FUN_0014d680(param_1,param_2);
  if (cVar1 != '\0') {
    *(undefined4 *)(unaff_ESI + 0x1c0) = param_1;
    *(undefined4 *)(unaff_ESI + 0x1c4) = param_2;
  }
  return;
}
