/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 80E0BE5E8C312B172955C2AD9546735FE92468C35C8F2EAC608C4D71CB3D6EE9
 * Entry: 0x002c79a0, Ghidra index: 10109, label: FUN_002c79a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0038e678;
extern uint32_t PTR_FUN_0039a714;
extern uint32_t PTR_LAB_0038e674;
void FUN_002c79a0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_002c7820();
  *(undefined2 *)(in_ECX + 3) = 0;
  *(undefined2 *)((int)in_ECX + 0xe) = 0;
  in_ECX[4] = 0;
  *(undefined2 *)(in_ECX + 5) = 1;
  in_ECX[7] = 0;
  in_ECX[6] = 0;
  in_ECX[9] = &PTR_FUN_0039a714;
  in_ECX[8] = param_1;
  *in_ECX = &PTR_FUN_0038e678;
  in_ECX[9] = &PTR_LAB_0038e674;
  in_ECX[10] = param_1;
  return;
}
