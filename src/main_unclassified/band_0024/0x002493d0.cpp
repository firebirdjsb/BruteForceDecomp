/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A9F152A4FCE91D158C41B448EA419C7183CCE936369A1E12AACD570DBC8287C7
 * Entry: 0x002493d0, Ghidra index: 8166, label: FUN_002493d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched C++17 declaration only; original Xbox guest ABI_UNVERIFIED. */
extern void FUN_00235c70(void);
void FUN_002493d0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *unaff_EBX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x14) {
    *param_1 = *unaff_EBX;
    param_1[1] = unaff_EBX[1];
    FUN_00235c70();
  }
  return;
}
