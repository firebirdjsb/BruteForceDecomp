/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D37BE19B3FF31F68BAD6488F9856D40AB35CBE10FC98FE486827214326E5FFC3
 * Entry: 0x002f8da0, Ghidra index: 10965, label: FUN_002f8da0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00412ad8;
extern uint32_t DAT_00412adc;
extern uint32_t PTR_DAT_003b7d10;
extern uint32_t PTR_DAT_003b7d14;
void FUN_002f8da0(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = param_1 + 0x1fU & 0xffffffe0;
  iVar1 = FUN_002f8e00(DAT_00412ad8 + uVar3);
  DAT_00412ad8 = 0;
  if ((iVar1 != 0) && (iVar1 = iVar1 + uVar3, DAT_00412adc != 0)) {
    iVar4 = (int)PTR_DAT_003b7d10 - (int)PTR_DAT_003b7d14;
    piVar2 = (int *)PTR_DAT_003b7d14;
    do {
      **(int **)(iVar4 + (int)piVar2) = iVar1;
      iVar1 = iVar1 + *piVar2;
      piVar2 = piVar2 + 1;
      DAT_00412adc = DAT_00412adc + -1;
    } while (DAT_00412adc != 0);
  }
  DAT_00412adc = 0;
  return;
}
