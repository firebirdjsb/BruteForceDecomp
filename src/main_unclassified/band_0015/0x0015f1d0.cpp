/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 28CF7C3EE29E6CFDBDA18B0B5C14A06054B3727F63AB70EF6C30214E407FE57E
 * Entry: 0x0015f1d0, Ghidra index: 4572, label: FUN_0015f1d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039efd0;
extern uint32_t PTR_FUN_0039efec;
extern uint32_t PTR_LAB_0039efe4;
void FUN_0015f1d0(byte param_1)

{
  int in_ECX;
  
  FUN_0015f180();
  *(undefined ***)(in_ECX + 0x1d0) = &PTR_FUN_0039efd0;
  *(undefined ***)(in_ECX + 0x1d0) = &PTR_FUN_0039efec;
  *(undefined ***)(in_ECX + 0x1cc) = &PTR_LAB_0039efe4;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
