/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0FDBE6FD4DFAD0AD2B74FBC9F16D67C66B05C318DC3AD54E1A97307780C0A388
 * Entry: 0x0007b100, Ghidra index: 1464, label: FUN_0007b100
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400538;
extern uint32_t DAT_0040054c;
extern uint32_t DAT_0040dd04;
extern uint32_t DAT_0040dd10;
extern uint32_t DAT_0040dd14;
extern uint32_t DAT_0040dd18;
void FUN_0007b100(int param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  char *pcVar12;
  undefined4 *puVar13;
  int *local_10c;
  undefined1 local_108 [4];
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  
  local_104 = DAT_0040dd10;
  local_100 = DAT_0040dd14;
  local_fc = DAT_0040dd18;
  pcVar3 = DAT_00400538;
  pcVar12 = DAT_00400538;
  if (DAT_0040054c < 0x10) {
    pcVar3 = (char *)&DAT_00400538;
    pcVar12 = pcVar3;
  }
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  uVar4 = (int)pcVar3 - (int)pcVar12;
  pcVar3 = local_108 + 3;
  do {
    pcVar1 = pcVar3 + 1;
    pcVar3 = pcVar3 + 1;
  } while (*pcVar1 != '\0');
  for (uVar8 = uVar4 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar12;
    pcVar12 = pcVar12 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar3 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    pcVar3 = pcVar3 + 1;
  }
  iVar5 = FUN_002ea01d(0xa0);
  if (iVar5 == 0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)FUN_0007b3c0();
  }
  local_10c = piVar6;
  cVar2 = FUN_000863b0(piVar6);
  if (cVar2 == '\0') {
    if (piVar6 != (int *)0x0) {
      FUN_0007b430();
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(piVar6);
    }
  }
  else {
    piVar6[0x27] = 0;
    iVar5 = *(int *)(param_1 + 0x574);
    iVar7 = FUN_000ff730(param_1 + 0x570,iVar5,*(undefined4 *)(iVar5 + 4),&local_10c);
    FUN_000b2a50();
    *(int *)(iVar5 + 4) = iVar7;
    **(int **)(iVar7 + 4) = iVar7;
  }
  local_10c = (int *)0x0;
  if (*(undefined4 **)(param_1 + 0x654) != (undefined4 *)0x0) {
    local_10c = (int *)**(undefined4 **)(param_1 + 0x654);
  }
  if (local_10c != *(int **)(param_1 + 0x654)) {
    do {
      piVar6 = local_10c;
      piVar10 = local_10c + 2;
      if ((uint)local_10c[0x10] < 0x10) {
        piVar9 = local_10c + 0xb;
      }
      else {
        piVar9 = (int *)local_10c[0xb];
      }
      pcVar3 = (char *)&local_104;
      do {
        iVar5 = *piVar9;
        piVar9 = (int *)((int)piVar9 + 1);
        *pcVar3 = (char)iVar5;
        pcVar3 = pcVar3 + 1;
      } while ((char)iVar5 != '\0');
      pcVar3 = &DAT_0040dd04;
      do {
        pcVar12 = pcVar3;
        pcVar3 = pcVar12 + 1;
      } while (*pcVar12 != '\0');
      puVar13 = (undefined4 *)(local_108 + 3);
      do {
        pcVar3 = (char *)((int)puVar13 + 1);
        puVar13 = (undefined4 *)((int)puVar13 + 1);
      } while (*pcVar3 != '\0');
      puVar11 = (undefined4 *)&DAT_0040dd04;
      for (uVar4 = (uint)(pcVar12 + -0x40dd03) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar13 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar13 = puVar13 + 1;
      }
      for (uVar4 = (uint)(pcVar12 + -0x40dd03) & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar13 = *(undefined1 *)puVar11;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
        puVar13 = (undefined4 *)((int)puVar13 + 1);
      }
      pcVar3 = DAT_00400538;
      pcVar12 = DAT_00400538;
      if (DAT_0040054c < 0x10) {
        pcVar3 = (char *)&DAT_00400538;
        pcVar12 = pcVar3;
      }
      do {
        cVar2 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      uVar4 = (int)pcVar3 - (int)pcVar12;
      pcVar3 = local_108 + 3;
      do {
        pcVar1 = pcVar3 + 1;
        pcVar3 = pcVar3 + 1;
      } while (*pcVar1 != '\0');
      for (uVar8 = uVar4 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar3 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar3 = pcVar3 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar3 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar3 = pcVar3 + 1;
      }
      iVar5 = FUN_002ea01d(0xa0);
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0007b3c0();
      }
      local_108 = (undefined1  [4])iVar5;
      cVar2 = FUN_000863b0(iVar5);
      if (cVar2 == '\0') {
        if (iVar5 != 0) {
          FUN_0007b430();
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(iVar5);
        }
      }
      else {
        *(int **)(iVar5 + 0x9c) = piVar10;
        iVar5 = *(int *)(param_1 + 0x574);
        iVar7 = FUN_000ff730(param_1 + 0x570,iVar5,*(undefined4 *)(iVar5 + 4),local_108);
        FUN_000b2a50();
        *(int *)(iVar5 + 4) = iVar7;
        **(int **)(iVar7 + 4) = iVar7;
        if ((uint)piVar6[0x10] < 0x10) {
          FUN_001e95e0(piVar6 + 0xb);
        }
        else {
          FUN_001e95e0(piVar6[0xb]);
        }
      }
      local_10c = (int *)*local_10c;
    } while (local_10c != (int *)*(int *)(param_1 + 0x654));
  }
  if (*(undefined4 **)(param_1 + 0x574) == (undefined4 *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)**(undefined4 **)(param_1 + 0x574);
  }
  if (piVar6 != *(int **)(param_1 + 0x574)) {
    do {
      puVar13 = (undefined4 *)piVar6[2];
      iVar5 = puVar13[0x24];
      if (iVar5 != puVar13[0x25]) {
        do {
          *(undefined4 *)(iVar5 + 0x68) = *puVar13;
          iVar5 = iVar5 + 0x6c;
        } while (iVar5 != puVar13[0x25]);
      }
      piVar6 = (int *)*piVar6;
    } while (piVar6 != (int *)*(int *)(param_1 + 0x574));
  }
  return;
}
