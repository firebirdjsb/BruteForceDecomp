/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F18AE79FCE5D0F56A2D9A612F9A07C305145C9A522C6F54926A8A59955424DD5
 * Entry: 0x00069b50, Ghidra index: 1173, label: FUN_00069b50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00069b50(uint param_1)

{
  uint uVar1;
  uint in_EAX;
  undefined4 uVar2;
  uint *puVar3;
  
  uVar1 = param_1;
  if (in_EAX != param_1) {
    param_1 = param_1 & 0xffffff00;
    puVar3 = (uint *)(in_EAX + 0x30);
    do {
      if (0xf < *puVar3) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(puVar3[-5]);
      }
      *puVar3 = 0xf;
      puVar3[-1] = 0;
      uVar2 = FUN_0001f4d0(&param_1);
      FUN_0001f4e0(uVar2);
      in_EAX = in_EAX + 0x40;
      puVar3 = puVar3 + 0x10;
    } while (in_EAX != uVar1);
  }
  return;
}
