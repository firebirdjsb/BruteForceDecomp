/* Partial original DWORD address-value repair; other C++ errors remain.
 * ABI_UNVERIFIED: register/memory mapping and complete behavior remain unresolved. */
/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6F3F65A3F37DFA5D23BB04FF402BEF756BBA1946368CFC31C7922AEF46687ACF
 * Entry: 0x00145160, Ghidra index: 4187, label: FUN_00145160
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039c24c;
extern uint32_t PTR_FUN_0039c264;
extern uint32_t PTR_FUN_0039e7e8;
extern uint32_t PTR_LAB_0039afd4;
void FUN_00145160(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = UINT32_C(0x0039c264);
  in_ECX[2] = UINT32_C(0x0039c24c);
  in_ECX[3] = UINT32_C(0x0039e7e8);
  FUN_0008f720();
  *in_ECX = UINT32_C(0x0039afd4);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
