/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A06209A6A41B10B6B4F0E8C7E9A2E22AD38DE0C5F61F9889BCCF168D335C785A
 * Entry: 0x000ed7a0, Ghidra index: 2950, label: FUN_000ed7a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
void FUN_000ed7a0(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *in_ECX;
  uint uVar5;
  undefined4 local_18;
  uint local_14;
  undefined4 local_10;
  int *local_c;
  
  uVar5 = 0;
  while( true ) {
    iVar1 = in_ECX[0x25];
    if ((iVar1 == 0) || ((uint)(in_ECX[0x26] - iVar1 >> 2) <= uVar5)) break;
    uVar2 = *(uint *)(iVar1 + uVar5 * 4);
    if (uVar2 != 0) {
      if ((uVar2 & 1) == 0) {
        uVar3 = uVar2 * 0x19660d + 0x3c6ef35f >> 0x15;
        local_18 = *(undefined4 *)(&DAT_00414da0 + uVar3 * 4);
        *(undefined4 **)(&DAT_00414da0 + uVar3 * 4) = &local_18;
      }
      iVar1 = in_ECX[0xc];
      local_14 = uVar2;
      iVar4 = FUN_000e1910(in_ECX + 0xb,iVar1,*(undefined4 *)(iVar1 + 4),&local_18);
      FUN_000389d0();
      *(int *)(iVar1 + 4) = iVar4;
      **(int **)(iVar4 + 4) = iVar4;
      if (local_14 != 0) {
        FUN_0008f6e0();
      }
      if (((uint)in_ECX & 1) == 0) {
        uVar3 = (int)in_ECX * 0x19660d + 0x3c6ef35fU >> 0x15;
        local_10 = *(undefined4 *)(&DAT_00414da0 + uVar3 * 4);
        *(undefined4 **)(&DAT_00414da0 + uVar3 * 4) = &local_10;
      }
      iVar1 = *(int *)(uVar2 + 0x30);
      local_c = in_ECX;
      iVar4 = FUN_000e1910(uVar2 + 0x2c,iVar1,*(undefined4 *)(iVar1 + 4),&local_10);
      FUN_000389d0();
      *(int *)(iVar1 + 4) = iVar4;
      **(int **)(iVar4 + 4) = iVar4;
      if (local_c != (int *)0x0) {
        FUN_0008f6e0();
      }
    }
    uVar5 = uVar5 + 1;
  }
  if (in_ECX[0x25] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x25]);
  }
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0;
  (**(code **)(*in_ECX + 0x58))();
  return;
}
