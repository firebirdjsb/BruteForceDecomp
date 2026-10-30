/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 534F5ACB53225CFC44A92330AFE4087C427FA284A10A3249A2AD078F40F1DC23
 * Entry: 0x00229850, Ghidra index: 7672, label: FUN_00229850
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00394548;
extern uint32_t PTR_FUN_0039adec;
extern uint32_t PTR_LAB_00394530;
extern uint32_t PTR_LAB_0039453c;
extern uint32_t PTR_LAB_00394544;
extern uint32_t PTR_LAB_0039a8c0;
void FUN_00229850(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_00394548;
  in_ECX[0x12] = PTR_FUN_0039adec;
  in_ECX[0x1a] = PTR_LAB_0039a8c0;
  in_ECX[0x74] = PTR_LAB_00394544;
  *(undefined ***)(*(int *)(in_ECX[0x13] + 4) + 0x4c + (int)in_ECX) = &PTR_LAB_0039453c;
  *(undefined ***)(*(int *)(in_ECX[0x13] + 4) + 0x50 + (int)in_ECX) = &PTR_LAB_00394530;
  *(int *)(*(int *)(in_ECX[0x13] + 4) + 0x48 + (int)in_ECX) = *(int *)(in_ECX[0x13] + 4) + -0x364;
  if (in_ECX[0xe1] != 0) {
    FUN_0008f6e0();
  }
  FUN_0022d570();
  return;
}
