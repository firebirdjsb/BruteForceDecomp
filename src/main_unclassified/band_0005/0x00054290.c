/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 26B0D5733A84068038E5CCC5A1EB7DCCB280DC65698745D16BE72EF885EA7E7B
 * Entry: 0x00054290, Ghidra index: 788, label: FUN_00054290
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00054290(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = (param_2 - param_1) / 0x28;
  if (0 < iVar1) {
    puVar2 = (undefined4 *)(param_1 + 8 + iVar1 * 0x14);
    do {
      iVar1 = iVar1 + -1;
      FUN_000543e0(param_1,puVar2[-7],puVar2[-6],puVar2[-5],puVar2[-4],puVar2[-3]);
      puVar2 = puVar2 + -5;
    } while (0 < iVar1);
  }
  return;
}
