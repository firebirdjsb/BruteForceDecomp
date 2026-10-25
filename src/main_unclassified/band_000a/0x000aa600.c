/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F3A6BD9AFFE6DCDF18833FC7BAD0AE319DA28EBB4336A53000D8688752218FC9
 * Entry: 0x000aa600, Ghidra index: 2033, label: FUN_000aa600
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040d760;
extern uint32_t DAT_0046d064;
extern uint32_t DAT_004a5b2c;
extern uint32_t DAT_004a5ba4;
void FUN_000aa600(void)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  wchar_t *pwVar10;
  int unaff_EDI;
  undefined1 *puVar11;
  undefined4 uStack_22c;
  undefined1 auStack_21c [4];
  uint local_218;
  undefined4 local_208;
  uint local_204;
  undefined1 auStack_200 [512];
  
  iVar9 = *(int *)(*(int *)(unaff_EDI + 0x34) + 0xe0);
  local_204 = 7;
  local_208 = 0;
  local_218 = local_218 & 0xffff0000;
  bVar4 = true;
  iVar7 = (**(code **)(**(int **)(unaff_EDI + 0x28) + 8))();
  if (*(int *)(iVar7 + 0x28) == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(iVar7 + 0x28) + -0x2c;
  }
  iVar7 = *(int *)(iVar7 + 0x34);
  if (*(short *)(iVar7 + 0x20) < 600) {
    cVar5 = (*(short *)(iVar7 + 0x22) < 400) + '\x02';
  }
  else {
    cVar5 = *(short *)(iVar7 + 0x22) < 400;
  }
  bVar2 = false;
  bVar3 = false;
  if ((cVar5 == '\0') || (cVar5 == '\x01')) {
    FUN_000ca2f0(unaff_EDI);
  }
  else {
    bVar3 = true;
    FUN_000ca2f0(unaff_EDI);
    bVar2 = true;
  }
  if (*(int *)(unaff_EDI + 0x78) != 0) {
    piVar1 = *(int **)(iVar9 + 0x5a4);
    iVar7 = (**(code **)(**(int **)(unaff_EDI + 0x28) + 8))();
    if (*(int *)(iVar7 + 0x28) == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(iVar7 + 0x28) + -0x2c;
    }
    uStack_22c = CONCAT31(0xc626f,*(undefined1 *)(iVar7 + 0xd4));
    cVar5 = (**(code **)(*piVar1 + 0x40))(*(undefined4 *)(unaff_EDI + 0x78),uStack_22c,auStack_21c);
    if (cVar5 == '\0') {
      cVar5 = *(char *)(*(int *)(unaff_EDI + 0x78) + 0x79);
      if ((cVar5 == '\x02') && (*(int *)(*(int *)(*(int *)(unaff_EDI + 0x78) + 0xc) + 4) == 0x14)) {
        cVar5 = FUN_000aad20();
        if (cVar5 == '\0') {
          if (bVar2) {
LAB_000aa9fc:
            *(byte *)(unaff_EDI + 0x13) = *(byte *)(unaff_EDI + 0x13) | 1;
          }
          else {
LAB_000aa9d1:
            FUN_000aa3b0();
LAB_000aa9d8:
            FUN_000853f0(auStack_21c);
            bVar4 = false;
          }
        }
        else {
          iVar9 = *(int *)(unaff_EDI + 0x78);
          iVar7 = *(int *)(iVar9 + 0x228);
          if ((*(int *)(iVar7 + 0x174) == DAT_0046d064) && (*(float *)(iVar7 + 0x14c) == 0.0)) {
            if (bVar2) {
              /* XBE 0x000AA76D: mov esi,0x0040D750, the guest format
               * string address. Never invent a host data symbol here;
               * Windows/Linux/Android guest-address mapping is deferred. */
              pwVar10 = (wchar_t *)(uintptr_t)UINT32_C(0x0040D750);
            }
            else {
LAB_000aa791:
              pwVar10 = (wchar_t *)FUN_001e97c0();
            }
          }
          else {
            if (!bVar2) goto LAB_000aa791;
            pwVar10 = (wchar_t *)&DAT_0040d760;
          }
          uVar8 = FUN_001e97c0(*(undefined4 *)(iVar9 + 0x1f8));
          FUN_002ea9a9(auStack_200,0x100,pwVar10,uVar8);
          FUN_000853f0(auStack_21c);
        }
      }
      else if (cVar5 == '\x01') {
        uVar8 = FUN_001e97c0();
        if (bVar3) {
          puVar11 = &DAT_004a5b2c;
        }
        else {
          puVar11 = (undefined1 *)FUN_001e97c0();
        }
        FUN_002ea9a9(auStack_200,0x100,uVar8,puVar11);
        uVar8 = FUN_002eaa70(auStack_200);
        FUN_000876a0(auStack_21c,uVar8);
      }
      else if (cVar5 == '\x06') {
        cVar5 = FUN_00121f10();
        if (cVar5 == '\0') {
          iVar9 = FUN_00121f40(iVar9,*(undefined4 *)(unaff_EDI + 0x78));
          if (iVar9 == 0) goto LAB_000aa9fc;
          if (!bVar2) {
            if ((*(int *)(iVar9 + 0x640) != 0) &&
               (*(int *)(iVar9 + 0x640) == *(int *)(unaff_EDI + 0x78))) {
              uVar8 = FUN_001e97c0();
              uVar8 = FUN_001e97c0(uVar8);
              FUN_002ea9a9(auStack_200,0x100,uVar8);
              goto LAB_000aa9d8;
            }
            cVar5 = FUN_00112800();
            if (cVar5 != '\0') goto LAB_000aa9d1;
            goto LAB_000aa8ef;
          }
          FUN_001e97c0();
          FUN_000853f0(auStack_21c);
          bVar4 = false;
        }
        else if (bVar2) {
          FUN_001e97c0();
          FUN_000853f0(auStack_21c);
        }
        else {
LAB_000aa8ef:
          FUN_000aa3b0();
          FUN_000853f0(auStack_21c);
        }
      }
    }
    else {
      FUN_000ca210();
    }
    if ((*(byte *)(unaff_EDI + 0x13) & 1) == 0) {
      if (bVar4) {
        (**(code **)(**(int **)(unaff_EDI + 0x28) + 8))();
        FUN_00126850();
        FUN_000ca290(unaff_EDI);
      }
      else {
        FUN_000ca000(unaff_EDI,&DAT_004a5ba4,0);
      }
      FUN_000ca210();
    }
    goto LAB_000aacbc;
  }
  cVar5 = FUN_000aae20();
  if (cVar5 == '\0') {
    cVar5 = FUN_000aad50();
    if (cVar5 == '\0') goto LAB_000aacbc;
    piVar1 = *(int **)(iVar9 + 0x2e8);
    iVar7 = 0;
    cVar5 = (**(code **)(*piVar1 + 0x20))();
    if ((cVar5 == '\0') || (piVar1[8] == 0)) {
      iVar9 = *(int *)(iVar9 + 0x2e8);
      cVar5 = (**(code **)(*(int *)(iVar9 + 0x44) + 0x20))();
      if ((cVar5 != '\0') && (*(int *)(iVar9 + 100) != 0)) {
        iVar9 = FUN_0014d450();
        iVar7 = *(int *)(*(int *)(iVar9 + 0xc) + 0x120);
      }
    }
    else {
      piVar1 = *(int **)(iVar9 + 0x2e8);
      cVar5 = (**(code **)(*piVar1 + 0x20))();
      if (cVar5 == '\0') {
        /* XBE 0x000AABE2..0x000AABED: xor ebp,ebp;
         * mov ecx,[ebp+0xc]; mov ebx,[ecx+0x120].
         * Preserve both original guest reads, even on this faulting path. */
        uint32_t guest_word_at_0c =
            *(const uint32_t *)(uintptr_t)UINT32_C(0x0000000C);
        iVar7 = *(const int *)(uintptr_t)
            (guest_word_at_0c + UINT32_C(0x120));
      }
      else {
        iVar7 = *(int *)(*(int *)(piVar1[8] + 0xc) + 0x120);
      }
    }
    if (iVar7 != DAT_0046d064) {
      (**(code **)(**(int **)(unaff_EDI + 0x28) + 8))();
      FUN_00126850();
      FUN_000ca290(unaff_EDI);
      *(byte *)(unaff_EDI + 0x13) = *(byte *)(unaff_EDI + 0x13) & 0xfe;
      if (bVar3) {
        FUN_000bb9d0(*(undefined4 *)(unaff_EDI + 0x6c));
      }
      else {
        uVar8 = FUN_001e97c0();
        uVar8 = FUN_001e97c0(uVar8);
        FUN_002ea9a9(auStack_200,0x100,uVar8);
        FUN_000ca210();
      }
      goto LAB_000aacbc;
    }
LAB_000aacb4:
    bVar6 = *(byte *)(unaff_EDI + 0x13) | 1;
  }
  else {
    if (*(int *)(iVar9 + 0x640) == 0) goto LAB_000aacb4;
    if (bVar2) {
      uVar8 = FUN_001e97c0();
      uVar8 = FUN_002eaa70(uVar8);
      FUN_000876a0(auStack_21c,uVar8);
      (**(code **)(**(int **)(unaff_EDI + 0x28) + 8))();
      FUN_00126850();
      FUN_000ca290(unaff_EDI);
    }
    else {
      (**(code **)(**(int **)(unaff_EDI + 0x28) + 8))();
      FUN_00126850();
      FUN_000ca290(unaff_EDI);
      uVar8 = FUN_001e97c0();
      uVar8 = FUN_001e97c0(uVar8);
      FUN_002ea9a9(auStack_200,0x100,uVar8);
      uVar8 = FUN_002eaa70(auStack_200);
      FUN_000876a0(auStack_21c,uVar8);
    }
    FUN_000ca210();
    bVar6 = *(byte *)(unaff_EDI + 0x13) & 0xfe;
  }
  *(byte *)(unaff_EDI + 0x13) = bVar6;
LAB_000aacbc:
  if (7 < local_204) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(local_218);
  }
  return;
}
