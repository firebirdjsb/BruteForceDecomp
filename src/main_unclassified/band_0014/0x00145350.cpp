/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1753E677A7B56DCB62AEEA5F1885D8C9CD7A251C3551E13C24E012C41D91E667
 * Entry: 0x00145350, Ghidra index: 4192, label: FUN_00145350
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039c0b0;
extern uint32_t PTR_LAB_0039c0ac;
void FUN_00145350(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  iVar1 = in_ECX[0x62];
  *in_ECX = PTR_FUN_0039c0b0;
  in_ECX[6] = PTR_LAB_0039c0ac;
  if (iVar1 != 0) {
    FUN_00142d80();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar1);
  }
  if (0xf < (uint)in_ECX[0x61]) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x5c]);
  }
  in_ECX[0x61] = 0xf;
  in_ECX[0x60] = 0;
  *(undefined1 *)(in_ECX + 0x5c) = 0;
  if (0xf < (uint)in_ECX[0x5a]) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x55]);
  }
  in_ECX[0x5a] = 0xf;
  in_ECX[0x59] = 0;
  *(undefined1 *)(in_ECX + 0x55) = 0;
  FUN_00154e50();
  return;
}
