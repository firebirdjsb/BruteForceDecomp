/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0D929993D4944F5318053669BFF5DD621D6082A5F064D40F8F73A7DA6C76706E
 * Entry: 0x000a0750, Ghidra index: 1897, label: FUN_000a0750
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000a0860(void);

void FUN_000a0750(int param_1,undefined4 param_2)

{
  int in_ECX;
  
  if (0x28 < (param_1 - in_ECX) / 0xc) {
    FUN_000a0860(param_2);
    FUN_000a0860(param_2);
    FUN_000a0860(param_2);
    FUN_000a0860(param_2);
    return;
  }
  FUN_000a0860(param_2);
  return;
}
