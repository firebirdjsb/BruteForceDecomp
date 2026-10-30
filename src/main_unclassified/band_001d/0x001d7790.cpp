/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8B8F63DC8F8C82240AB0D7DB069CA1E29422540669063C7D4BA50182CBBC59B0
 * Entry: 0x001d7790, Ghidra index: 6402, label: FUN_001d7790
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d7790(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *unaff_EDI;
  
  if (param_1 == param_2) {
    *unaff_EDI = *param_3;
    return;
  }
  do {
    iVar1 = param_2 + -0x24;
    puVar2 = param_3 + -9;
    *puVar2 = *(undefined4 *)(param_2 + -0x24);
    param_3[-8] = *(undefined4 *)(param_2 + -0x20);
    param_3[-7] = *(undefined4 *)(param_2 + -0x1c);
    param_3[-6] = *(undefined4 *)(param_2 + -0x18);
    param_3[-5] = *(undefined4 *)(param_2 + -0x14);
    param_3[-4] = *(undefined4 *)(param_2 + -0x10);
    param_3[-3] = *(undefined4 *)(param_2 + -0xc);
    *(undefined1 *)(param_3 + -2) = *(undefined1 *)(param_2 + -8);
    *(undefined1 *)((int)param_3 + -7) = *(undefined1 *)(param_2 + -7);
    param_3[-1] = *(undefined4 *)(param_2 + -4);
    param_2 = iVar1;
    param_3 = puVar2;
  } while (iVar1 != param_1);
  *unaff_EDI = *puVar2;
  return;
}
