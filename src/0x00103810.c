/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C10A1D96DE5D660935A24A70D1955970DE75754DBA2D9C89F63344E65EDBCBBF
 * Entry: 0x00103810, Ghidra index: 3304, label: FUN_00103810
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039e188;
extern uint32_t PTR_FUN_0039e248;
extern uint32_t PTR_LAB_0039e5c8;
void FUN_00103810(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_0039e248;
  if ((undefined4 *)in_ECX[0x22] != (undefined4 *)in_ECX[0x23]) {
    piVar1 = *(int **)in_ECX[0x22];
    puVar2 = (undefined4 *)*piVar1;
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(piVar1);
  }
  if ((undefined4 *)in_ECX[0x27] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x27])(1);
  }
  if ((undefined4 *)in_ECX[0x29] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x29])(1);
  }
  if (in_ECX[0x22] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x22]);
  }
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x24] = 0;
  *in_ECX = &PTR_FUN_0039e188;
  if (in_ECX[0x1a] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x1a]);
  }
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x1c] = 0;
  *in_ECX = &PTR_LAB_0039e5c8;
  FUN_000ef7f0();
  if (in_ECX[0x15] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x15]);
  }
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  return;
}
