/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9953310EB7A5C3738AEB72A55E05D4E2D221698AC0BD14B5221D4F27F67670E9
 * Entry: 0x0010c140, Ghidra index: 3461, label: FUN_0010c140
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_0010c140(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = param_3;
  puVar3 = param_1;
  puVar2 = param_2;
  while (puVar2 != puVar4) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_0010c200(&param_1,puVar2);
    puVar2 = puVar1;
  }
  *puVar3 = puVar2;
  return puVar3;
}
