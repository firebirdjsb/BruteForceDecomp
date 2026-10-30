/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 93329111FA7652004D0AC65C4C0366611C5BD9BA99565FA2A368B3190FBCED5F
 * Entry: 0x001ff0a0, Ghidra index: 7243, label: FUN_001ff0a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001ff0a0(undefined4 param_1)

{
  int in_ECX;
  int *piVar1;
  
  if (((*(byte *)(in_ECX + 0x3d) & 0x10) == 0) && ((*(byte *)(in_ECX + 0x3d) & 1) != 0)) {
    if (*(undefined4 **)(in_ECX + 0x18) == (undefined4 *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = (int *)**(undefined4 **)(in_ECX + 0x18);
    }
    if (piVar1 != *(int **)(in_ECX + 0x18)) {
      do {
        if ((int *)piVar1[3] != (int *)0x0) {
          (**(code **)(*(int *)piVar1[3] + 0x60))(param_1);
        }
        piVar1 = (int *)*piVar1;
      } while (piVar1 != (int *)*(int *)(in_ECX + 0x18));
    }
    FUN_001ff000();
  }
  return;
}
