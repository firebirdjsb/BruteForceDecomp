/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 791992BD8D647201AA014AC6C6DF474F1FC464CC8C7C87B05C16DA61DF8B41E5
 * Entry: 0x002614a0, Ghidra index: 8634, label: FUN_002614a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002614a0(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *in_EAX;
  
  for (; param_1 != param_2; param_2 = param_2 + -4) {
    param_3 = param_3 + -1;
    *param_3 = *(undefined4 *)(param_2 + -4);
  }
  *in_EAX = param_3;
  return;
}
