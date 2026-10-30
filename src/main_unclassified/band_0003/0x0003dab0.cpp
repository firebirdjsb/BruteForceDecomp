/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2D756300F6BCFBA38E0F83788A937EA4D9C63D6B7F48A77F8D4D86B52D6230B1
 * Entry: 0x0003dab0, Ghidra index: 459, label: FUN_0003dab0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0003bec0(undefined4 *param_1);
extern void FUN_0003da40(float param_1);

void FUN_0003dab0(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = param_1;
  local_4 = param_2;
  FUN_0003bec0(&local_8);
  FUN_0003da40(param_1);
  return;
}
