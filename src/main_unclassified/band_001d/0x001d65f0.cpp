/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 31C7ECC4BE6B14B8C4CC137AD78CC5D6D78E4C9BC77D6CA4CCF28B993B85B3BC
 * Entry: 0x001d65f0, Ghidra index: 6358, label: FUN_001d65f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d65f0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *unaff_EDI;
  
  if (param_1 == param_2) {
    *unaff_EDI = *param_3;
    return;
  }
  do {
    iVar1 = param_2 + -0x10;
    puVar2 = param_3 + -4;
    *puVar2 = *(undefined4 *)(param_2 + -0x10);
    *(undefined1 *)(param_3 + -3) = *(undefined1 *)(param_2 + -0xc);
    param_3[-2] = *(undefined4 *)(param_2 + -8);
    param_3[-1] = *(undefined4 *)(param_2 + -4);
    param_2 = iVar1;
    param_3 = puVar2;
  } while (iVar1 != param_1);
  *unaff_EDI = *puVar2;
  return;
}
