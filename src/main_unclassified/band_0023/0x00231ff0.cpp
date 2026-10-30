/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A93240DC918278BC076350E0EF63DF37AA0F39CFB30DEA55CD9F7E2D20F1DF6A
 * Entry: 0x00231ff0, Ghidra index: 7758, label: FUN_00231ff0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00231ff0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_EAX;
  int iVar3;
  undefined4 *in_ECX;
  int in_EDX;
  
  if ((in_EAX < 2) && (-1 < in_EAX)) {
    *(byte *)(in_EDX + 0x224) = *(byte *)(in_EDX + 0x224) | 0x10;
    uVar1 = in_ECX[2];
    iVar3 = in_EAX * 0x30 + in_EDX;
    uVar2 = in_ECX[1];
    *(undefined4 *)(iVar3 + 0x318) = *in_ECX;
    *(undefined4 *)(iVar3 + 0x31c) = uVar2;
    *(undefined4 *)(iVar3 + 800) = uVar1;
    FUN_0003d7a0(iVar3 + 0x2f4,param_1);
  }
  return;
}
