/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 549672A8A3D5B4667AF8E7912C88B3F9314C46436F82FCDB9241C47595616099
 * Entry: 0x0024ca40, Ghidra index: 8295, label: FUN_0024ca40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00393ba4;
extern uint32_t PTR_FUN_00393bc0;
extern uint32_t PTR_FUN_00393be0;
void FUN_0024ca40(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *unaff_EBX;
  undefined1 auStack_4 [4];
  
  piVar1 = (int *)unaff_EBX[3];
  *unaff_EBX = PTR_FUN_00393be0;
  unaff_EBX[1] = PTR_FUN_00393bc0;
  unaff_EBX[2] = PTR_FUN_00393ba4;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)unaff_EBX[3];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      unaff_EBX[3] = 0;
    }
  }
  FUN_0024cb80();
  puVar2 = (undefined4 *)unaff_EBX[0x29];
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar2;
  }
  FUN_001298b0(auStack_4,uVar3,puVar2);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(unaff_EBX[0x29]);
}
