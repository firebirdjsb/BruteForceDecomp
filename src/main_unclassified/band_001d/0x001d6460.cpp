/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C458383790F9D8503FD9EE2DAE7A93A896349CC148115A671C8AB5455293DC96
 * Entry: 0x001d6460, Ghidra index: 6353, label: FUN_001d6460
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d6460(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *in_EAX;
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 == param_2) {
    *in_EAX = param_3;
    return;
  }
  do {
    iVar1 = param_2 + -8;
    puVar2 = param_3 + -2;
    *puVar2 = *(undefined4 *)(param_2 + -8);
    param_3[-1] = *(undefined4 *)(param_2 + -4);
    param_2 = iVar1;
    param_3 = puVar2;
  } while (iVar1 != param_1);
  *in_EAX = puVar2;
  return;
}
