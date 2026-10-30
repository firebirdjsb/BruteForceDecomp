/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 762C70A15C64FB64B3C9AAA25FA208DC20FA3751F3193B79EA50397EBF0D0B81
 * Entry: 0x00085190, Ghidra index: 1551, label: FUN_00085190
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003c0658;
extern uint32_t DAT_00469b58;
void FUN_00085190(undefined4 *param_1)

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
  uStack_c = *param_1;
  uStack_4 = DAT_003c0658;
  (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x20))(abStack_14);
  return;
}
