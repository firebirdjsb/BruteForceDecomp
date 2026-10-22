/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E595F1A9CD7529D4A3979737B6D6F9A8AFA6E63C2AD655D1D0801B53632957FE
 * Entry: 0x00085120, Ghidra index: 1550, label: FUN_00085120
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003c0658;
extern uint32_t DAT_00469b58;
void FUN_00085120(void)

{
  int *piVar1;
  byte abStack_14 [4];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  piVar1 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
  (**(code **)(*piVar1 + 0x1c))();
  (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x180))();
  abStack_14[0] = abStack_14[0] & 0xe2 | 0xb;
  uStack_10 = 0;
  uStack_8 = 0;
  uStack_4 = DAT_003c0658;
  uStack_c = 0xf30cf3e1;
  (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x20))(abStack_14);
  return;
}
