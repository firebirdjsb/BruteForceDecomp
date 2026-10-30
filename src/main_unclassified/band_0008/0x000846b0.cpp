/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 21775DE68A54D41FA233DEB7B2A15946D896786350C936651AA507F1F291DC3C
 * Entry: 0x000846b0, Ghidra index: 1542, label: FUN_000846b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern int FUN_000782c0(int param_1);
extern void FUN_00077eb0(int param_1,float param_2);
extern int FUN_00077da0(int param_1);

extern uint32_t DAT_003bc150;
extern uint32_t DAT_003bc550;
extern uint32_t DAT_00402000;
extern uint32_t DAT_00402004;
extern uint32_t DAT_00402008;
extern uint32_t DAT_0040200c;
extern uint32_t DAT_00402010;
extern uint32_t DAT_00402014;
extern uint32_t DAT_00402018;
extern uint32_t DAT_0040201c;
extern uint32_t DAT_00402020;
extern uint32_t DAT_00402028;
extern char s_entry__d_0040dbd4[];
uint FUN_000846b0(void)

{
  char *pcVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  int unaff_ESI;
  int *piVar9;
  char local_28;
  char local_27 [15];
  int local_18 [4];
  uint local_8;
  undefined4 local_4;
  
  *(byte *)(in_EAX + 0x5bc) = *(byte *)(in_EAX + 0x5bc) & 0x3f;
  *(byte *)(in_EAX + 0x5bd) = *(byte *)(in_EAX + 0x5bd) & 0xfe;
  piVar9 = local_18;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar9 = 0;
    piVar9 = piVar9 + 1;
  }
  local_18[0] = DAT_00402000;
  local_18[1] = DAT_00402004;
  local_18[2] = DAT_00402008;
  local_18[3] = DAT_0040200c;
  iVar4 = FUN_000782c0(4);
  if (iVar4 != 0) {
    FUN_00077eb0(iVar4,0);
  }
  local_18[3] = DAT_00402010;
  iVar4 = FUN_000782c0(4);
  if (iVar4 != 0) {
    FUN_00077eb0(iVar4,0);
  }
  local_18[3] = DAT_00402014;
  iVar4 = FUN_000782c0(4);
  if (iVar4 != 0) {
    FUN_00077eb0(iVar4,0);
  }
  local_18[3] = DAT_00402018;
  iVar4 = 0;
  do {
    iVar4 = iVar4 + 1;
    FUN_002eaa19(&local_28,0x10,s_entry__d_0040dbd4,iVar4);
    iVar3 = local_18[0];
    local_8 = 0xffffffff;
    pcVar7 = &local_28;
    cVar2 = local_28;
    while (cVar2 != '\0') {
      local_8 = local_8 >> 8 ^
                *(uint *)(&DAT_003bc150 + (((byte)(&DAT_003bc550)[cVar2] ^ local_8) & 0xff) * 4);
      pcVar1 = pcVar7 + 1;
      pcVar7 = pcVar7 + 1;
      cVar2 = *pcVar1;
    }
    local_8 = ~local_8;
    uVar5 = 0;
    local_4 = 0xf66ab3a9;
    iVar8 = 0;
    while( true ) {
      if ((*(int *)(unaff_ESI + 0x14) == 0) ||
         ((uint)(*(int *)(unaff_ESI + 0x18) - *(int *)(unaff_ESI + 0x14) >> 4) <= uVar5))
      goto LAB_0008481a;
      if (*(int *)(*(int *)(unaff_ESI + 0x14) + iVar8) == local_18[0]) break;
      uVar5 = uVar5 + 1;
      iVar8 = iVar8 + 0x10;
    }
    iVar8 = FUN_00077da0(5);
    if (iVar8 != 0) {
      FUN_00077eb0(iVar8,0);
      iVar3 = local_18[0];
    }
LAB_0008481a:
    uVar5 = 0;
    local_4 = 0x1c785ea9;
    iVar8 = 0;
    while( true ) {
      if ((*(int *)(unaff_ESI + 0x14) == 0) ||
         ((uint)(*(int *)(unaff_ESI + 0x18) - *(int *)(unaff_ESI + 0x14) >> 4) <= uVar5))
      goto LAB_0008486a;
      if (*(int *)(*(int *)(unaff_ESI + 0x14) + iVar8) == iVar3) break;
      uVar5 = uVar5 + 1;
      iVar8 = iVar8 + 0x10;
    }
    iVar8 = FUN_00077da0(5);
    if (iVar8 != 0) {
      FUN_00077eb0(iVar8,0);
      iVar3 = local_18[0];
    }
LAB_0008486a:
    uVar5 = 0;
    local_4 = 0xe01a523c;
    iVar8 = 0;
    while( true ) {
      if ((*(int *)(unaff_ESI + 0x14) == 0) ||
         ((uint)(*(int *)(unaff_ESI + 0x18) - *(int *)(unaff_ESI + 0x14) >> 4) <= uVar5))
      goto LAB_000848ba;
      if (*(int *)(*(int *)(unaff_ESI + 0x14) + iVar8) == iVar3) break;
      uVar5 = uVar5 + 1;
      iVar8 = iVar8 + 0x10;
    }
    iVar8 = FUN_00077da0(5);
    if (iVar8 != 0) {
      FUN_00077eb0(iVar8,0);
      iVar3 = local_18[0];
    }
LAB_000848ba:
    uVar5 = 0;
    local_4 = 0xeac34649;
    iVar8 = 0;
    while( true ) {
      if ((*(int *)(unaff_ESI + 0x14) == 0) ||
         ((uint)(*(int *)(unaff_ESI + 0x18) - *(int *)(unaff_ESI + 0x14) >> 4) <= uVar5))
      goto LAB_00084906;
      if (*(int *)(*(int *)(unaff_ESI + 0x14) + iVar8) == iVar3) break;
      uVar5 = uVar5 + 1;
      iVar8 = iVar8 + 0x10;
    }
    iVar3 = FUN_00077da0(5);
    if (iVar3 != 0) {
      FUN_00077eb0(iVar3,0);
    }
LAB_00084906:
  } while (iVar4 < 0xc);
  iVar4 = 0;
  uVar5 = 0;
  while( true ) {
    if ((*(int *)(unaff_ESI + 0x14) == 0) ||
       ((uint)(*(int *)(unaff_ESI + 0x18) - *(int *)(unaff_ESI + 0x14) >> 4) <= uVar5))
    goto LAB_0008497a;
    if (*(int *)(*(int *)(unaff_ESI + 0x14) + iVar4) == DAT_00402028) break;
    uVar5 = uVar5 + 1;
    iVar4 = iVar4 + 0x10;
  }
  iVar4 = FUN_00077da0(2);
  if (iVar4 != 0) {
    FUN_00077eb0(iVar4,0);
  }
LAB_0008497a:
  iVar4 = 0;
  uVar6 = 0;
  uVar5 = DAT_00402020;
  while( true ) {
    if (*(int *)(unaff_ESI + 0x14) == 0) {
      return uVar5;
    }
    uVar5 = *(int *)(unaff_ESI + 0x18) - *(int *)(unaff_ESI + 0x14) >> 4;
    if (uVar5 <= uVar6) break;
    uVar5 = *(int *)(unaff_ESI + 0x14) + iVar4;
    if (*(int *)(*(int *)(unaff_ESI + 0x14) + iVar4) == DAT_0040201c) {
      iVar4 = FUN_00077da0(2);
      uVar5 = 0;
      if (iVar4 != 0) {
        uVar5 = FUN_00077eb0(iVar4,0);
      }
      return uVar5;
    }
    uVar6 = uVar6 + 1;
    iVar4 = iVar4 + 0x10;
  }
  return uVar5;
}
