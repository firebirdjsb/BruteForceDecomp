/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 11FEABF0CDC323EAA2BCF4760DB88F16E83A38393F000F90128EDBB8E006F460
 * Entry: 0x00201310, Ghidra index: 7257, label: FUN_00201310
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00201310(int param_1)

{
  int in_ECX;
  int *piVar1;
  
  if ((~*(byte *)(in_ECX + 0x3d) & 1) == 0) {
    if (*(int *)(param_1 + 0xc) != 0) {
      if (*(undefined4 **)(in_ECX + 0x18) == (undefined4 *)0x0) {
        piVar1 = (int *)0x0;
      }
      else {
        piVar1 = (int *)**(undefined4 **)(in_ECX + 0x18);
      }
      if (piVar1 != *(int **)(in_ECX + 0x18)) {
        do {
          if (piVar1[3] != 0) {
            FUN_001fe6c0(piVar1[3],*(undefined4 *)(param_1 + 0xc));
          }
          piVar1 = (int *)*piVar1;
        } while (piVar1 != (int *)*(int *)(in_ECX + 0x18));
      }
      FUN_001ff0a0(param_1);
      if (*(char *)(in_ECX + 0x40) == '\0') {
        if (*(undefined4 **)(in_ECX + 0x18) == (undefined4 *)0x0) {
          piVar1 = (int *)0x0;
        }
        else {
          piVar1 = (int *)**(undefined4 **)(in_ECX + 0x18);
        }
        if (piVar1 != *(int **)(in_ECX + 0x18)) {
          do {
            if (piVar1[3] != 0) {
              FUN_001fea10(*(undefined4 *)(param_1 + 0xc));
            }
            piVar1 = (int *)*piVar1;
          } while (piVar1 != (int *)*(int *)(in_ECX + 0x18));
        }
      }
    }
    return;
  }
  FUN_001ff0f0(param_1);
  FUN_001ff000();
  return;
}
