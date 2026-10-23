/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D060A408242FEC4D254DFC2EFDB3A38FB903D3A1C053640B2BBE58DACACCD529
 * Entry: 0x0034d40c, Ghidra index: 13001, label: FUN_0034d40c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_fef000a8;
extern uint32_t _DAT_fef000ac;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0034d40c(byte *param_1)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  short *psVar3;
  short *psVar4;
  bool bVar5;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar1 = *(int **)(in_ECX + 0x260);
  if (piVar1 == (int *)0x0) {
    local_c = *(undefined4 *)(in_ECX + 0x1e6);
    local_8._2_2_ = (undefined2)((uint)in_ECX >> 0x10);
    local_8 = CONCAT22(local_8._2_2_,*(undefined2 *)(in_ECX + 0x1ea));
    if ((param_1 != (byte *)0x0) &&
       (((*(int *)param_1 != 0 || (*(short *)(param_1 + 4) != 0)) && ((*param_1 & 1) == 0)))) {
      local_c = *(undefined4 *)param_1;
      local_8 = CONCAT22(local_8._2_2_,*(undefined2 *)(param_1 + 4));
    }
    iVar2 = 3;
    bVar5 = true;
    psVar3 = (short *)(in_ECX + 0x1e0);
    psVar4 = (short *)&local_c;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *psVar3 == *psVar4;
      psVar3 = psVar3 + 1;
      psVar4 = psVar4 + 1;
    } while (bVar5);
    if (!bVar5) {
      FUN_0034ce64();
      _DAT_fef000a8 = local_c;
      _DAT_fef000ac = local_8 & 0xffff;
      *(undefined4 *)(in_ECX + 0x1e0) = local_c;
      *(undefined2 *)(in_ECX + 0x1e4) = (undefined2)local_8;
      FUN_0034ce3c();
    }
  }
  else if ((piVar1[2] == 0x58424456) && (piVar1[3] != 0)) {
    (**(code **)(*piVar1 + 0x1c))(param_1,in_ECX + 0x1e0);
  }
  return;
}
