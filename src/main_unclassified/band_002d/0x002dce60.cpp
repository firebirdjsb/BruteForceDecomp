/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8A2833F5CE830491EF1737DCFED5FBF60D747C95525011C59688CC2D5B247EE8
 * Entry: 0x002dce60, Ghidra index: 10311, label: FUN_002dce60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc654;
extern uint32_t _DAT_0046982c;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002dce60(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_838 [40];
  int local_810;
  short local_80c;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0xa8);
  *(short *)(iVar1 + 0x10) = *(short *)(iVar1 + 0x10) + 1;
  _DAT_0046982c = _DAT_0046982c + 1;
  FUN_002dcd20();
  FUN_002dcc60();
  if (0x96 < (int)*(short *)(param_1 + 0x4a) - (int)*(short *)(param_1 + 0x4c)) {
    FUN_002dce00();
    *(short *)(iVar1 + 0x10) = *(short *)(iVar1 + 0x10) + -1;
    FUN_002bbdd0();
    return;
  }
  FUN_002c4630(param_2);
  FUN_002dc900(local_838,param_1);
  iVar2 = *(int *)(iVar1 + 8);
  uVar3 = iVar2 + 0x1f + *(short *)(param_1 + 0x4a) * 4 & 0xffffffe0;
  if (uVar3 < *(uint *)(iVar1 + 0xc)) {
    *(uint *)(iVar1 + 8) = uVar3;
  }
  else {
    iVar2 = FUN_002bbe20();
  }
  FUN_002dcae0(param_1,iVar2);
  FUN_002dc590(param_1,iVar2,iVar1);
  *(short *)(iVar1 + 0x10) = *(short *)(iVar1 + 0x10) + -1;
  FUN_002bbdd0();
  if ((local_80c != 0) && (local_810 != 0)) {
    (*(code *)PTR_FUN_003bc654)(local_810);
    return;
  }
  return;
}
