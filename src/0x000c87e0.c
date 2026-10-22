/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0B136B6B274C4B112DE5F56375898FCFB9FCF9F33A5BF36E0BDBAEDCD77DCBF4
 * Entry: 0x000c87e0, Ghidra index: 2472, label: FUN_000c87e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039f234;
extern uint32_t PTR_FUN_0039f8bc;
extern uint32_t PTR_FUN_0039ffc0;
extern uint32_t PTR_LAB_0039f220;
extern uint32_t PTR_LAB_0039fff0;
void FUN_000c87e0(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_0039f234;
  in_ECX[0xb] = &PTR_LAB_0039f220;
  if (in_ECX[0x23] != 0) {
    FUN_0001d590(in_ECX + 0x22);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x23]);
  }
  in_ECX[0x23] = 0;
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  if (in_ECX[0x1c] != 0) {
    FUN_0008f6e0();
  }
  if (in_ECX[0x1a] != 0) {
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
