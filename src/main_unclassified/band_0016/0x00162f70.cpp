/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D1ACEB619F9F84AA73B34ECA391EDA877CD41C7886080E181670726953EE3B4E
 * Entry: 0x00162f70, Ghidra index: 4663, label: FUN_00162f70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039a8e0;
extern uint32_t PTR_FUN_0039adec;
extern uint32_t PTR_LAB_0039a8ac;
extern uint32_t PTR_LAB_0039a8b8;
extern uint32_t PTR_LAB_0039a8c0;
void FUN_00162f70(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_0039a8e0;
  in_ECX[0x12] = PTR_FUN_0039adec;
  in_ECX[0x1a] = PTR_LAB_0039a8c0;
  *(undefined ***)(*(int *)(in_ECX[0x13] + 4) + 0x4c + (int)in_ECX) = &PTR_LAB_0039a8b8;
  *(undefined ***)(*(int *)(in_ECX[0x13] + 4) + 0x50 + (int)in_ECX) = &PTR_LAB_0039a8ac;
  *(int *)(*(int *)(in_ECX[0x13] + 4) + 0x48 + (int)in_ECX) = *(int *)(in_ECX[0x13] + 4) + -0x170;
  FUN_00156c50();
  return;
}
