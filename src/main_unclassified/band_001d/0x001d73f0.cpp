/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9DCDC2FE28CD0349FAD0A3E4784757F80498D9349346807A3FC3FBFED04BB30E
 * Entry: 0x001d73f0, Ghidra index: 6394, label: FUN_001d73f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched C++17 declaration only; original Xbox guest ABI_UNVERIFIED. */
extern void FUN_000b0db0(void);
void FUN_001d73f0(int *param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_2 != param_3) {
    iVar3 = param_3 + 8;
    puVar4 = (undefined4 *)(param_4 + 0xc);
    do {
      *(undefined4 *)(param_4 + -0x24) = *(undefined4 *)(param_3 + -0x24);
      uVar1 = *(undefined4 *)(iVar3 + -0x20);
      uVar2 = *(undefined4 *)(iVar3 + -0x24);
      param_3 = param_3 + -0x24;
      param_4 = param_4 + -0x24;
      puVar4[-0xb] = *(undefined4 *)(iVar3 + -0x28);
      puVar4[-10] = uVar2;
      puVar4[-9] = uVar1;
      puVar4[-8] = *(undefined4 *)(iVar3 + -0x1c);
      FUN_000b0db0();
      iVar3 = iVar3 + -0x24;
      puVar4 = puVar4 + -9;
    } while (param_3 != param_2);
    *param_1 = param_4;
    return;
  }
  *param_1 = param_4;
  return;
}
