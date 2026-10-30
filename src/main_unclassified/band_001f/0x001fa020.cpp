/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 57DBEA5776D50396D71B6668CC92D2CD6CC122F7E85B8AE3548C558E9E2491C9
 * Entry: 0x001fa020, Ghidra index: 7083, label: FUN_001fa020
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00396488;
extern uint32_t PTR_LAB_0039644c;
extern uint32_t PTR_LAB_00396458;
extern uint32_t PTR_LAB_00396470;
extern uint32_t PTR_LAB_003967a8;
extern uint32_t PTR_LAB_003967b8;
void FUN_001fa020(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_00396488;
  in_ECX[2] = PTR_LAB_00396470;
  in_ECX[3] = PTR_LAB_003967b8;
  in_ECX[0x10] = PTR_LAB_00396458;
  in_ECX[0x11] = PTR_LAB_003967a8;
  in_ECX[0x1f] = PTR_LAB_0039644c;
  FUN_001f8b30();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
