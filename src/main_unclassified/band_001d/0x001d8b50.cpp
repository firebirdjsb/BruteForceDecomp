/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8641B9A9F5329FD48D897B0227234BD830D381DC270C065AF9CC7734434E5FE7
 * Entry: 0x001d8b50, Ghidra index: 6440, label: FUN_001d8b50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d8b50(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *unaff_EDI;
  
  if (param_1 == param_2) {
    *unaff_EDI = *param_3;
    return;
  }
  do {
    iVar1 = param_2 + -0x3c;
    puVar2 = param_3 + -0xf;
    *puVar2 = *(undefined4 *)(param_2 + -0x3c);
    param_3[-0xe] = *(undefined4 *)(param_2 + -0x38);
    param_3[-0xd] = *(undefined4 *)(param_2 + -0x34);
    *(undefined1 *)(param_3 + -0xc) = *(undefined1 *)(param_2 + -0x30);
    *(undefined1 *)((int)param_3 + -0x2f) = *(undefined1 *)(param_2 + -0x2f);
    param_3[-0xb] = *(undefined4 *)(param_2 + -0x2c);
    param_3[-10] = *(undefined4 *)(param_2 + -0x28);
    param_3[-9] = *(undefined4 *)(param_2 + -0x24);
    param_3[-8] = *(undefined4 *)(param_2 + -0x20);
    param_3[-7] = *(undefined4 *)(param_2 + -0x1c);
    param_3[-6] = *(undefined4 *)(param_2 + -0x18);
    param_3[-5] = *(undefined4 *)(param_2 + -0x14);
    param_3[-4] = *(undefined4 *)(param_2 + -0x10);
    param_3[-3] = *(undefined4 *)(param_2 + -0xc);
    param_3[-2] = *(undefined4 *)(param_2 + -8);
    *(undefined1 *)(param_3 + -1) = *(undefined1 *)(param_2 + -4);
    param_2 = iVar1;
    param_3 = puVar2;
  } while (iVar1 != param_1);
  *unaff_EDI = *puVar2;
  return;
}
