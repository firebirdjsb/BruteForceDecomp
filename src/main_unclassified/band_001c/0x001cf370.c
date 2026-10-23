/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BA6DD1B70072F65EA7583C8D270B367CF5FE5C6E2F89CE9BCC84D2557D6783B5
 * Entry: 0x001cf370, Ghidra index: 6105, label: FUN_001cf370
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001cf370(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *unaff_EBX;
  
  if (param_1 != param_2) {
    do {
      *param_1 = *unaff_EBX;
      FUN_001d4290(unaff_EBX + 1);
      param_1 = param_1 + 5;
    } while (param_1 != param_2);
  }
  return;
}
