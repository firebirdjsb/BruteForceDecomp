/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B1B03A7C0E65526AB76563374EF9E50B2BDEBEF8A1126F873C4807CAA98A7829
 * Entry: 0x002fea15, Ghidra index: 11041, label: ___FrameUnwindToState
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414b54;
/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___FrameUnwindToState
   
   Library: Visual Studio 2003 Release */

void ___FrameUnwindToState(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  DAT_00414b54 = DAT_00414b54 + 1;
  while (iVar3 != param_4) {
    if ((iVar3 < 0) || (*(int *)(param_3 + 4) <= iVar3)) {
      __inconsistency__YAXXZ();
    }
    iVar1 = iVar3 * 8;
    piVar2 = (int *)(*(int *)(param_3 + 8) + iVar1);
    iVar3 = *piVar2;
    if (piVar2[1] != 0) {
      *(int *)(param_1 + 8) = iVar3;
      __CallSettingFrame_12(*(undefined4 *)(*(int *)(param_3 + 8) + 4 + iVar1),param_1,0x103);
    }
  }
  FUN_002feac2();
  if (iVar3 != param_4) {
    __inconsistency__YAXXZ();
  }
  *(int *)(param_1 + 8) = iVar3;
  return;
}
