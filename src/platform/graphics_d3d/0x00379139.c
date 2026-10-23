/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 64D90201B8E3D27D1EDF89BC2C84CCDD1E40D88A3A5C9D52B9EB1BA40083FCF2
 * Entry: 0x00379139, Ghidra index: 13480, label: FUN_00379139
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400080;
extern uint32_t DAT_00400090;
extern uint32_t DAT_00400098;
extern uint32_t DAT_0040009c;
extern uint32_t DAT_00400144;
extern uint32_t DAT_0040014c;
extern uint32_t DAT_00400150;
extern uint32_t DAT_00400154;
extern uint32_t DAT_00400158;
extern uint32_t DAT_00400750;
extern uint32_t DAT_00400764;
extern uint32_t DAT_00400780;
extern uint32_t DAT_00400880;
extern uint32_t DAT_00400904;
extern uint32_t DAT_004009a0;
extern uint32_t DAT_004009a4;
extern uint32_t DAT_004009a8;
extern uint32_t DAT_00400b84;
extern uint32_t DAT_00400b88;
extern uint32_t PTR_DAT_00400754;
extern uint32_t PTR_PTR_00400084;
extern uint32_t PTR_PTR_0040008c;
extern uint32_t PTR_PTR_00400094;
void FUN_00379139(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_EAX;
  undefined4 *puVar5;
  int local_10;
  uint local_c;
  
  iVar3 = *in_EAX;
  puVar1 = (uint *)(iVar3 + 0x200);
  *puVar1 = *puVar1 & 0xffffefff;
  *puVar1 = *puVar1 | 0x1000;
  in_EAX[0x1fb] = 0;
  in_EAX[0x1ff] = 0;
  in_EAX[0x202] = 0;
  in_EAX[0x205] = 0;
  in_EAX[0x1fc] = 0x118700;
  in_EAX[0x1fd] = (int)&LAB_0028c3ff;
  in_EAX[0x1fe] = -0xc21fb87;
  in_EAX[0x200] = 4;
  in_EAX[0x201] = 0x45ead10e;
  in_EAX[0x203] = 0x78;
  in_EAX[0x204] = 0x40;
  *(undefined4 *)(&DAT_00400080 + iVar3) = 0;
  *(int *)((int)&PTR_PTR_00400084 + iVar3) = in_EAX[0x1fc];
  *(int *)(&DAT_00400880 + iVar3) = in_EAX[0x1fd];
  *(int *)((int)&PTR_PTR_0040008c + iVar3) = in_EAX[0x1fe];
  *(int *)(&DAT_00400090 + iVar3) = in_EAX[0x1ff];
  *(int *)((int)&PTR_PTR_00400094 + iVar3) = in_EAX[0x200];
  *(int *)(&LAB_00400b80 + iVar3) = in_EAX[0x201];
  *(int *)(&DAT_00400b84 + iVar3) = in_EAX[0x202];
  *(int *)(&DAT_00400098 + iVar3) = in_EAX[0x203];
  *(int *)(&DAT_0040009c + iVar3) = in_EAX[0x204];
  *(int *)((int)&DAT_00400b88 + iVar3) = in_EAX[0x205];
  *(uint *)(&DAT_00400780 + iVar3) = in_EAX[0x50] & 0xffff;
  FUN_003793b5();
  local_c = 0x50;
  puVar5 = (undefined4 *)(&DAT_00400904 + iVar3);
  do {
    uVar4 = puVar5[-0xc01b0];
    *puVar5 = uVar4;
    *(uint *)(&DAT_00400750 + iVar3) = local_c - 0x20 & 0x1ffc | 0xea0000;
    *(undefined4 *)((int)&PTR_DAT_00400754 + iVar3) = uVar4;
    uVar4 = puVar5[-0xc01af];
    puVar5[1] = uVar4;
    *(uint *)(&DAT_00400750 + iVar3) = local_c & 0x1ffc | 0xea0000;
    *(undefined4 *)((int)&PTR_DAT_00400754 + iVar3) = uVar4;
    uVar4 = puVar5[-0xc01b1];
    puVar5[-1] = uVar4;
    uVar2 = local_c + 4;
    *(uint *)(&DAT_00400750 + iVar3) = local_c - 0x40 & 0x1ffc | 0xea0000;
    puVar5 = puVar5 + 4;
    *(undefined4 *)((int)&PTR_DAT_00400754 + iVar3) = uVar4;
    local_c = uVar2;
  } while ((int)uVar2 < 0x70);
  puVar5 = (undefined4 *)(&LAB_00400980 + iVar3);
  local_10 = 8;
  do {
    uVar4 = puVar5[-0xc01a0];
    *puVar5 = uVar4;
    *(uint *)(&DAT_00400750 + iVar3) = (uint)((-0x4008f0 - iVar3) + (int)puVar5) & 0x1ffc | 0xea0000
    ;
    puVar5 = puVar5 + 1;
    local_10 = local_10 + -1;
    *(undefined4 *)((int)&PTR_DAT_00400754 + iVar3) = uVar4;
  } while (local_10 != 0);
  *(undefined4 *)(&DAT_004009a0 + iVar3) = *(undefined4 *)(&LAB_00100324 + iVar3);
  *(undefined4 *)(&DAT_00400750 + iVar3) = 0xea000c;
  *(undefined4 *)((int)&PTR_DAT_00400754 + iVar3) = *(undefined4 *)(&LAB_00100324 + iVar3);
  uVar4 = *(undefined4 *)(iVar3 + 0x100200);
  *(undefined4 *)(&DAT_004009a4 + iVar3) = uVar4;
  *(undefined4 *)(&DAT_00400750 + iVar3) = 0xea0000;
  *(undefined4 *)((int)&PTR_DAT_00400754 + iVar3) = uVar4;
  uVar4 = *(undefined4 *)(iVar3 + 0x100204);
  *(undefined4 *)(&DAT_004009a8 + iVar3) = uVar4;
  *(undefined4 *)(&DAT_00400750 + iVar3) = 0xea0004;
  *(undefined4 *)((int)&PTR_DAT_00400754 + iVar3) = uVar4;
  *(undefined4 *)(&DAT_0040014c + iVar3) = 0;
  *(undefined4 *)(&DAT_00400150 + iVar3) = 0;
  *(undefined4 *)(&DAT_00400154 + iVar3) = 0;
  *(undefined4 *)(&DAT_00400158 + iVar3) = 0;
  *(undefined4 *)(&DAT_00400144 + iVar3) = 0x10000000;
  *(undefined4 *)(&DAT_00400764 + iVar3) = 0x8000000;
  FUN_003793f4(in_EAX[0x4d]);
  return;
}
