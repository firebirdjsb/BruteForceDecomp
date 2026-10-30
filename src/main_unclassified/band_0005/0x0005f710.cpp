/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C0DE4394F37448B67B3612D8573BBD8FCFD8604AE27045E1D485B0A3A05DB839
 * Entry: 0x0005f710, Ghidra index: 1006, label: FUN_0005f710
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_00060d40(void);
extern void FUN_0029f3a0(void);

extern uint32_t DAT_0046987c;
extern uint32_t DAT_004a58d8;
extern uint32_t PTR_FUN_003a3c88;
void FUN_0005f710(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *unaff_EDI;
  
  FUN_00060d40();
  piVar1 = unaff_EDI + 0x2e;
  *unaff_EDI = &PTR_FUN_003a3c88;
  *piVar1 = 0;
  unaff_EDI[0x2f] = 0;
  unaff_EDI[0x30] = 0;
  unaff_EDI[0x31] = 0;
  piVar2 = (int *)unaff_EDI[0x30];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    unaff_EDI[0x30] = 0;
  }
  piVar2 = (int *)unaff_EDI[0x31];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    unaff_EDI[0x31] = 0;
  }
  FUN_0029f3a0();
  piVar3 = DAT_0046987c;
  unaff_EDI[0x39] = 0;
  unaff_EDI[0x3a] = 0;
  unaff_EDI[0x3b] = 0;
  unaff_EDI[0x3b] = &DAT_004a58d8;
  FUN_0029f3a0();
  piVar2 = (int *)*piVar1;
  if (piVar2 != piVar3) {
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      *piVar1 = 0;
    }
    *piVar1 = (int)piVar3;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
  }
  return;
}
