/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E8AA1A00F982B201C186C87606BC8287398D638DDF4C9E3961FEA1FDAB7515FA
 * Entry: 0x00303220, Ghidra index: 11085, label: FUN_00303220
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a5d78;
extern uint32_t DAT_004a5dac;
extern uint32_t DAT_004a5e38;
extern uint32_t DAT_004a5e40;
extern uint32_t DAT_004a6e18;
extern uint32_t PTR_FUN_0038e438;
extern uint32_t PTR_FUN_0038e820;
extern uint32_t PTR_FUN_003bc654;
extern uint32_t PTR_LAB_0038e414;
extern uint32_t _DAT_004a701c;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00303220(void)

{
  short sVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 *in_ECX;
  
  sVar1 = *(short *)((int)in_ECX + 0x1e);
  *in_ECX = &PTR_FUN_0038e438;
  while (sVar1 != 0) {
    piVar2 = *(int **)(in_ECX[8] + -4 + (uint)*(ushort *)((int)in_ECX + 0x1e) * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(1);
    }
    sVar1 = *(short *)((int)in_ECX + 0x1e);
  }
  FUN_002bdd90(1);
  puVar3 = (undefined4 *)in_ECX[10];
  if (puVar3 != (undefined4 *)0x0) {
    if ((_DAT_004a701c & 1) == 0) {
      _DAT_004a701c = _DAT_004a701c | 1;
      FUN_002ff630();
      _atexit(FUN_00311870);
    }
    uVar4 = (uint)*(ushort *)(in_ECX + 9);
    DAT_004a5e38 = DAT_004a5e38 + uVar4 * -4;
    DAT_004a5e40 = DAT_004a5e40 + -1;
    if (uVar4 != 0x80 && 0x1ff < uVar4 * 4) {
      (*(code *)PTR_FUN_003bc654)(puVar3);
      return;
    }
    iVar5 = (int)(char)(&DAT_004a6e18)[uVar4 * 4];
    *(int *)(&DAT_004a5dac + iVar5 * 4) = *(int *)(&DAT_004a5dac + iVar5 * 4) + -1;
    *puVar3 = *(undefined4 *)(&DAT_004a5d78 + iVar5 * 4);
    puVar3[1] = 0x3425234;
    *(undefined4 **)(&DAT_004a5d78 + iVar5 * 4) = puVar3;
  }
  puVar3 = (undefined4 *)in_ECX[8];
  if (puVar3 != (undefined4 *)0x0) {
    if ((_DAT_004a701c & 1) == 0) {
      _DAT_004a701c = _DAT_004a701c | 1;
      FUN_002ff630();
      _atexit(FUN_00311870);
    }
    uVar4 = (uint)*(ushort *)(in_ECX + 7);
    DAT_004a5e38 = DAT_004a5e38 + uVar4 * -4;
    DAT_004a5e40 = DAT_004a5e40 + -1;
    if (uVar4 != 0x80 && 0x1ff < uVar4 * 4) {
      (*(code *)PTR_FUN_003bc654)(puVar3);
      return;
    }
    iVar5 = (int)(char)(&DAT_004a6e18)[uVar4 * 4];
    *(int *)(&DAT_004a5dac + iVar5 * 4) = *(int *)(&DAT_004a5dac + iVar5 * 4) + -1;
    *puVar3 = *(undefined4 *)(&DAT_004a5d78 + iVar5 * 4);
    puVar3[1] = 0x3425234;
    *(undefined4 **)(&DAT_004a5d78 + iVar5 * 4) = puVar3;
  }
  *in_ECX = &PTR_LAB_0038e414;
  if (*(short *)(in_ECX + 4) != 0) {
    if (in_ECX[3] != 0) {
      (*(code *)PTR_FUN_003bc654)(in_ECX[3]);
      return;
    }
    *(undefined2 *)(in_ECX + 2) = 0;
    *(undefined2 *)(in_ECX + 4) = 0;
  }
  *(undefined2 *)((int)in_ECX + 10) = 0;
  *in_ECX = &PTR_FUN_0038e820;
  return;
}
