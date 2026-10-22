/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FA544AACB412230F08624E9195CDAED90F114F52C4C2CCE68DB3FDF79A57AB37
 * Entry: 0x00377d70, Ghidra index: 13463, label: FUN_00377d70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400100;
extern char s_GPU_generated_an_error__Try_repr_0037ad18[];
uint FUN_00377d70(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *param_1;
  uVar2 = *(uint *)(iVar1 + 0x2100);
  if ((uVar2 & 0x100000) != 0) {
    *(undefined4 *)(iVar1 + 0x2100) = 0x100000;
  }
  if ((uVar2 & 0x1000000) != 0) {
    *(undefined4 *)(iVar1 + 0x2100) = 0x1000000;
  }
  uVar2 = *(uint *)(iVar1 + 0x2100);
  if ((uVar2 & 1) != 0) {
    uVar3 = *(uint *)(iVar1 + 0x3250);
    *(undefined4 *)(iVar1 + 0x2500) = 0;
    *(undefined4 *)(iVar1 + 0x3250) = 0;
    *(undefined4 *)(iVar1 + 0x2100) = 1;
    iVar4 = 0xffff;
    do {
      if ((uVar3 & 0x1000) == 0) break;
      iVar4 = iVar4 + -1;
      uVar3 = *(uint *)(iVar1 + 0x3250);
    } while (iVar4 != 0);
    *(undefined4 *)(iVar1 + 0x3258) = 0;
    *(undefined4 *)(iVar1 + 0x3250) = 1;
    *(undefined4 *)(iVar1 + 0x2500) = 1;
  }
  if ((uVar2 & 0x1000) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0037a3e0(s_GPU_generated_an_error__Try_repr_0037ad18);
  }
  if ((*(uint *)(iVar1 + 0x3220) & 0x1000) != 0) {
    if ((*(uint *)(iVar1 + 0x3214) & 0x10) == 0) {
      do {
        if (*(int *)(iVar1 + 0x2100) != 0) break;
        if (*(int *)(&DAT_00400100 + iVar1) != 0) {
          FUN_00377cb0();
        }
        if ((*(uint *)(iVar1 + 0x100) & 0x1000000) != 0) {
          FUN_00377a50();
        }
      } while ((*(byte *)(iVar1 + 0x3214) & 0x10) == 0);
    }
    if ((*(byte *)(iVar1 + 0x3214) & 0x10) != 0) {
      do {
      } while ((*(byte *)(iVar1 + 0x2500) & 0x10) != 0);
      *(uint *)(iVar1 + 0x3220) = *(uint *)(iVar1 + 0x3220) & 0xffffefff;
    }
  }
  if (*(int *)(iVar1 + 0x2100) == 0) {
    *(undefined4 *)(iVar1 + 0x3250) = 1;
    *(undefined4 *)(iVar1 + 0x2500) = 1;
  }
  return *(uint *)(iVar1 + 0x2080) & 1 | *(uint *)(iVar1 + 0x2100);
}
