/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 66FC3D05FA9F6BC0030CAC98C810EC0DA2BB03DD958AFD36B410F3AF107C1F8E
 * Entry: 0x000ca290, Ghidra index: 2502, label: FUN_000ca290
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_001f2970(void);
extern void FUN_000c9d70(int param_1);

void FUN_000ca290(int param_1)

{
  int iVar1;
  int in_EAX;
  undefined4 in_EDX;
  undefined1 local_10 [4];
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = *(int *)(param_1 + 0x6c);
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  *(undefined2 *)(iVar1 + 4) = 0;
  *(undefined2 *)(iVar1 + 6) = 0;
  if (in_EAX != 0) {
    FUN_001f2970(in_EDX,local_10);
  }
  iVar1 = local_c;
  FUN_000c9d70(local_10);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar1);
  }
  return;
}
