/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EAA8399A496406A90F3337D9D63CCAF2111EE5C722E772B4892FDC6CA9AAAA35
 * Entry: 0x00109080, Ghidra index: 3397, label: FUN_00109080
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
void FUN_00109080(void)

{
  char cVar1;
  int *in_EAX;
  int iVar2;
  int unaff_ESI;
  
  if (in_EAX != (int *)0x0) {
    iVar2 = (**(code **)(*in_EAX + 4))();
    if (iVar2 == 7) {
      cVar1 = FUN_00107dd0();
      if (cVar1 != '\0') {
        iVar2 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x1d8))();
        if (iVar2 != 0) {
          FUN_001036d0();
          *(int **)(unaff_ESI + 0x2c + *(int *)(unaff_ESI + 0x10) * 4) = in_EAX;
          *(int *)(unaff_ESI + 0x10) = *(int *)(unaff_ESI + 0x10) + 1;
        }
      }
    }
  }
  return;
}
