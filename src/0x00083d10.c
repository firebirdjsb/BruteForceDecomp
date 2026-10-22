/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 49C7DD77247D9EEE0A114F8203219D8FEA63305D0A54F3802A6FBF708BF8C5BC
 * Entry: 0x00083d10, Ghidra index: 1539, label: FUN_00083d10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003bc150;
extern uint32_t DAT_003bc550;
extern uint32_t DAT_00401f68;
extern char s_character__d_0040dbe8[];
undefined4 FUN_00083d10(int *param_1,uint param_2,uint *param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  char cStack_20;
  char acStack_1f [31];
  
  iVar5 = (**(code **)(*param_1 + 0x210))();
  iVar4 = DAT_00401f68;
  if (iVar5 == 0) {
    return 0;
  }
  iVar9 = 0;
  do {
    iVar9 = iVar9 + 1;
    pcVar10 = &cStack_20;
    for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
      pcVar10[0] = '\0';
      pcVar10[1] = '\0';
      pcVar10[2] = '\0';
      pcVar10[3] = '\0';
      pcVar10 = pcVar10 + 4;
    }
    FUN_002eaa19(&cStack_20,0x20,s_character__d_0040dbe8,iVar9);
    uVar6 = 0xffffffff;
    pcVar10 = &cStack_20;
    cVar2 = cStack_20;
    while (cVar2 != '\0') {
      uVar6 = uVar6 >> 8 ^
              *(uint *)(&DAT_003bc150 + (((byte)(&DAT_003bc550)[cVar2] ^ uVar6) & 0xff) * 4);
      pcVar1 = pcVar10 + 1;
      pcVar10 = pcVar10 + 1;
      cVar2 = *pcVar1;
    }
    uVar8 = 0;
    iVar7 = 0;
    while( true ) {
      if ((*(int *)(iVar5 + 0x14) == 0) ||
         ((uint)(*(int *)(iVar5 + 0x18) - *(int *)(iVar5 + 0x14) >> 4) <= uVar8)) goto LAB_00083e3c;
      if (*(int *)(*(int *)(iVar5 + 0x14) + iVar7) == iVar4) break;
      uVar8 = uVar8 + 1;
      iVar7 = iVar7 + 0x10;
    }
    iVar7 = FUN_00077da0(3);
    if (iVar7 != 0) {
      iVar3 = *(int *)(iVar7 + 0xc);
      if (iVar3 == 1) {
        uVar8 = (uint)*(float *)(iVar7 + 4);
      }
      else if (iVar3 == 2) {
        uVar8 = *(uint *)(iVar7 + 4);
      }
      else if (iVar3 == 3) {
        uVar8 = (uint)*(byte *)(iVar7 + 4);
      }
      else {
        uVar8 = 0;
      }
      if (uVar8 == param_2) {
        *param_3 = ~uVar6;
        return 1;
      }
    }
LAB_00083e3c:
    if (3 < iVar9) {
      return 0;
    }
  } while( true );
}
