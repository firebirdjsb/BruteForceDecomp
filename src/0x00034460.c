/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6493C20365282003C9FB1928C7E2FB6EBF1E6B559346C9230361A1F57CA33D15
 * Entry: 0x00034460, Ghidra index: 340, label: FUN_00034460
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00034460(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 200))();
  if (iVar1 == 1) {
    *(undefined1 *)(in_ECX + 0x21d) = 0;
    in_ECX[0x17e] = 2;
    in_ECX[0xd5] = 0x40800000;
    in_ECX[0xd3] = 0x40800000;
    *(byte *)(in_ECX + 0xd4) = *(byte *)(in_ECX + 0xd4) & 0xf9 | 1;
    in_ECX[0x180] = 1;
    return 1;
  }
  return 0;
}
