/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7E5B8BDC4AF5BA8C2E0887FA556564FD27E926EF9ACAD8819CB8BAC2A911C7A9
 * Entry: 0x002608a0, Ghidra index: 8625, label: FUN_002608a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00392d70;
void FUN_002608a0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *unaff_ESI;
  int *local_4;
  
  *unaff_ESI = PTR_FUN_00392d70;
  if ((undefined4 *)unaff_ESI[3] == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = *(int **)unaff_ESI[3];
  }
  local_4 = (int *)unaff_ESI[3];
  for (; piVar4 != local_4; piVar4 = (int *)*piVar4) {
    iVar1 = piVar4[2];
    if (iVar1 != 0) {
      FUN_002606e0(iVar1);
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(iVar1);
    }
  }
  puVar2 = (undefined4 *)unaff_ESI[3];
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar2;
  }
  FUN_001298b0(&local_4,uVar3,puVar2);
  if (unaff_ESI[6] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(unaff_ESI[6]);
  }
  unaff_ESI[6] = 0;
  unaff_ESI[7] = 0;
  unaff_ESI[8] = 0;
  puVar2 = (undefined4 *)unaff_ESI[3];
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar2;
  }
  FUN_001298b0(&local_4,uVar3,puVar2);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(unaff_ESI[3]);
}
