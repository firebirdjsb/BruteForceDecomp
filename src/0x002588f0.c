/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6C8FA43CDC6039B93F33DC765BD97324107DFBE434C3C49BC761655511E36BA7
 * Entry: 0x002588f0, Ghidra index: 8477, label: FUN_002588f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002588f0(int param_1,int param_2,undefined1 *param_3)

{
  undefined4 *unaff_EDI;
  
  for (; param_1 != param_2; param_2 = param_2 + -1) {
    param_3 = param_3 + -1;
    *param_3 = *(undefined1 *)(param_2 + -1);
  }
  *unaff_EDI = param_3;
  return;
}
