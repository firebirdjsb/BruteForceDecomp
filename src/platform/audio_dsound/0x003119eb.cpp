/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3396BC9275D5FC443BB2CB1B786CC998A72642BD24CD91ED3FC1EB933C35B2AE
 * Entry: 0x003119eb, Ghidra index: 11906, label: FUN_003119eb
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003119eb(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_00315930(param_1,param_2,param_3);
  if (iVar1 < 0) {
    *(uint *)(in_ECX + 0x2b8) = *(uint *)(in_ECX + 0x2b8) & 0xfffffffe;
  }
  else {
    *(uint *)(in_ECX + 0x2b8) = *(uint *)(in_ECX + 0x2b8) | 1;
  }
  return;
}
