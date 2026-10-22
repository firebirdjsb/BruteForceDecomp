/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B80E5D9C4A56819D76FAEA05877DBA549D28D1569AD6D62059F3F3C49D8BAA10
 * Entry: 0x003852fa, Ghidra index: 13668, label: FUN_003852fa
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a8fc0;
bool FUN_003852fa(void)

{
  uint *puVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int in_ECX;
  uint in_EDX;
  int iVar8;
  uint local_10;
  int local_8;
  
  local_8 = 0;
  iVar3 = *(int *)(in_ECX + 0x42c);
  do {
    if (iVar3 == 0) {
      *(int *)(in_ECX + 0x42c) = local_8;
      return local_8 != 0;
    }
    iVar3 = *(int *)(in_ECX + 0x42c);
    *(undefined4 *)(in_ECX + 0x42c) = *(undefined4 *)(iVar3 + 0x24);
    iVar4 = *(int *)(iVar3 + 0x10);
    if (in_EDX < *(uint *)(iVar4 + 0x1c)) {
LAB_0038533a:
      *(int *)(iVar3 + 0x24) = local_8;
      local_8 = iVar3;
    }
    else {
      if ((*(byte *)(iVar4 + 0x10) & 0x40) != 0) {
        *(uint *)(iVar4 + 0x1c) = in_EDX + 1;
        *(byte *)(iVar4 + 0x10) = *(byte *)(iVar4 + 0x10) & 0xbf;
        goto LAB_0038533a;
      }
      local_10 = 0;
      uVar6 = *(uint *)(iVar4 + 8) & 0xfffffff0;
      iVar8 = DAT_004a8fc0 + uVar6;
      if (iVar3 != *(int *)(iVar8 + 0x18)) {
        uVar5 = uVar6;
        do {
          uVar7 = uVar5;
          if (uVar7 == *(uint *)(iVar4 + 4)) break;
          puVar1 = (uint *)(iVar8 + 8);
          iVar8 = DAT_004a8fc0 + *puVar1;
          uVar5 = *puVar1;
          local_10 = uVar7;
        } while (iVar3 != *(int *)(iVar8 + 0x18));
      }
      *(uint *)(iVar4 + 8) =
           (*(uint *)(iVar8 + 8) ^ *(uint *)(iVar4 + 8)) & 0xf ^ *(uint *)(iVar8 + 8);
      *(byte *)(iVar8 + 3) = *(byte *)(iVar8 + 3) | 0xf0;
      FUN_0038524e();
      if (local_10 != 0) {
        *(uint *)(DAT_004a8fc0 + 8 + local_10) = *(uint *)(iVar4 + 8) & 0xfffffff0;
        *(uint *)(iVar4 + 8) = *(uint *)(iVar4 + 8) & 0xf ^ uVar6;
      }
      pcVar2 = (char *)(iVar4 + 0x20);
      *pcVar2 = *pcVar2 + -1;
      if (*pcVar2 == '\0') {
        *(byte *)(iVar4 + 0x10) = *(byte *)(iVar4 + 0x10) & 0xdf;
        *(byte *)(iVar4 + 1) = *(byte *)(iVar4 + 1) & 0xbf;
      }
    }
    iVar3 = *(int *)(in_ECX + 0x42c);
  } while( true );
}
