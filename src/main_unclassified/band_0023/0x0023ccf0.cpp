/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 356AB8E86F792AE019A0F8BB91AD5AF383DE2072A2CC6FDFC8D4AA8E4A024ED8
 * Entry: 0x0023ccf0, Ghidra index: 7944, label: FUN_0023ccf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00394068;
void FUN_0023ccf0(void)

{
  int iVar1;
  undefined4 *in_EAX;
  
  *in_EAX = &PTR_LAB_00394068;
  FUN_0023d3a0();
  if ((in_EAX[8] != 0) && (in_EAX[8] != -1)) {
    FUN_00235b40();
    iVar1 = in_EAX[8];
    if (iVar1 != 0) {
      FUN_00235ac0();
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(iVar1);
    }
    in_EAX[8] = 0xffffffff;
  }
  in_EAX[0xd] = 0;
  if (in_EAX[10] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_EAX[10]);
  }
  in_EAX[10] = 0;
  in_EAX[0xb] = 0;
  in_EAX[0xc] = 0;
  if (in_EAX[2] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_EAX[2]);
  }
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  return;
}
