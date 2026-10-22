/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FF3BFD86BCC43C5EFAF14B4197F350F3BD633A9D22815873059C9F7D4991442D
 * Entry: 0x00063650, Ghidra index: 1075, label: FUN_00063650
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_DAT_003a3688;
void FUN_00063650(void)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)FUN_002ea01d(0x28);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1[1] = 4;
    piVar1[3] = 0;
    piVar1[4] = 0;
    piVar1[5] = 0;
    *piVar1 = (int)&PTR_DAT_003a3688;
    piVar1[9] = 1;
  }
  piVar2 = piVar1;
  (**(code **)(*piVar1 + 0x34))(piVar1,4);
  (**(code **)(*piVar1 + 0x14))(piVar1,0,&stack0xfffffffc);
  *piVar2 = (int)piVar1;
  return;
}
