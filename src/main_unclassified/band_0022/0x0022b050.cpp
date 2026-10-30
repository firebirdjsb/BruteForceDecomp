/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5E26C1E591ABB5F6C48D4FD3AAB4B92C8A7948DCA6F53366D43F569869FE91A8
 * Entry: 0x0022b050, Ghidra index: 7683, label: FUN_0022b050
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003944a0;
extern uint32_t PTR_LAB_003944c0;
extern uint32_t PTR_LAB_003944d0;
void FUN_0022b050(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  undefined4 uVar2;
  undefined1 local_4 [4];
  
  *in_ECX = &PTR_FUN_003944a0;
  in_ECX[6] = &PTR_LAB_003944d0;
  in_ECX[0x75] = &PTR_LAB_003944c0;
  puVar1 = (undefined4 *)in_ECX[0xf9];
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  FUN_001298b0(local_4,uVar2,puVar1);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(in_ECX[0xf9]);
}
