/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 92182C787C3EABDB329695510C5E915320E184BF289EBE4B7BE13881B8DF82AE
 * Entry: 0x001fcb40, Ghidra index: 7174, label: FUN_001fcb40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00395ef0;
extern uint32_t PTR_FUN_0039c24c;
extern uint32_t PTR_FUN_0039e7e8;
void FUN_001fcb40(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_00395ef0;
  in_ECX[2] = PTR_FUN_0039c24c;
  in_ECX[3] = PTR_FUN_0039e7e8;
  if (0xf < (uint)in_ECX[0x16]) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x11]);
  }
  in_ECX[0x16] = 0xf;
  in_ECX[0x15] = 0;
  *(undefined1 *)(in_ECX + 0x11) = 0;
  FUN_001fe150();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
