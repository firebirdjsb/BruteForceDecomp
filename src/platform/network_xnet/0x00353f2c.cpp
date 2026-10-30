/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E438CCBCE63F7DF6668E39536F92EACBB0D2245C9CE9D650E1B4F63D99D9850E
 * Entry: 0x00353f2c, Ghidra index: 13103, label: FUN_00353f2c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00353f2c(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int in_ECX;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x84);
  if (*(int *)(iVar1 + 0x20) != 0) {
    iVar2 = *(int *)(param_1 + 0xb0) + *(int *)(param_1 + 0xac);
    iVar5 = *(int *)(param_1 + 0xb4) + *(int *)(param_1 + 0x9c);
    if (iVar2 != iVar5 && -1 < iVar2 - iVar5) {
      iVar2 = iVar5;
    }
    if (iVar2 - *(int *)(param_1 + 0xa0) < *(int *)(iVar1 + 0x20)) {
      if (*(int *)(param_1 + 0xa0) == *(int *)(param_1 + 0x9c)) {
        FUN_00345541(0xffffffff,0x200);
        uVar3 = (uint)*(byte *)(in_ECX + 0x37) * 5;
        if (uVar3 < *(uint *)(param_1 + 0xdc)) {
          uVar3 = *(uint *)(param_1 + 0xdc);
        }
        uVar4 = FUN_0034c3bf(param_1 + 0x6c,uVar3);
        *(undefined4 *)(param_1 + 0x90) = uVar4;
      }
      return 0;
    }
  }
  FUN_00345541(0xfffffdff,0);
  if (*(int *)(param_1 + 0xe4) == 0) {
    *(int *)(param_1 + 0xe4) = *(int *)(in_ECX + 0x1d8);
    *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(iVar1 + 0x28);
  }
  *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(in_ECX + 0x1d8);
  FUN_00353621(param_1,iVar1,*(short *)(iVar1 + 0x30) != 0);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(iVar1 + 0x2c);
  *(uint *)(param_1 + 0x84) =
       -(uint)(*(int *)(iVar1 + 0x14) != param_1 + 0x34) & *(int *)(iVar1 + 0x14) - 0x14U;
  return 1;
}
