/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1EFDCCF167BD4720B351C8E5C8BF491F616BC1798F8CD51247EDFB68981A0B12
 * Entry: 0x001450f0, Ghidra index: 4186, label: FUN_001450f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001450f0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int in_ECX;
  
  uVar1 = FUN_000120f0();
  if (*(int *)(in_ECX + 0x10) != param_1) {
    FUN_0008f6a0(param_1);
  }
  uVar2 = FUN_000120f0();
  if ((uVar1 != 0) && ((uVar1 & -(uint)((*(byte *)(uVar1 + 0x26) & 0x40) != 0)) != 0)) {
    *(undefined4 *)(uVar1 + 0x184) = 0;
  }
  if ((uVar2 != 0) && ((uVar2 & -(uint)((*(byte *)(uVar2 + 0x26) & 0x40) != 0)) != 0)) {
    *(int *)(uVar2 + 0x184) = in_ECX;
  }
  return;
}
