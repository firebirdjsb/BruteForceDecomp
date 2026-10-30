/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 18C3903BDE7BAAADB457EACFFFDA07DD9453ED7A684B6CA5CE3346767C6C5FE3
 * Entry: 0x0005a360, Ghidra index: 902, label: FUN_0005a360
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0005a360(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *unaff_EDI;
  int *local_14;
  undefined1 local_10 [4];
  int local_c;
  
  if (unaff_EDI != (undefined4 *)0x0) {
    local_14 = (int *)0x0;
    if ((undefined4 *)unaff_EDI[0xc] != (undefined4 *)0x0) {
      local_14 = *(int **)unaff_EDI[0xc];
    }
    if (local_14 != (int *)unaff_EDI[0xc]) {
      do {
        if (local_14[3] != 0) {
          piVar1 = *(int **)(local_14[3] + 0x30);
          if (*(undefined4 **)(piVar1[1] + 0xc) == unaff_EDI) {
            piVar2 = (int *)piVar1[1];
            if (piVar2 != piVar1) {
              *(int *)piVar2[1] = *piVar2;
              *(int *)(*piVar2 + 4) = piVar2[1];
              if (piVar2[3] != 0) {
                FUN_0008f6e0();
              }
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00237ec0(piVar2);
            }
          }
          else {
            local_c = 0;
            FUN_0008f6a0();
            FUN_000e0950(local_10);
            if (local_c != 0) {
              FUN_0008f6e0();
            }
          }
        }
        local_14 = (int *)*local_14;
      } while (local_14 != (int *)unaff_EDI[0xc]);
    }
    (**(code **)*unaff_EDI)(1);
  }
  return;
}
