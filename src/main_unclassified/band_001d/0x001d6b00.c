/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 470AB02DA6796D38B8C1A4CEA2D280C1149908B0E12C4FBD3AE2E8BB0B8E453A
 * Entry: 0x001d6b00, Ghidra index: 6372, label: FUN_001d6b00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d6b00(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *unaff_EDI;
  
  if (param_1 == param_2) {
    *unaff_EDI = param_3;
    return;
  }
  do {
    iVar1 = param_2 + -0x18;
    puVar2 = param_3 + -6;
    *puVar2 = *(undefined4 *)(param_2 + -0x18);
    param_3[-5] = *(undefined4 *)(param_2 + -0x14);
    param_3[-4] = *(undefined4 *)(param_2 + -0x10);
    *(undefined1 *)(param_3 + -3) = *(undefined1 *)(param_2 + -0xc);
    *(undefined1 *)((int)param_3 + -0xb) = *(undefined1 *)(param_2 + -0xb);
    param_3[-2] = *(undefined4 *)(param_2 + -8);
    param_3[-1] = *(undefined4 *)(param_2 + -4);
    param_2 = iVar1;
    param_3 = puVar2;
  } while (iVar1 != param_1);
  *unaff_EDI = puVar2;
  return;
}
