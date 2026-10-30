/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 175AB89FB8318B2BF96A5CBC04DAB8849797CB775CCC3146CE51FBDB1476FECC
 * Entry: 0x001791b0, Ghidra index: 4983, label: FUN_001791b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
extern uint32_t PTR_FUN_00399dac;
void FUN_001791b0(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  undefined4 uVar2;
  undefined1 auStack_4 [4];
  
  *in_ECX = PTR_FUN_00399dac;
  if (in_ECX[0xd] != 0) {
    (**(code **)(*DAT_00469940 + 0x20))(in_ECX[0xd],1);
    in_ECX[0xd] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0xb];
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  FUN_001298b0(auStack_4,uVar2,puVar1);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(in_ECX[0xb]);
}
