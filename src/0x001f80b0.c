/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F38BDD90B9710DE851021CC07B88A6D7B6125F43335091FD4DFA522AB0208868
 * Entry: 0x001f80b0, Ghidra index: 7058, label: FUN_001f80b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001f80b0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int in_EAX;
  
  if (0x28 < (param_2 - in_EAX) / 0xc) {
    FUN_001f81d0(param_3);
    FUN_001f81d0(param_3);
    FUN_001f81d0(param_3);
    FUN_001f81d0(param_3);
    return;
  }
  FUN_001f81d0(param_3);
  return;
}
