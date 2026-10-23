/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 746DBE7D754EB5C2F511B6D3235F25D4A93F2DF1E6EA5D79CC3243872792A0DA
 * Entry: 0x000f2450, Ghidra index: 3021, label: FUN_000f2450
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
extern uint32_t DAT_0046d064;
void FUN_000f2450(void)

{
  int *in_EAX;
  int iVar1;
  int *piVar2;
  
  if (in_EAX != (int *)0x0) {
    iVar1 = (**(code **)(*in_EAX + 4))();
    if (iVar1 == 1) {
      piVar2 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
      if (*piVar2 != 0x120785ef) {
        if (*piVar2 != -0x104e72d8) {
          FUN_0010a850();
          return;
        }
        FUN_0010a850();
        return;
      }
      FUN_001e97c0();
      FUN_0010a7d0();
      if (in_EAX[9] == DAT_0046d064) {
        in_EAX[9] = 0x189babe2;
        (**(code **)(*in_EAX + 0x2c))();
      }
    }
  }
  return;
}
