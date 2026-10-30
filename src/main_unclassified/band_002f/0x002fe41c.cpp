/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DE41887027B5E11793BE2C36B5C3CD2D85351D41F448C6D0938FBF0CA58A615E
 * Entry: 0x002fe41c, Ghidra index: 11022, label: ?_FindAndUnlinkFrame@@YAXPAUFrameInfo@@@Z
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414b48;
/* Library Function - Single Match
    ?_FindAndUnlinkFrame@@YAXPAUFrameInfo@@@Z
   
   Library: Visual Studio 2003 Release */

void __FindAndUnlinkFrame__YAXPAUFrameInfo___Z(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = DAT_00414b48;
  if (param_1 == DAT_00414b48) {
    DAT_00414b48 = *(undefined4 *)(param_1 + 4);
    return;
  }
  do {
    iVar3 = iVar1;
    piVar2 = (int *)(iVar3 + 4);
    if (*piVar2 == 0) {
      __inconsistency__YAXXZ();
      return;
    }
    iVar1 = *piVar2;
  } while (param_1 != iVar1);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 4);
  return;
}
