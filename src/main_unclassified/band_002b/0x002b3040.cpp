/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8FF9678DF7127142CFD31F210F92749B21BDB51E7748F6E096FF1E6EF1FCCFBA
 * Entry: 0x002b3040, Ghidra index: 9755, label: FUN_002b3040
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0038e5b4;
void FUN_002b3040(void)

{
  short sVar1;
  int iVar2;
  undefined4 *in_ECX;
  int *piVar3;
  uint uVar4;
  int aiStack_10 [3];
  
  iVar2 = in_ECX[6];
  *in_ECX = PTR_FUN_0038e5b4;
  if (iVar2 != 0) {
    FUN_002b5a30();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar2);
  }
  in_ECX[6] = 0;
  sVar1 = *(short *)(in_ECX + 0x1a);
  while (0 < sVar1) {
    if (in_ECX[0x18] == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = *(int **)(in_ECX[0x18] + 0xc);
    }
    (**(code **)(*piVar3 + 8))(in_ECX + 0x10);
    sVar1 = *(short *)(in_ECX + 0x1a);
  }
  FUN_002b3370(in_ECX);
  iVar2 = in_ECX[5];
  uVar4 = (uint)*(ushort *)(iVar2 + 0x136);
  aiStack_10[0] = iVar2;
  while (uVar4 = uVar4 - 1, -1 < (int)uVar4) {
    (**(code **)**(undefined4 **)(*(int *)(iVar2 + 0x138) + uVar4 * 4))(aiStack_10);
  }
  if ((in_ECX[0x1c] & 0x2000) != 0) {
    FUN_002bcc10(*(undefined4 *)(in_ECX[5] + 0xc),in_ECX);
  }
  if ((in_ECX[0x1c] & 0x1000) != 0) {
    aiStack_10[0] = in_ECX[5];
    FUN_002bca90(*(undefined4 *)(aiStack_10[0] + 0xc),aiStack_10);
  }
  FUN_002bcea0(in_ECX);
  if (in_ECX[0xf] != 0) {
    *(undefined4 *)(in_ECX[0xf] + 0x68) = 0;
    in_ECX[0xf] = 0;
  }
  iVar2 = in_ECX[0x24];
  FUN_002bd570();
  if (*(short *)(iVar2 + 0x52) == 0) {
    if (*(char *)(iVar2 + 100) < '\b') {
      FUN_002bb0e0(iVar2);
    }
    FUN_002bb860();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar2);
  }
  iVar2 = in_ECX[0x26];
  if ((iVar2 != in_ECX[0x24]) && (FUN_002bd570(), *(short *)(iVar2 + 0x52) == 0)) {
    if (*(char *)(iVar2 + 100) < '\b') {
      FUN_002bb0e0(iVar2);
    }
    FUN_002bb860();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar2);
  }
  iVar2 = in_ECX[0x25];
  if (((iVar2 != in_ECX[0x26]) && (iVar2 != in_ECX[0x24])) &&
     (FUN_002bd570(), *(short *)(iVar2 + 0x52) == 0)) {
    if (*(char *)(iVar2 + 100) < '\b') {
      FUN_002bb0e0(iVar2);
    }
    FUN_002bb860();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar2);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(in_ECX[10]);
}
