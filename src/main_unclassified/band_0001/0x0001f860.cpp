/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8F4C70ED48E53D329309188E770D168A7FFB7CBDFF7DC50FF3A3D8149054AF6A
 * Entry: 0x0001f860, Ghidra index: 149, label: FUN_0001f860
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a401c;
void FUN_0001f860(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_003a401c;
  if (0xf < (uint)in_ECX[9]) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[4]);
  }
  in_ECX[9] = 0xf;
  in_ECX[8] = 0;
  *(undefined1 *)(in_ECX + 4) = 0;
  __1exception__UAE_XZ();
  return;
}
