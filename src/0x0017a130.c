/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4D39A15AA900593CCE88A41BCCC6ADA580EC6ACB961FD2ABCB5AE9F4E326332F
 * Entry: 0x0017a130, Ghidra index: 5000, label: FUN_0017a130
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
void FUN_0017a130(void)

{
  int *piVar1;
  int in_EDX;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x3c) == in_EDX) {
    *(undefined4 *)(unaff_ESI + 0x40) = 0;
    if (*(int *)(unaff_ESI + 0x34) != 0) {
      (**(code **)(*DAT_00469940 + 0x20))(*(int *)(unaff_ESI + 0x34),1);
      *(undefined4 *)(unaff_ESI + 0x34) = 0;
      return;
    }
  }
  else {
    piVar1 = (int *)0x0;
    if (*(undefined4 **)(unaff_ESI + 0x2c) != (undefined4 *)0x0) {
      piVar1 = (int *)**(undefined4 **)(unaff_ESI + 0x2c);
    }
    if (piVar1 != *(int **)(unaff_ESI + 0x2c)) {
      while (piVar1[3] != in_EDX) {
        piVar1 = (int *)*piVar1;
        if (piVar1 == *(int **)(unaff_ESI + 0x2c)) {
          return;
        }
      }
      if (piVar1 != *(int **)(unaff_ESI + 0x2c)) {
        *(int *)piVar1[1] = *piVar1;
        *(int *)(*piVar1 + 4) = piVar1[1];
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(piVar1);
      }
    }
  }
  return;
}
