/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 81DD2E57CC3949E7285B2F41AD2C3BE3E6764196181BBF11399AD423C162E77D
 * Entry: 0x000c0ae0, Ghidra index: 2344, label: FUN_000c0ae0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003c8fa8;
extern uint32_t DAT_003c8fac;
extern uint32_t DAT_003c8fb0;
extern uint32_t DAT_003c8fb4;
extern uint32_t DAT_003c8fb8;
extern uint32_t DAT_003c8fbc;
extern uint32_t DAT_003c8fc0;
extern uint32_t DAT_003c8fc4;
extern uint32_t DAT_003c8fc8;
extern uint32_t DAT_003c8fcc;
extern uint32_t DAT_003c8fd0;
extern uint32_t DAT_003c8fd4;
void FUN_000c0ae0(void)

{
  undefined2 uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  short sVar5;
  short sVar6;
  int iVar7;
  
  iVar3 = *(int *)(in_ECX + 0x34);
  iVar7 = 0;
  sVar6 = 0x14;
  if ((*(short *)(iVar3 + 0x20) < 600) || (*(short *)(iVar3 + 0x22) < 400)) {
    iVar7 = 1;
    sVar6 = 10;
  }
  iVar4 = *(int *)(in_ECX + 0xa4);
  if (iVar4 != 0) {
    uVar1 = (&DAT_003c8fac)[iVar7 * 0x18];
    *(undefined2 *)(iVar4 + 4) = (&DAT_003c8fa8)[iVar7 * 0x18];
    *(undefined2 *)(iVar4 + 6) = uVar1;
  }
  iVar4 = *(int *)(in_ECX + 0xa8);
  if (iVar4 != 0) {
    uVar1 = (&DAT_003c8fb4)[iVar7 * 0x18];
    *(undefined2 *)(iVar4 + 4) = (&DAT_003c8fb0)[iVar7 * 0x18];
    *(undefined2 *)(iVar4 + 6) = uVar1;
  }
  iVar4 = *(int *)(in_ECX + 0xac);
  if (iVar4 != 0) {
    uVar1 = *(undefined2 *)(&DAT_003c8fbc + iVar7 * 0x30);
    *(undefined2 *)(iVar4 + 4) = *(undefined2 *)(&DAT_003c8fb8 + iVar7 * 0x30);
    *(undefined2 *)(iVar4 + 6) = uVar1;
  }
  iVar4 = *(int *)(in_ECX + 0xb0);
  if (iVar4 != 0) {
    uVar1 = *(undefined2 *)(&DAT_003c8fc4 + iVar7 * 0x30);
    *(undefined2 *)(iVar4 + 4) = *(undefined2 *)(&DAT_003c8fc0 + iVar7 * 0x30);
    *(undefined2 *)(iVar4 + 6) = uVar1;
  }
  iVar4 = *(int *)(in_ECX + 0xb4);
  if (iVar4 != 0) {
    uVar1 = *(undefined2 *)(&DAT_003c8fcc + iVar7 * 0x30);
    *(undefined2 *)(iVar4 + 4) = *(undefined2 *)(&DAT_003c8fc8 + iVar7 * 0x30);
    *(undefined2 *)(iVar4 + 6) = uVar1;
  }
  iVar4 = *(int *)(in_ECX + 0xb8);
  if (iVar4 != 0) {
    uVar1 = *(undefined2 *)(&DAT_003c8fd4 + iVar7 * 0x30);
    *(undefined2 *)(iVar4 + 4) = *(undefined2 *)(&DAT_003c8fd0 + iVar7 * 0x30);
    *(undefined2 *)(iVar4 + 6) = uVar1;
  }
  sVar2 = *(short *)(*(int *)(in_ECX + 0x34) + 0x22);
  iVar4 = *(int *)(in_ECX + 0x80);
  *(short *)(in_ECX + 8) = *(short *)(*(int *)(in_ECX + 0x34) + 0x20) / 2 + sVar6;
  *(short *)(in_ECX + 10) = sVar2 / 2;
  *(short *)(iVar4 + 6) = (short)*(undefined4 *)(&DAT_003c8fac + iVar7 * 0x18) + -0x1e;
  *(short *)(iVar4 + 4) = -sVar6 - *(short *)(iVar4 + 0xe) / 2;
  sVar2 = *(short *)(*(int *)(in_ECX + 0xac) + 0xe) / 2 +
          (short)*(undefined4 *)(&DAT_003c8fb8 + iVar7 * 0x30);
  iVar4 = *(int *)(in_ECX + 0x88);
  sVar5 = *(short *)(*(int *)(in_ECX + 0xac) + 0xc) + 0x26 +
          (short)*(undefined4 *)(&DAT_003c8fbc + iVar7 * 0x30);
  *(short *)(iVar4 + 4) = sVar2 - *(short *)(iVar4 + 0xe) / 2;
  *(short *)(iVar4 + 6) = sVar5;
  iVar7 = *(int *)(in_ECX + 0x84);
  *(short *)(iVar7 + 4) = (-0x14 - *(short *)(iVar7 + 0xe) / 2) - sVar2;
  *(short *)(iVar7 + 6) = sVar5;
  if ((*(short *)(iVar3 + 0x20) < 600) || (*(short *)(iVar3 + 0x22) < 400)) {
    sVar5 = sVar5 + -0x1e;
  }
  else {
    sVar5 = sVar5 + 0x1a;
  }
  iVar3 = *(int *)(in_ECX + 0x8c);
  *(short *)(iVar3 + 4) = -sVar6 - *(short *)(iVar3 + 0xe) / 2;
  *(short *)(iVar3 + 6) = sVar5;
  return;
}
