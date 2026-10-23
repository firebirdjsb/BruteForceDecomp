/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 56E5B93101D5A8FEA52E6586AA1F1507806CEC8FB34B527BF12FE3C69A3DA4E1
 * Entry: 0x000fbf20, Ghidra index: 3147, label: FUN_000fbf20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
void FUN_000fbf20(undefined4 param_1)

{
  int iVar1;
  int unaff_ESI;
  
  iVar1 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x88))(param_1);
  if ((iVar1 != 0) && (unaff_ESI != 0)) {
    FUN_000fbe60();
    if (*(int *)(iVar1 + 0x24) != 0) {
      FUN_0010ad40(unaff_ESI + 0x60);
    }
    if (*(int *)(iVar1 + 0x28) != 0) {
      FUN_0010ad40(unaff_ESI + 0x154);
    }
    if (*(undefined4 **)(iVar1 + 0x14) != (undefined4 *)0x0) {
      *(undefined4 *)(unaff_ESI + 0x1e8) = **(undefined4 **)(iVar1 + 0x14);
    }
  }
  return;
}
