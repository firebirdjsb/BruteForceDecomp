/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A27D8A742712AF1DC4A2C479FE5A585B8A914C8083F81765DFCB70AD45AB164C
 * Entry: 0x000c2970, Ghidra index: 2377, label: FUN_000c2970
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039f5b8;
extern uint32_t PTR_FUN_0039f8bc;
extern uint32_t PTR_FUN_0039ffc0;
extern uint32_t PTR_LAB_0039f5a4;
extern uint32_t PTR_LAB_0039fff0;
void FUN_000c2970(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_0039f5b8;
  in_ECX[0xb] = PTR_LAB_0039f5a4;
  piVar1 = (int *)in_ECX[0x1b];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[0x1b] = 0;
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
