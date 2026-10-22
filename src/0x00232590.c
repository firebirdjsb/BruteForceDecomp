/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 65C64499A0C58372B8BE85425C79A502914CD4BC77BFC6FB8C53E3D0B3B2882C
 * Entry: 0x00232590, Ghidra index: 7765, label: FUN_00232590
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469b54;
float10 FUN_00232590(void)

{
  int iVar1;
  float10 fVar2;
  
  fVar2 = (float10)FUN_00232520();
  iVar1 = (**(code **)(*DAT_00469b54 + 0x48))();
  return (float10)(float)fVar2 * (float10)*(float *)(iVar1 + 0x18c);
}
