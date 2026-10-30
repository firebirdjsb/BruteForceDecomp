/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BB6010B8D07AFCAD4D00814FACB6AC0A586E8A7C3E38C396799EDF5F07209140
 * Entry: 0x001fd2c0, Ghidra index: 7189, label: FUN_001fd2c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00395918;
extern uint32_t PTR_FUN_0039c24c;
extern uint32_t PTR_FUN_0039e7e8;
extern uint32_t PTR_LAB_00395904;
void FUN_001fd2c0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_00395918;
  in_ECX[2] = PTR_FUN_0039c24c;
  in_ECX[3] = PTR_FUN_0039e7e8;
  in_ECX[0x10] = PTR_LAB_00395904;
  if (in_ECX[0x16] != 0) {
    FUN_0008f6e0();
  }
  if (in_ECX[0x14] != 0) {
    FUN_0008f6e0();
  }
  FUN_001fe150();
  return;
}
