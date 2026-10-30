/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 99F65DA76E5E57C6A5C4226E0C4B6D6FA4DD7756B03C619856A69E9575743253
 * Entry: 0x00354023, Ghidra index: 13104, label: FUN_00354023
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00354023(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int in_ECX;
  
  piVar1 = (int *)(param_1 + 0x34);
  piVar2 = (int *)*piVar1;
  if (piVar2 != piVar1) {
    if (*(ushort *)(piVar2 + 7) < (ushort)*(byte *)(in_ECX + 0x33)) {
      *(undefined4 *)(param_1 + 0xe4) = 0;
      if ((*(byte *)(param_1 + 0xd) & 2) == 0) {
        uVar4 = (uint)(*(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0x9c)) >> 1;
        uVar3 = *(int *)(param_1 + 0xbc) * 2;
        *(uint *)(param_1 + 0xb8) = uVar4;
        if (uVar4 < uVar3) {
          *(uint *)(param_1 + 0xb8) = uVar3;
        }
        *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xbc);
        FUN_00345541(0xfffffbff,0);
        *(undefined1 *)(param_1 + 0x7f) = 0;
      }
      else if (*(short *)(piVar2 + 7) == 0) {
        FUN_00353621(param_1,piVar2 + -5,0);
        *(int *)(param_1 + 0xa0) = piVar2[6];
        *(uint *)(param_1 + 0x84) = -(uint)((int *)*piVar2 != piVar1) & (uint)((int *)*piVar2 + -5);
        return param_1;
      }
      FUN_00353621(param_1,piVar2 + -5,*(short *)(piVar2 + 7) != 0);
    }
    else {
      param_1 = FUN_00353845(param_1,0x8007274c);
    }
  }
  return param_1;
}
