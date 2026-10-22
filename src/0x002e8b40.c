/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 72C270B9BE5E8F26F64F7B429A132BAA588FDEC2B79D2B6790EE4DD1A9F3569B
 * Entry: 0x002e8b40, Ghidra index: 10537, label: FUN_002e8b40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040eca0;
int FUN_002e8b40(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  byte unaff_retaddr;
  
  piVar1 = param_1;
  iVar2 = (**(code **)(*param_1 + 0x18))(&param_1);
  if (-1 < iVar2) {
    if (*(undefined4 **)(&DAT_0040eca0 + (uint)unaff_retaddr * 4) != (undefined4 *)0x0) {
      iVar2 = (**(code **)**(undefined4 **)(&DAT_0040eca0 + (uint)unaff_retaddr * 4))
                        (piVar1,param_1,param_2);
      return iVar2;
    }
    iVar2 = -0x7fffbffb;
  }
  return iVar2;
}
