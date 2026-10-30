/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C317D244B23224257C964710DF4B9AA770092B6B99263AC0A58052168A6E33C2
 * Entry: 0x0013ff50, Ghidra index: 4072, label: FUN_0013ff50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039c354;
void FUN_0013ff50(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_0039c354;
  *(byte *)(in_ECX + 3) = *(byte *)(in_ECX + 3) & 0xfd;
  if (in_ECX[0x12] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x12]);
  }
  if (in_ECX[0xf] != 0) {
    FUN_0001d590(in_ECX + 0xe);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0xf]);
  }
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  FUN_0013f480();
  FUN_0013f4f0();
  return;
}
