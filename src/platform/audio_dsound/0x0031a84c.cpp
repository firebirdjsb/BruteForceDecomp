/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6AD8CBE528C008E71F3E95B9324B2CAB33ACA350F5D7F3204581538C457FFBEA
 * Entry: 0x0031a84c, Ghidra index: 12265, label: FUN_0031a84c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00386aa0;
extern uint32_t PTR_LAB_003869e0;
extern uint32_t PTR_LAB_00386aac;
void FUN_0031a84c(void)

{
  undefined4 *in_ECX;
  
  in_ECX[1] = PTR_LAB_003869e0;
  in_ECX[2] = 1;
  FUN_00314a04();
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  *in_ECX = &PTR_LAB_00386aac;
  in_ECX[1] = &PTR_FUN_00386aa0;
  RtlInitializeCriticalSection(in_ECX + 9);
  in_ECX[0x10] = 0;
  return;
}
