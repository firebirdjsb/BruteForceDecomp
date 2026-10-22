/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EEAE8B5C74A739A7E8C0DA6C0412157BEA7CCF733E4DCF1AA6D080A7030A3614
 * Entry: 0x0016c980, Ghidra index: 4787, label: FUN_0016c980
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039a748;
extern uint32_t PTR_FUN_0039a758;
extern uint32_t PTR_FUN_0039c24c;
extern uint32_t PTR_FUN_0039c264;
extern uint32_t PTR_FUN_0039e7e8;
extern uint32_t PTR_LAB_0039afd4;
void FUN_0016c980(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_EAX;
  
  iVar1 = in_EAX[6];
  *in_EAX = &LAB_0039a770;
  in_EAX[2] = &PTR_FUN_0039a758;
  in_EAX[3] = &PTR_FUN_0039a748;
  if (iVar1 != 0) {
    FUN_0016c400();
    if (*(int *)(iVar1 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(int *)(iVar1 + 0x10));
    }
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x18) = 0;
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar1);
  }
  piVar2 = (int *)in_EAX[5];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    in_EAX[5] = 0;
  }
  piVar2 = (int *)in_EAX[7];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    in_EAX[7] = 0;
  }
  if (in_EAX[0x12] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_EAX[0x12]);
  }
  in_EAX[0x12] = 0;
  in_EAX[0x13] = 0;
  in_EAX[0x14] = 0;
  if (in_EAX[0xd] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_EAX[0xd]);
  }
  in_EAX[0xd] = 0;
  in_EAX[0xe] = 0;
  in_EAX[0xf] = 0;
  if (in_EAX[9] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_EAX[9]);
  }
  in_EAX[9] = 0;
  in_EAX[10] = 0;
  in_EAX[0xb] = 0;
  *in_EAX = &PTR_FUN_0039c264;
  in_EAX[2] = &PTR_FUN_0039c24c;
  in_EAX[3] = &PTR_FUN_0039e7e8;
  FUN_0008f720();
  *in_EAX = &PTR_LAB_0039afd4;
  return;
}
