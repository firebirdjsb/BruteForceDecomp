/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E1B91A74979652BC11B391F8F06ECA28786BE3DEAB0226DEC826FD8A400683DB
 * Entry: 0x0013f4f0, Ghidra index: 4054, label: FUN_0013f4f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039c320;
void FUN_0013f4f0(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  undefined4 uVar2;
  undefined1 local_4 [4];
  
  *in_ECX = &PTR_FUN_0039c320;
  puVar1 = (undefined4 *)in_ECX[2];
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  FUN_000e1150(in_ECX + 1,local_4,uVar2,puVar1);
  puVar1 = (undefined4 *)in_ECX[2];
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  FUN_000e1150(in_ECX + 1,local_4,uVar2,puVar1);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(in_ECX[2]);
}
