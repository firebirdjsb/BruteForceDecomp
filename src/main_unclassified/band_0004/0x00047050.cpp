/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5B9B2762D603F6D0CDA35CD9D8521F5B602BD9515459B20105D6B3F834A6ABD2
 * Entry: 0x00047050, Ghidra index: 555, label: FUN_00047050
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004021b4;
extern uint32_t DAT_004021b5;
extern uint32_t _DAT_004021a8;
extern uint32_t _DAT_004021b0;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00047050(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *in_ECX;
  float10 fVar6;
  float fVar7;
  uint local_14c;
  int *local_144;
  undefined4 uStack_13c;
  float fStack_138;
  float fStack_134;
  int iStack_130;
  byte bStack_12c;
  float local_128;
  uint uStack_10;
  
  local_14c = 0;
  piVar2 = (int *)FUN_000120f0();
  iVar3 = FUN_000120f0();
  if ((iVar3 == 0) || (*(int *)(iVar3 + 0x59c) == 0)) {
    local_144 = (int *)0x0;
  }
  else {
    local_144 = (int *)FUN_0005bca0();
  }
  if (local_144 == piVar2) {
    local_144 = (int *)0x0;
  }
  if (in_ECX[0xfb] == 0) {
    FUN_00055a60(in_ECX + 0xf7);
  }
  local_128 = (float)(in_ECX[0xfa] + in_ECX[0xfb]);
  uVar4 = (int)local_128 - 1;
  if ((uint)in_ECX[0xf9] <= uVar4) {
    uVar4 = uVar4 - in_ECX[0xf9];
  }
  piVar2 = *(int **)(*(int *)(in_ECX[0xf8] + uVar4 * 4) + 0x58);
  if ((piVar2 == (int *)0x0) || ((*(byte *)(piVar2 + 0x1c) & 1) != 0)) {
    return 0;
  }
  iVar3 = FUN_00055aa0();
  if (((*(uint *)(iVar3 + 0x88) & 0x2000) == 0) || (*(char *)(iVar3 + 0x19) != '\0')) {
    iVar3 = iVar3 + 0x1c;
  }
  else {
    iVar3 = 0;
  }
  iVar3 = *(int *)(iVar3 + 0x20);
  if ((iVar3 == 0) && (iVar3 = FUN_00046f40(), iVar3 == 0)) {
LAB_000472c5:
    if (local_144 == (int *)0x0) {
      return local_14c;
    }
    uVar4 = (**(code **)(*in_ECX + 0x98))();
    if (uVar4 != 1) {
      return uVar4;
    }
    if (in_ECX[6] != 4) {
      fVar6 = (float10)FUN_00045230();
      iVar3 = (**(code **)(*local_144 + 0x40))();
      iVar3 = FUN_00046c70(piVar2,iVar3 + 0x24,(float)fVar6 * (float)fVar6);
      local_14c = 1;
      if (iVar3 == 0) goto LAB_00047295;
      FUN_00046ee0();
    }
    local_14c = 1;
  }
  else {
    iVar5 = (**(code **)(*piVar2 + 0x40))();
    fStack_134 = *(float *)(iVar5 + 0x2c) - *(float *)(iVar3 + 0x1c);
    fStack_138 = *(float *)(iVar5 + 0x28) - *(float *)(iVar3 + 0x18);
    fVar7 = *(float *)(iVar5 + 0x24) - *(float *)(iVar3 + 0x14);
    local_128 = fVar7 * fVar7 + fStack_138 * fStack_138 + fStack_134 * fStack_134;
    fVar7 = SQRT(local_128);
    FUN_00023940();
    uStack_10 = uStack_10 | 8;
    cVar1 = FUN_0004cd10(piVar2[2],fVar7 + 0.05);
    if (cVar1 == '\0') {
      iVar3 = FUN_0002a110(iVar3,piVar2);
    }
    if (iVar3 == 0) goto LAB_000472c5;
    bStack_12c = bStack_12c & 0xfc;
    DAT_004021b4 = 1;
    fStack_134 = 0.0;
    fStack_138 = 0.0;
    uStack_13c = 0;
    iStack_130 = iVar3;
    cVar1 = FUN_00041660(&uStack_13c,in_ECX + 0x23c,1);
    if (cVar1 != '\0') {
      FUN_00025730(in_ECX + 0x23c,1,1);
      in_ECX[0x1cb] = 2;
    }
    local_14c = (uint)(cVar1 != '\0');
    _DAT_004021b0 = 0;
    _DAT_004021a8 = 0xbf800000;
    DAT_004021b4 = 0;
    DAT_004021b5 = 0;
    if (local_14c == 0) goto LAB_000472c5;
LAB_00047295:
    if (local_14c != 1) {
      return local_14c;
    }
  }
  FUN_0003f0e0(0);
  return local_14c;
}
