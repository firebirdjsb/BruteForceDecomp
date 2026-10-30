/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CF2D2FF78A1ED7740D7D9CEC7BD552BFE089CA83D4D4B5EDD00312FACB6A406B
 * Entry: 0x000a3c70, Ghidra index: 1950, label: FUN_000a3c70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a0840;
void FUN_000a3c70(void)

{
  int *piVar1;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = &PTR_FUN_003a0840;
  unaff_ESI[2] = 0;
  unaff_ESI[3] = 0;
  unaff_ESI[4] = 0;
  unaff_ESI[5] = 0;
  unaff_ESI[6] = 0;
  unaff_ESI[0x11] = 0;
  unaff_ESI[0x31] = 0;
  unaff_ESI[0x32] = 0;
  unaff_ESI[0x33] = 0;
  piVar1 = (int *)unaff_ESI[2];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    unaff_ESI[2] = 0;
  }
  piVar1 = (int *)unaff_ESI[3];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    unaff_ESI[3] = 0;
  }
  piVar1 = (int *)unaff_ESI[4];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    unaff_ESI[4] = 0;
  }
  piVar1 = (int *)unaff_ESI[5];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    unaff_ESI[5] = 0;
  }
  unaff_ESI[0x10] = 0;
  unaff_ESI[0x2d] = 0;
  piVar1 = (int *)unaff_ESI[6];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    unaff_ESI[6] = 0;
  }
  unaff_ESI[1] = 0;
  unaff_ESI[0xb] = 0x42f00000;
  unaff_ESI[0xc] = 0x42f00000;
  unaff_ESI[0x2e] = 0;
  unaff_ESI[0x2f] = 0;
  unaff_ESI[9] = 0x140;
  unaff_ESI[10] = 0xf0;
  unaff_ESI[0xf] = 0x3f2aaab0;
  return;
}
