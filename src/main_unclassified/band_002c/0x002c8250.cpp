/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BAE0579FCCD31ECE243628C623D9C17D6CD4B916C80D1ED1A2E6DC8AD685CC01
 * Entry: 0x002c8250, Ghidra index: 10118, label: FUN_002c8250
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc650;
extern uint32_t PTR_LAB_0038e620;
void FUN_002c8250(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = PTR_LAB_0038e620;
  unaff_ESI[7] = 0;
  *(undefined2 *)(unaff_ESI + 10) = 0x10;
  *(undefined2 *)((int)unaff_ESI + 0x2a) = 0;
  *(undefined2 *)(unaff_ESI + 0xc) = 1;
  uVar1 = (*(code *)PTR_FUN_003bc650)(0x40);
  unaff_ESI[0xb] = uVar1;
  unaff_ESI[2] = 0;
  unaff_ESI[6] = 0;
  unaff_ESI[5] = 0;
  unaff_ESI[4] = 0;
  unaff_ESI[9] = param_1;
  unaff_ESI[3] = 0;
  unaff_ESI[8] = 0xbf800000;
  return;
}
