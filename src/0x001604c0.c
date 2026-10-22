/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CE0DA78B1E2AE5588580F156D688B28156AC628705D4BA4EB908173FE261475A
 * Entry: 0x001604c0, Ghidra index: 4590, label: FUN_001604c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001604c0(void)

{
  int in_EAX;
  
  if (*(int *)(in_EAX + 0x174) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(in_EAX + 0x174));
  }
  *(undefined4 *)(in_EAX + 0x174) = 0;
  *(undefined4 *)(in_EAX + 0x178) = 0;
  *(undefined4 *)(in_EAX + 0x17c) = 0;
  if (*(int *)(in_EAX + 0x164) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(in_EAX + 0x164));
  }
  *(undefined4 *)(in_EAX + 0x164) = 0;
  *(undefined4 *)(in_EAX + 0x168) = 0;
  *(undefined4 *)(in_EAX + 0x16c) = 0;
  if (*(int *)(in_EAX + 0x154) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(in_EAX + 0x154));
  }
  *(undefined4 *)(in_EAX + 0x154) = 0;
  *(undefined4 *)(in_EAX + 0x158) = 0;
  *(undefined4 *)(in_EAX + 0x15c) = 0;
  if (*(int *)(in_EAX + 0x144) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(in_EAX + 0x144));
  }
  *(undefined4 *)(in_EAX + 0x144) = 0;
  *(undefined4 *)(in_EAX + 0x148) = 0;
  *(undefined4 *)(in_EAX + 0x14c) = 0;
  FUN_00160220();
  return;
}
