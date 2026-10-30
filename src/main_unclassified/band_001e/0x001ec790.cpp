/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9D5C802F8D6C8EC2C666B33D09021CC68D672833D9B7BA6317FE1F65382B1394
 * Entry: 0x001ec790, Ghidra index: 6915, label: FUN_001ec790
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004698d0;
extern uint32_t DAT_004a5b68;
void FUN_001ec790(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBX;
  uint uVar5;
  int *piVar6;
  uint *puVar7;
  uint local_1c [4];
  uint local_c;
  uint local_8;
  uint local_4;
  
  iVar3 = DAT_004698d0 + 1;
  puVar7 = local_1c;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  uVar5 = 0;
  piVar6 = (int *)(unaff_EBX + 0x704);
  iVar2 = 0x20;
  do {
    if ((((*(char *)(unaff_EBX + 0x15c) != '\0') && (iVar1 = piVar6[-0x166], iVar1 != -1)) &&
        (iVar3 <= iVar1)) && ((iVar1 = iVar1 - iVar3, -1 < iVar1 && (iVar1 < 0x20)))) {
      uVar5 = uVar5 | 1 << ((byte)iVar1 & 0x1f);
    }
    if (((*(char *)(unaff_EBX + 0x6f4) != '\0') && (iVar1 = *piVar6, iVar1 != -1)) &&
       ((iVar3 <= iVar1 && ((iVar1 = iVar1 - iVar3, -1 < iVar1 && (iVar1 < 0x20)))))) {
      local_1c[0] = local_1c[0] | 1 << ((byte)iVar1 & 0x1f);
    }
    if ((((*(char *)(unaff_EBX + 0xc8c) != '\0') && (iVar1 = piVar6[0x166], iVar1 != -1)) &&
        (iVar3 <= iVar1)) && ((iVar1 = iVar1 - iVar3, -1 < iVar1 && (iVar1 < 0x20)))) {
      local_1c[1] = local_1c[1] | 1 << ((byte)iVar1 & 0x1f);
    }
    if (((*(char *)(unaff_EBX + 0x1224) != '\0') && (iVar1 = piVar6[0x2cc], iVar1 != -1)) &&
       ((iVar3 <= iVar1 && ((iVar1 = iVar1 - iVar3, -1 < iVar1 && (iVar1 < 0x20)))))) {
      local_1c[2] = local_1c[2] | 1 << ((byte)iVar1 & 0x1f);
    }
    if ((((*(char *)(unaff_EBX + 0x17bc) != '\0') && (iVar1 = piVar6[0x432], iVar1 != -1)) &&
        (iVar3 <= iVar1)) && ((iVar1 = iVar1 - iVar3, -1 < iVar1 && (iVar1 < 0x20)))) {
      local_1c[3] = local_1c[3] | 1 << ((byte)iVar1 & 0x1f);
    }
    if (((*(char *)(unaff_EBX + 0x1d54) != '\0') && (iVar1 = piVar6[0x598], iVar1 != -1)) &&
       ((iVar3 <= iVar1 && ((iVar1 = iVar1 - iVar3, -1 < iVar1 && (iVar1 < 0x20)))))) {
      local_c = local_c | 1 << ((byte)iVar1 & 0x1f);
    }
    if ((((*(char *)(unaff_EBX + 0x22ec) != '\0') && (iVar1 = piVar6[0x6fe], iVar1 != -1)) &&
        (iVar3 <= iVar1)) && ((iVar1 = iVar1 - iVar3, -1 < iVar1 && (iVar1 < 0x20)))) {
      local_8 = local_8 | 1 << ((byte)iVar1 & 0x1f);
    }
    if (((*(char *)(unaff_EBX + 0x2884) != '\0') && (iVar1 = piVar6[0x864], iVar1 != -1)) &&
       ((iVar3 <= iVar1 && ((iVar1 = iVar1 - iVar3, -1 < iVar1 && (iVar1 < 0x20)))))) {
      local_4 = local_4 | 1 << ((byte)iVar1 & 0x1f);
    }
    piVar6 = piVar6 + 10;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  uVar4 = 0xffffffff;
  if (*(char *)(unaff_EBX + 0x15c) != '\0') {
    uVar4 = uVar5;
  }
  if (*(char *)(unaff_EBX + 0x6f4) != '\0') {
    uVar4 = uVar4 & local_1c[0];
  }
  if (*(char *)(unaff_EBX + 0xc8c) != '\0') {
    uVar4 = uVar4 & local_1c[1];
  }
  if (*(char *)(unaff_EBX + 0x1224) != '\0') {
    uVar4 = uVar4 & local_1c[2];
  }
  if (*(char *)(unaff_EBX + 0x17bc) != '\0') {
    uVar4 = uVar4 & local_1c[3];
  }
  if (*(char *)(unaff_EBX + 0x1d54) != '\0') {
    uVar4 = uVar4 & local_c;
  }
  if (*(char *)(unaff_EBX + 0x22ec) != '\0') {
    uVar4 = uVar4 & local_8;
  }
  if (*(char *)(unaff_EBX + 0x2884) != '\0') {
    uVar4 = uVar4 & local_4;
  }
  iVar2 = 0;
  do {
    if ((uVar4 & 1 << ((byte)iVar2 & 0x1f)) == 0) break;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x20);
  if ((iVar2 == 0) && (DAT_004a5b68 != DAT_004698d0)) {
    DAT_004a5b68 = DAT_004698d0;
  }
  return;
}
