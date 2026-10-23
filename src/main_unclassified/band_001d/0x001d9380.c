/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3D5754ED8A0C5BA53C1DA6BD6F1DFD27FDD2E151E1061D100AE1A1411B89DBCF
 * Entry: 0x001d9380, Ghidra index: 6462, label: FUN_001d9380
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d9380(int param_1,int param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *unaff_EDI;
  
  if (param_1 == param_2) {
    *unaff_EDI = param_3;
    return;
  }
  do {
    iVar1 = param_2 + -0x1c;
    puVar2 = param_3 + -0x1c;
    *puVar2 = *(undefined1 *)(param_2 + -0x1c);
    param_3[-0x1b] = *(undefined1 *)(param_2 + -0x1b);
    param_3[-0x1a] = *(undefined1 *)(param_2 + -0x1a);
    *(undefined4 *)(param_3 + -0x18) = *(undefined4 *)(param_2 + -0x18);
    *(undefined4 *)(param_3 + -0x14) = *(undefined4 *)(param_2 + -0x14);
    *(undefined4 *)(param_3 + -0x10) = *(undefined4 *)(param_2 + -0x10);
    *(undefined4 *)(param_3 + -0xc) = *(undefined4 *)(param_2 + -0xc);
    *(undefined4 *)(param_3 + -8) = *(undefined4 *)(param_2 + -8);
    *(undefined4 *)(param_3 + -4) = *(undefined4 *)(param_2 + -4);
    param_2 = iVar1;
    param_3 = puVar2;
  } while (iVar1 != param_1);
  *unaff_EDI = puVar2;
  return;
}
