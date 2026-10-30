/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F485C2EBCBC0314EA67B1AE1857D33AFF37EE729A1CDF453340177762B83BA2A
 * Entry: 0x00078200, Ghidra index: 1420, label: FUN_00078200
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint FUN_00077fb0(undefined4 *param_1);

undefined4 FUN_00078200(undefined4 param_1)

{
  int in_EAX;
  undefined4 uVar1;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  if (in_EAX != 0) {
    uVar1 = FUN_00077fb0(in_ECX,param_1);
    return uVar1;
  }
  return 1;
}
