/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B8D3A5E5B8B382F43EA397F9AD1EF426BE8885A1E22EADC7B22DEB7C7B5FF0CF
 * Entry: 0x001dcc40, Ghidra index: 6586, label: FUN_001dcc40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dcc40(int param_1,int param_2,undefined2 *param_3)

{
  undefined4 *in_EAX;
  
  for (; param_1 != param_2; param_2 = param_2 + -2) {
    param_3 = param_3 + -1;
    *param_3 = *(undefined2 *)(param_2 + -2);
  }
  *in_EAX = param_3;
  return;
}
