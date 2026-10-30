/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D59D53FB9798B4144562AE98CDAF3AC1F7921F56021D939DA83D54DA8252079D
 * Entry: 0x00218c70, Ghidra index: 7482, label: FUN_00218c70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00218c70(int *param_1,int *param_2,int param_3,int param_4)

{
  undefined4 *in_EAX;
  
  for (; (param_1 != param_2 && ((*param_1 != param_3 || (param_1[1] != param_4))));
      param_1 = param_1 + 5) {
  }
  *in_EAX = param_1;
  return;
}
