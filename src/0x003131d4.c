/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0F3C2B57A3C0C63BA670759D68FCFC984B877F8FEEE411AD29D5F1044B93474A
 * Entry: 0x003131d4, Ghidra index: 11996, label: FUN_003131d4
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003131d4(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 200) = 0;
  *(undefined4 *)(in_ECX + 0xc0) = param_1;
  *(undefined4 *)(in_ECX + 0xc4) = param_2;
  *(undefined4 *)(in_ECX + 0xcc) = param_2;
  return;
}
