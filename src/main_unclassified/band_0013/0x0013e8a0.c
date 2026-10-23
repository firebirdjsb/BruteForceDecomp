/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 994F92745157B7746572970E9B6528242AEEADB8DC8E5E9806368442F945F05C
 * Entry: 0x0013e8a0, Ghidra index: 4030, label: FUN_0013e8a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b54;
extern uint32_t PTR_LAB_0039cae0;
void FUN_0013e8a0(void)

{
  int *piVar1;
  undefined4 *unaff_ESI;
  
  *(byte *)(unaff_ESI + 7) = *(byte *)(unaff_ESI + 7) & 0xfe;
  unaff_ESI[6] = 0;
  unaff_ESI[1] = 0;
  unaff_ESI[2] = 0;
  unaff_ESI[5] = 0;
  unaff_ESI[4] = 0;
  unaff_ESI[3] = 0;
  *(byte *)(unaff_ESI + 7) = *(byte *)(unaff_ESI + 7) & 0xc1;
  unaff_ESI[0xe] = 0;
  piVar1 = DAT_00469b54;
  *(undefined1 *)((int)unaff_ESI + 0x36) = 0;
  *(undefined1 *)(unaff_ESI + 0xd) = 1;
  unaff_ESI[8] = 0;
  unaff_ESI[9] = 0;
  *(byte *)((int)unaff_ESI + 0x35) = *(byte *)((int)unaff_ESI + 0x35) & 0xfe;
  unaff_ESI[10] = 0x42480000;
  unaff_ESI[0xb] = 0;
  unaff_ESI[0xc] = 0;
  *unaff_ESI = &PTR_LAB_0039cae0;
  (**(code **)(*piVar1 + 0x48))();
  FUN_0013de50();
  return;
}
