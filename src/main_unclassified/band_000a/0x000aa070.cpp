/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C31040DAD9F7B27BD835D20BFC71E157C06A1FDCD2AEDDF4776DB3F112DD52E6
 * Entry: 0x000aa070, Ghidra index: 2030, label: FUN_000aa070
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_0008f6e0(std::uint32_t guest_edx);
extern void FUN_000b2530(void);

extern uint32_t PTR_FUN_0039f8bc;
extern uint32_t PTR_FUN_0039ffc0;
extern uint32_t PTR_FUN_003a02b4;
extern uint32_t PTR_LAB_0039fff0;
extern uint32_t PTR_LAB_003a02a0;
void FUN_000aa070(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_003a02b4;
  in_ECX[0xb] = &PTR_LAB_003a02a0;
  if (in_ECX[0x1e] != 0) {
    FUN_0008f6e0();
  }
  *in_ECX = &PTR_FUN_0039ffc0;
  in_ECX[0xb] = &PTR_LAB_0039fff0;
  FUN_000b2530();
  *in_ECX = &PTR_FUN_0039f8bc;
  piVar1 = (int *)in_ECX[8];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[8] = 0;
  }
  return;
}
