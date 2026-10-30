/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C85E953D4B81AADB19E2983F497EFF3790461659FE329174478FA3AEDE773D1B
 * Entry: 0x00059bf0, Ghidra index: 897, label: FUN_00059bf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039e7e8;
extern uint32_t PTR_FUN_003a3f30;
extern uint32_t PTR_LAB_003a3f18;
void FUN_00059bf0(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  undefined4 uVar2;
  undefined1 local_4 [4];
  
  *in_ECX = &PTR_FUN_003a3f30;
  in_ECX[2] = &PTR_LAB_003a3f18;
  in_ECX[3] = &PTR_FUN_0039e7e8;
  puVar1 = (undefined4 *)in_ECX[0xc];
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  FUN_000e1150(in_ECX + 0xb,local_4,uVar2,puVar1);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(in_ECX[0xc]);
}
