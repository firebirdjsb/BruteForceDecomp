/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F3EEB7A8AD420965DFA1243A08FCFF85C267B7C451DE527087251C2CDB5064ED
 * Entry: 0x001bb2d0, Ghidra index: 5731, label: FUN_001bb2d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001bb2d0(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  if (param_2 != param_3) {
    uVar1 = FUN_001cf620(param_3,*(undefined4 *)(unaff_ESI + 8));
    FUN_0027cc10();
    *(undefined4 *)(unaff_ESI + 8) = uVar1;
  }
  *param_1 = param_2;
  return;
}
