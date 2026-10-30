/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3F0C28F13CCDF86A799766A3C9049C78C37C05DFAB7ADED2E902EDF083E44603
 * Entry: 0x00083c20, Ghidra index: 1538, label: FUN_00083c20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern int FUN_000782c0(int param_1);
extern void FUN_00077eb0(int param_1,float param_2);

extern uint32_t DAT_0040201c;
extern uint32_t DAT_00402020;
extern uint32_t DAT_00402024;
void FUN_00083c20(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int unaff_EBX;
  int unaff_retaddr;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = DAT_0040201c;
  local_8 = DAT_00402020;
  local_4 = DAT_00402024;
  iVar1 = FUN_000782c0(3);
  if (iVar1 != 0) {
    local_10 = 0;
    iVar2 = (**(code **)(**(int **)(param_3 + 0xbec) + 0x10))(&local_10);
    if (iVar2 != 0) {
      FUN_00077eb0(iVar1,(float)unaff_EBX + (float)*(int *)(*(int *)(iVar2 + 0x28) + 0x20));
    }
    *(byte *)(unaff_retaddr + 0x5bd) = *(byte *)(unaff_retaddr + 0x5bd) | 1;
  }
  return;
}
