/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5A666B93205B7DCDD01B5CDC9916FA71B6273DFA4F12FFF4AA3B6418260EAA5E
 * Entry: 0x00220fe0, Ghidra index: 7566, label: FUN_00220fe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00394a78;
extern uint32_t PTR_LAB_00394a74;
void FUN_00220fe0(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_00394a78;
  in_ECX[6] = PTR_LAB_00394a74;
  if (in_ECX[0x69] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x69]);
  }
  in_ECX[0x69] = 0;
  in_ECX[0x6a] = 0;
  in_ECX[0x6b] = 0;
  if (in_ECX[0x65] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x65]);
  }
  in_ECX[0x65] = 0;
  in_ECX[0x66] = 0;
  in_ECX[0x67] = 0;
  if (in_ECX[0x61] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x61]);
  }
  in_ECX[0x61] = 0;
  in_ECX[0x62] = 0;
  in_ECX[99] = 0;
  if (in_ECX[0x5d] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x5d]);
  }
  in_ECX[0x5d] = 0;
  in_ECX[0x5e] = 0;
  in_ECX[0x5f] = 0;
  piVar1 = (int *)in_ECX[0x55];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[0x55] = 0;
  }
  FUN_00154e50();
  return;
}
