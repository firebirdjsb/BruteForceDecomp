/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FA559DF74D70849BC719AC8E0A22F49B3372AF3E5AD5DD41BA3DC99D25244DBE
 * Entry: 0x00147b10, Ghidra index: 4240, label: FUN_00147b10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
extern uint32_t PTR_FUN_0039bca4;
extern uint32_t PTR_LAB_0039b838;
void FUN_00147b10(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_0039bca4;
  if (in_ECX[6] != 0) {
    (**(code **)(*DAT_00469940 + 0x20))(in_ECX[6],0);
    in_ECX[6] = 0;
  }
  *(byte *)(in_ECX + 3) = *(byte *)(in_ECX + 3) & 0xf1;
  if (in_ECX[2] != 0) {
    FUN_0008f6e0();
  }
  *in_ECX = &PTR_LAB_0039b838;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
