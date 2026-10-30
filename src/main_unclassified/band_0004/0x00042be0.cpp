/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 39BA26EE34865FC00483FCDBC158BAA85DE2FD077ED99651A135B9D327C06D83
 * Entry: 0x00042be0, Ghidra index: 515, label: FUN_00042be0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00016030(uint32_t in_EAX);

char FUN_00042be0(int param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char local_1;
  
  piVar3 = *(int **)(param_1 + 8);
  piVar1 = *(int **)(param_1 + 0xc);
  local_1 = '\0';
  if (piVar3 != piVar1) {
    do {
      for (piVar2 = param_3; piVar2 != param_4; piVar2 = piVar2 + 1) {
        if (*piVar2 == *(int *)(*piVar3 + 0xc)) {
          if (piVar2 != param_4) {
            *(undefined4 *)(*piVar3 + 0x2c) = 0x7f7fffff;
            local_1 = '\x01';
          }
          break;
        }
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != piVar1);
    if (local_1 != '\0') {
      FUN_00016030();
    }
  }
  if (param_3 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_3);
  }
  return local_1;
}
