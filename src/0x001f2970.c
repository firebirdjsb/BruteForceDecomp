/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2FE1E931A5394E284E20708111785914E5F1668277CAC550D3B537EFF4DC9FC1
 * Entry: 0x001f2970, Ghidra index: 7010, label: FUN_001f2970
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469948;
undefined4 FUN_001f2970(void)

{
  int in_EAX;
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = 0;
  piVar3 = (int *)(DAT_00469948 + 0x80);
  do {
    if (*piVar3 == in_EAX) {
      iVar1 = DAT_00469948 + 0x80 + iVar1 * 0xc;
      if (iVar1 == 0) {
        return 0;
      }
      uVar2 = FUN_001e7ae0(*(undefined4 *)(iVar1 + 8));
      return uVar2;
    }
    iVar1 = iVar1 + 1;
    piVar3 = piVar3 + 3;
  } while (iVar1 < 0x21);
  return 0;
}
