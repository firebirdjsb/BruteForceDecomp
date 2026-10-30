/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7F7ADCCC99B4F19E5F030EBB0D03E92974DF1376A77D630420ABB36C6DFD1E0D
 * Entry: 0x0016e650, Ghidra index: 4819, label: FUN_0016e650
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0016e650(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (param_2 - param_1) / 0x28;
  if (0 < iVar1) {
    iVar2 = param_1 + 8 + iVar1 * 0x14;
    do {
      iVar1 = iVar1 + -1;
      FUN_0016e920(param_1,*(undefined4 *)(iVar2 + -0x1c),*(undefined4 *)(iVar2 + -0x18),
                   *(undefined4 *)(iVar2 + -0x14),*(undefined4 *)(iVar2 + -0x10),
                   *(undefined4 *)(iVar2 + -0xc));
      iVar2 = iVar2 + -0x14;
    } while (0 < iVar1);
  }
  return;
}
