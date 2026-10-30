/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 34F945A05CD451322BE54824F1C688D2A42FEC853611D7910C73208398844BEE
 * Entry: 0x0001d550, Ghidra index: 133, label: FUN_0001d550
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0001d550(int param_1,int param_2,int param_3)

{
  int *in_EAX;
  int iVar1;
  int iVar2;
  
  if (param_1 == param_2) {
    *in_EAX = param_3;
    return;
  }
  do {
    iVar1 = param_2 + -0xc;
    iVar2 = param_3 + -0xc;
    *(undefined4 *)(param_3 + -8) = *(undefined4 *)(param_2 + -8);
    *(undefined4 *)(param_3 + -4) = *(undefined4 *)(param_2 + -4);
    param_2 = iVar1;
    param_3 = iVar2;
  } while (iVar1 != param_1);
  *in_EAX = iVar2;
  return;
}
