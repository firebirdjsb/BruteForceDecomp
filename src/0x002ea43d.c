/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DA744F6E1D039A29F7EDA814EAD61449975152AE2A743F3BB2BBEDBB479CA967
 * Entry: 0x002ea43d, Ghidra index: 10579, label: __onexit
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_004a8fa4;
extern uint32_t DAT_004a8fa8;
/* Library Function - Single Match
    __onexit
   
   Library: Visual Studio 2003 Release */

void __onexit(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = thunk_FUN_00237ee0(DAT_004a8fa8);
  if (uVar1 < (uint)((int)DAT_004a8fa4 + (4 - DAT_004a8fa8))) {
    uVar3 = 0x800;
    if (uVar1 < 0x800) {
      uVar3 = uVar1;
    }
    iVar2 = FUN_00067c30(DAT_004a8fa8,uVar3 + uVar1);
    if (iVar2 == 0) {
      iVar2 = FUN_00067c30(DAT_004a8fa8,uVar1 + 0x10);
      if (iVar2 == 0) {
        return;
      }
    }
    DAT_004a8fa4 = (undefined4 *)(iVar2 + ((int)DAT_004a8fa4 - DAT_004a8fa8 >> 2) * 4);
    DAT_004a8fa8 = iVar2;
  }
  *DAT_004a8fa4 = param_1;
  DAT_004a8fa4 = DAT_004a8fa4 + 1;
  return;
}
