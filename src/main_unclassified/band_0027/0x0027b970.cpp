/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5A89C2A90ECF09D7F5EB395FAD3D3F7ABF36C2FD8258327C75B97155B139BBEE
 * Entry: 0x0027b970, Ghidra index: 8966, label: FUN_0027b970
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00404fc0;
extern uint32_t DAT_00404fc8;
extern char s_CLOSED_00404fd0[];
extern char s___f__f__f___00404fb0[];
extern char s___f__f__f__f___00404fa0[];
undefined4 FUN_0027b970(int *param_1,int param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  float unaff_EBX;
  float unaff_ESI;
  float fVar6;
  float unaff_EDI;
  int aiStack_2c [3];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  piVar1 = param_1 + -2;
  iVar2 = (**(code **)(param_1[-2] + 0x14))(piVar1);
  aiStack_2c[0] = iVar2;
  uVar3 = (**(code **)(*param_1 + 0x14))(param_1);
  if ((iVar2 != 0) && (uVar3 <= param_3)) {
    pcVar4 = s_CLOSED_00404fd0;
    if (*(char *)(param_1[1] + 0x5c) == '\0') {
      pcVar4 = &DAT_00404fc8;
    }
    uVar3 = FUN_002eaa86(param_2,&DAT_00404fc0,pcVar4);
    FUN_0028c910();
    fVar6 = 0.0;
    if (unaff_EBX != 0.0) {
      do {
        (**(code **)(*piVar1 + 0x18))(piVar1,fVar6,aiStack_2c);
        iVar2 = FUN_002eaa86(uVar3 + param_2,s___f__f__f___00404fb0,(double)unaff_EDI,
                             (double)unaff_ESI,(double)unaff_EBX);
        (**(code **)(*piVar1 + 0x30))(piVar1,fVar6,aiStack_2c);
        iVar5 = FUN_002eaa86(uVar3 + iVar2 + param_2,s___f__f__f__f___00404fa0,(double)fStack_20,
                             (double)fStack_1c,(double)fStack_18);
        uVar3 = uVar3 + iVar2 + iVar5;
        if (param_3 <= uVar3) break;
        fVar6 = (float)((int)fVar6 + 1);
      } while ((uint)fVar6 < (uint)unaff_EBX);
    }
    if (unaff_EBX == fVar6) {
      return 0;
    }
  }
  return 0x80004005;
}
