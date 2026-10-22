/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2B0AFDEFDE5197FFA313EF429111BAA87CAA12ED4FD6B2485ADCCD2E35A63AB9
 * Entry: 0x00181630, Ghidra index: 5158, label: FUN_00181630
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
void FUN_00181630(float param_1,float param_2)

{
  undefined4 uVar1;
  int *unaff_ESI;
  float10 fVar2;
  
  unaff_ESI[0xc] = (int)param_1;
  if ((*(byte *)(unaff_ESI + 7) & 0x20) == 0) {
    fVar2 = (float10)(**(code **)(*DAT_00469940 + 0x8c))(unaff_ESI[0xb]);
    fVar2 = fVar2 * (float10)param_1;
  }
  else {
    fVar2 = (float10)param_1;
  }
  uVar1 = FUN_0017e190((float)(fVar2 * (float10)param_2));
  (**(code **)(*unaff_ESI + 0x3c))(uVar1);
  return;
}
