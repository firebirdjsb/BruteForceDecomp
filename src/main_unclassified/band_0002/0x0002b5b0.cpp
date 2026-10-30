/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4543559CC263732A689725ECCD3447E8DFE45308234654A38DEB95A072649C2B
 * Entry: 0x0002b5b0, Ghidra index: 290, label: FUN_0002b5b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern undefined4 FUN_00055aa0(void);
extern void FUN_00020170(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern uint FUN_000594a0(int param_1,undefined4 *param_2,int param_3);
extern void FUN_0011dfa0(void);
extern char FUN_000416a0(int param_1,uint param_2);
extern undefined4 FUN_00025730(int param_1,undefined4 param_2,int param_3);
extern int FUN_00140a60(int param_1,int *param_2);

extern uint32_t PTR_FUN_003a400c;
undefined4 FUN_0002b5b0(undefined4 param_1)

{
  uint *puVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int unaff_EDI;
  undefined4 local_27c;
  undefined **local_278;
  undefined1 *local_274;
  undefined4 local_270;
  int local_26c;
  byte local_268;
  undefined1 auStack_250 [580];
  byte bStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  piVar3 = (int *)FUN_000120f0();
  if (((*(byte *)(unaff_EDI + 0x19c) & 1) != 0) && (0.0 < *(float *)(unaff_EDI + 0x198))) {
    return 0;
  }
  uVar6 = 0;
  *(undefined1 *)(unaff_EDI + 0x5a8) = 0;
  iVar4 = FUN_00055aa0();
  if ((((*(uint *)(iVar4 + 0x88) & 0x2000) == 0) || (*(char *)(iVar4 + 0x19) != '\0')) &&
     ((iVar4 != -0x1c && (*(int *)(iVar4 + 0x20) == 0x5d)))) {
    *(undefined1 *)(unaff_EDI + 0x5a8) = 1;
  }
  iVar4 = FUN_00055aa0();
  if (*(int *)(iVar4 + 0x14) == 0) {
    iVar4 = piVar3[0x93];
    piVar3[0x94] = piVar3[0x94] | 1;
    local_27c = 0x42200000;
    if (*(char *)(unaff_EDI + 0x5a8) != '\0') {
      iVar5 = FUN_00055aa0();
      uVar6 = *(undefined4 *)(iVar5 + 0x58);
      if (*(int *)(unaff_EDI + 0x58) == 3) {
        local_27c = 0x40e00000;
      }
    }
    iVar5 = (**(code **)(*piVar3 + 0x40))();
    FUN_00020170(piVar3,iVar5 + 0x24,0x3f800000,local_27c);
    bStack_c = bStack_c & 0xfe;
    uStack_8 = param_1;
    local_274 = auStack_250;
    local_278 = &PTR_FUN_003a400c;
    local_270 = 2;
    uStack_4 = uVar6;
    iVar5 = FUN_000594a0(iVar4,&local_278,0);
    if (iVar5 == 0) {
      local_270 = 10;
      iVar5 = FUN_000594a0(iVar4,&local_278,0);
      goto LAB_0002b720;
    }
  }
  else {
    iVar4 = FUN_00055aa0();
    iVar5 = *(int *)(iVar4 + 0x14);
LAB_0002b720:
    if (iVar5 == 0) goto LAB_0002b809;
  }
  iVar4 = FUN_00055aa0();
  if (((*(byte *)(iVar4 + 0x88) & 4) == 0) || ((*(byte *)(iVar5 + 0x28) & 1) == 0)) {
    local_268 = local_268 & 0xfc;
    local_270 = 0;
    local_274 = (undefined1 *)0x0;
    local_278 = (undefined **)0x0;
    local_26c = iVar5;
    FUN_000120f0();
    FUN_0011dfa0();
    cVar2 = FUN_000416a0(unaff_EDI + 0x930,1);
    if (cVar2 != '\0') {
      FUN_00025730(unaff_EDI + 0x930,1,0);
      *(undefined4 *)(unaff_EDI + 0x770) = 3;
      *(undefined4 *)(unaff_EDI + 0x594) = 0;
      if (*(int *)(unaff_EDI + 0x590) != 0) {
        puVar1 = (uint *)(*(int *)(unaff_EDI + 0x590) + 0x28);
        *puVar1 = *puVar1 & 0xfffffffe;
      }
      *(int *)(unaff_EDI + 0x590) = iVar5;
      if (iVar5 != 0) {
        *(uint *)(iVar5 + 0x28) = *(uint *)(iVar5 + 0x28) | 1;
      }
      FUN_00140a60(*(undefined4 *)(piVar3[2] + 0xbe8),piVar3,0xe7eae392,0);
      return 1;
    }
  }
LAB_0002b809:
  *(undefined4 *)(unaff_EDI + 0x1a0) = 0x41200000;
  *(undefined4 *)(unaff_EDI + 0x198) = 0x41200000;
  *(byte *)(unaff_EDI + 0x19c) = *(byte *)(unaff_EDI + 0x19c) & 0xf9 | 1;
  return 0;
}
