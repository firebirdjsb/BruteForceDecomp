/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8334683FAB3CA2994A86536BDC2C4C54A7DC31355621C1A8D07C2E8197CA517C
 * Entry: 0x0014e190, Ghidra index: 4384, label: FUN_0014e190
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
extern uint32_t PTR_FUN_0039b118;
extern uint32_t PTR_LAB_0039af90;
void FUN_0014e190(void)

{
  int *piVar1;
  undefined4 *in_EAX;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = &PTR_LAB_0039af90;
  unaff_ESI[2] = 0;
  unaff_ESI[1] = 0xffffffff;
  unaff_ESI[2] = *in_EAX;
  unaff_ESI[4] = 0;
  *(byte *)(unaff_ESI + 3) = *(byte *)(unaff_ESI + 3) | 1;
  unaff_ESI[5] = 0;
  *unaff_ESI = &PTR_FUN_0039b118;
  unaff_ESI[10] = 0;
  unaff_ESI[0x1c] = 0;
  unaff_ESI[1] = 4;
  piVar1 = (int *)unaff_ESI[10];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    unaff_ESI[10] = 0;
    unaff_ESI[0x1c] = DAT_0046d064;
    return;
  }
  unaff_ESI[0x1c] = DAT_0046d064;
  return;
}
