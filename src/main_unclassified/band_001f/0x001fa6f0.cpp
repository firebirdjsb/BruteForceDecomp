/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 35B48AD69B81467D43955FE8506869FA26CFF8F040439E91D08E05C5BEB43F48
 * Entry: 0x001fa6f0, Ghidra index: 7089, label: FUN_001fa6f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003966b8;
extern uint32_t PTR_LAB_0039644c;
extern uint32_t PTR_LAB_00396500;
extern uint32_t PTR_LAB_00396518;
extern uint32_t PTR_LAB_00396698;
extern uint32_t PTR_LAB_003966a8;
void FUN_001fa6f0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_003966b8;
  in_ECX[2] = PTR_LAB_00396518;
  in_ECX[3] = PTR_LAB_003966a8;
  in_ECX[0x10] = PTR_LAB_00396500;
  in_ECX[0x11] = PTR_LAB_00396698;
  in_ECX[0x1f] = PTR_LAB_0039644c;
  FUN_001f8b30();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
