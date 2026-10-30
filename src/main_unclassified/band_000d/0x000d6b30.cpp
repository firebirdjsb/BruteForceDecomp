/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 29F7CD7DD762EE049F13407E9477D24A4144ABAD0AB1B13F8EA19A5FDFB7B740
 * Entry: 0x000d6b30, Ghidra index: 2668, label: FUN_000d6b30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
extern uint32_t *DAT_00443308;
extern uint32_t DAT_00469900;
extern uint32_t *DAT_00469940;
extern uint32_t DAT_00469948;
extern uint32_t DAT_00469954;
extern uint32_t DAT_00469ab0;
extern uint32_t DAT_00469ab4;
extern uint32_t DAT_00469b58;
extern uint32_t DAT_0046cfa0;
extern uint32_t DAT_0046d064;
extern uint32_t DAT_004a5900;
extern uint32_t PTR_FUN_0039fa74;
extern char s_unload_0040d600[];
void FUN_000d6b30(undefined **param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined **ppuVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  undefined *puVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  /* 0x000D7311 original MOV DWORD PTR [ESP+0x1C],0x035DE755
   * rewrites the caller's incoming 32-bit guest argument word after
   * its address is taken at 0x000D730B. Model the 4-byte call key,
   * NOT a manufactured host pointer. Shared incoming guest-stack
   * aliasing and the indirect callee ABI remain ABI_UNVERIFIED. */
  uint32_t guest_callback_key;
  
  ppuVar3 = param_1;
  FUN_001e9550();
  iVar5 = DAT_00469b58;
  *(undefined4 *)(DAT_00469b58 + 0xf8) = 0;
  *(undefined4 *)(iVar5 + 0xfc) = 0;
  *(undefined1 *)(iVar5 + 0xf0) = 0;
  *(undefined4 *)(iVar5 + 0xf4) = 0;
  *(undefined4 *)(iVar5 + 0x100) = 0;
  *(undefined4 *)(iVar5 + 0x104) = 0x3f800000;
  *(undefined4 *)(iVar5 + 0x108) = 0;
  iVar5 = (**(code **)(**(int **)(iVar5 + 8) + 0x210))();
  *(undefined4 *)(iVar5 + 0x20) = 0;
  *(undefined4 *)(iVar5 + 0x24) = 0;
  FUN_00062280();
  FUN_00062280();
  FUN_00062280();
  FUN_00062280();
  D3D8LTCG__D3DDevice_SetStreamSource_4(0);
  FUN_002386d0();
  puVar1 = (undefined4 *)ppuVar3[0x1a];
  if (puVar1 == (undefined4 *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *puVar1;
  }
  FUN_000e1150(ppuVar3 + 0x19,&param_1,uVar9,puVar1);
  if (ppuVar3[0x296] != (undefined *)0x0) {
    FUN_00229180();
  }
  if (ppuVar3[0x7d] != (undefined *)0x0) {
    FUN_000cda30(ppuVar3[0x7d]);
  }
  if ((int *)ppuVar3[0x2fb] != (int *)0x0) {
    (**(code **)(*(int *)ppuVar3[0x2fb] + 4))();
  }
  FUN_001e76f0(DAT_00469948);
  puVar7 = (undefined *)0x0;
  if ((int *)ppuVar3[10] != (int *)0x0) {
    puVar7 = *(undefined **)ppuVar3[10];
  }
  if (puVar7 != ppuVar3[10]) {
    do {
      if ((*(int *)(puVar7 + 8) == 0) || (cVar4 = FUN_000db3e0(*(int *)(puVar7 + 8)), cVar4 == '\0')
         ) {
        piVar8 = (int *)ppuVar3[10];
        if (piVar8 == (int *)0x0) {
          piVar6 = (int *)0x0;
        }
        else {
          piVar6 = (int *)*piVar8;
        }
        if (piVar6 != piVar8) {
          *(int *)piVar6[1] = *piVar6;
          *(int *)(*piVar6 + 4) = piVar6[1];
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(piVar6);
        }
      }
      puVar7 = (undefined *)0x0;
      if ((int *)ppuVar3[10] != (int *)0x0) {
        puVar7 = *(undefined **)ppuVar3[10];
      }
    } while (puVar7 != ppuVar3[10]);
  }
  puVar1 = (undefined4 *)ppuVar3[10];
  if (puVar1 == (undefined4 *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *puVar1;
  }
  FUN_001298b0(&param_1,uVar9,puVar1);
  if ((int *)ppuVar3[0xd] == (int *)0x0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = *(undefined **)ppuVar3[0xd];
  }
  if (puVar7 != ppuVar3[0xd]) {
    do {
      if (*(int *)(puVar7 + 8) != 0) {
        FUN_000db3e0(*(int *)(puVar7 + 8));
      }
      piVar8 = (int *)ppuVar3[0xd];
      if (piVar8 == (int *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = (int *)*piVar8;
      }
      if (piVar6 != piVar8) {
        *(int *)piVar6[1] = *piVar6;
        *(int *)(*piVar6 + 4) = piVar6[1];
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(piVar6);
      }
      if ((int *)ppuVar3[0xd] == (int *)0x0) {
        puVar7 = (undefined *)0x0;
      }
      else {
        puVar7 = *(undefined **)ppuVar3[0xd];
      }
    } while (puVar7 != ppuVar3[0xd]);
  }
  puVar1 = (undefined4 *)ppuVar3[0xd];
  if (puVar1 == (undefined4 *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *puVar1;
  }
  FUN_001298b0(&param_1,uVar9,puVar1);
  if (ppuVar3[0x41] != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(ppuVar3[0x41]);
  }
  ppuVar3[0x41] = (undefined *)0x0;
  ppuVar3[0x42] = (undefined *)0x0;
  ppuVar3[0x43] = (undefined *)0x0;
  puVar1 = (undefined4 *)ppuVar3[0x26];
  if (puVar1 == (undefined4 *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *puVar1;
  }
  FUN_001298b0(&param_1,uVar9,puVar1);
  puVar1 = (undefined4 *)ppuVar3[0x29];
  if (puVar1 == (undefined4 *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *puVar1;
  }
  FUN_001298b0(&param_1,uVar9,puVar1);
  FUN_000de4c0(ppuVar3);
  if ((int *)ppuVar3[0x3e] == (int *)0x0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = *(undefined **)ppuVar3[0x3e];
  }
  if (puVar7 != ppuVar3[0x3e]) {
    do {
      FUN_000db580(ppuVar3,*(undefined4 *)(puVar7 + 8));
      if ((int *)ppuVar3[0x3e] == (int *)0x0) {
        puVar7 = (undefined *)0x0;
      }
      else {
        puVar7 = *(undefined **)ppuVar3[0x3e];
      }
    } while (puVar7 != ppuVar3[0x3e]);
  }
  puVar1 = (undefined4 *)ppuVar3[0x3e];
  if (puVar1 == (undefined4 *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *puVar1;
  }
  FUN_001298b0(&param_1,uVar9,puVar1);
  puVar1 = (undefined4 *)ppuVar3[0x294];
  if (puVar1 == (undefined4 *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *puVar1;
  }
  FUN_000e1150(ppuVar3 + 0x293,&param_1,uVar9,puVar1);
  puVar1 = (undefined4 *)ppuVar3[0x2db];
  if (puVar1 == (undefined4 *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *puVar1;
  }
  FUN_000e1150(ppuVar3 + 0x2da,&param_1,uVar9,puVar1);
  if ((undefined4 *)ppuVar3[0x7b] == (undefined4 *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = *(int **)ppuVar3[0x7b];
  }
  if (piVar8 != (int *)ppuVar3[0x7b]) {
    do {
      if ((undefined4 *)piVar8[3] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar8[3])(1);
      }
      piVar8 = (int *)*piVar8;
    } while (piVar8 != (int *)ppuVar3[0x7b]);
  }
  puVar1 = (undefined4 *)ppuVar3[0x7b];
  if (puVar1 == (undefined4 *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *puVar1;
  }
  FUN_000e1150(ppuVar3 + 0x7a,&param_1,uVar9,puVar1);
  if ((undefined4 *)ppuVar3[0x45] == (undefined4 *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = *(int **)ppuVar3[0x45];
  }
  if (piVar8 != (int *)ppuVar3[0x45]) {
    do {
      if ((undefined4 *)piVar8[3] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar8[3])(1);
      }
      piVar8 = (int *)*piVar8;
    } while (piVar8 != (int *)ppuVar3[0x45]);
  }
  puVar1 = (undefined4 *)ppuVar3[0x45];
  if (puVar1 == (undefined4 *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *puVar1;
  }
  FUN_000e1150(ppuVar3 + 0x44,&param_1,uVar9,puVar1);
  if ((undefined4 *)ppuVar3[0x72] == (undefined4 *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = *(int **)ppuVar3[0x72];
  }
  if (piVar8 != (int *)ppuVar3[0x72]) {
    do {
      if ((undefined4 *)piVar8[3] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar8[3])(1);
      }
      piVar8 = (int *)*piVar8;
    } while (piVar8 != (int *)ppuVar3[0x72]);
  }
  puVar1 = (undefined4 *)ppuVar3[0x72];
  if (puVar1 == (undefined4 *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *puVar1;
  }
  FUN_000e1150(ppuVar3 + 0x71,&param_1,uVar9,puVar1);
  if ((undefined4 *)ppuVar3[0x75] == (undefined4 *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = *(int **)ppuVar3[0x75];
  }
  if (piVar8 != (int *)ppuVar3[0x75]) {
    do {
      if ((undefined4 *)piVar8[3] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar8[3])(1);
      }
      piVar8 = (int *)*piVar8;
    } while (piVar8 != (int *)ppuVar3[0x75]);
  }
  puVar1 = (undefined4 *)ppuVar3[0x75];
  if (puVar1 == (undefined4 *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *puVar1;
  }
  FUN_000e1150(ppuVar3 + 0x74,&param_1,uVar9,puVar1);
  if ((undefined4 *)ppuVar3[0x4b] == (undefined4 *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = *(int **)ppuVar3[0x4b];
  }
  if (piVar8 != (int *)ppuVar3[0x4b]) {
    do {
      if ((undefined4 *)piVar8[3] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar8[3])(1);
      }
      piVar8 = (int *)*piVar8;
    } while (piVar8 != (int *)ppuVar3[0x4b]);
  }
  puVar1 = (undefined4 *)ppuVar3[0x4b];
  if (puVar1 == (undefined4 *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *puVar1;
  }
  FUN_000e1150(ppuVar3 + 0x4a,&param_1,uVar9,puVar1);
  puVar1 = (undefined4 *)ppuVar3[0x48];
  if (puVar1 == (undefined4 *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *puVar1;
  }
  FUN_000e1150(ppuVar3 + 0x47,&param_1,uVar9,puVar1);
  puVar1 = (undefined4 *)ppuVar3[0x4e];
  if (puVar1 == (undefined4 *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *puVar1;
  }
  FUN_000e1150(ppuVar3 + 0x4d,&param_1,uVar9,puVar1);
  puVar1 = (undefined4 *)ppuVar3[0x51];
  if (puVar1 == (undefined4 *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *puVar1;
  }
  FUN_000e1150(ppuVar3 + 0x50,&param_1,uVar9,puVar1);
  puVar1 = (undefined4 *)ppuVar3[0x54];
  if (puVar1 == (undefined4 *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *puVar1;
  }
  FUN_000e1150(ppuVar3 + 0x53,&param_1,uVar9,puVar1);
  puVar1 = (undefined4 *)ppuVar3[0x57];
  if (puVar1 == (undefined4 *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *puVar1;
  }
  FUN_000e1150(ppuVar3 + 0x56,&param_1,uVar9,puVar1);
  puVar1 = (undefined4 *)ppuVar3[0x4b];
  if (puVar1 == (undefined4 *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *puVar1;
  }
  FUN_000e1150(ppuVar3 + 0x4a,&param_1,uVar9,puVar1);
  puVar1 = (undefined4 *)ppuVar3[0x5a];
  if (puVar1 == (undefined4 *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *puVar1;
  }
  FUN_000e1150(ppuVar3 + 0x59,&param_1,uVar9,puVar1);
  puVar1 = (undefined4 *)ppuVar3[0x5d];
  if (puVar1 == (undefined4 *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *puVar1;
  }
  FUN_000e1150(ppuVar3 + 0x5c,&param_1,uVar9,puVar1);
  puVar1 = (undefined4 *)ppuVar3[0x75];
  if (puVar1 == (undefined4 *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *puVar1;
  }
  FUN_000e1150(ppuVar3 + 0x74,&param_1,uVar9,puVar1);
  puVar1 = (undefined4 *)ppuVar3[0x60];
  if (puVar1 == (undefined4 *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *puVar1;
  }
  FUN_000e1150(ppuVar3 + 0x5f,&param_1,uVar9,puVar1);
  puVar1 = (undefined4 *)ppuVar3[99];
  if (puVar1 == (undefined4 *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *puVar1;
  }
  FUN_000e1150(ppuVar3 + 0x62,&param_1,uVar9,puVar1);
  puVar1 = (undefined4 *)ppuVar3[0x6f];
  if (puVar1 == (undefined4 *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *puVar1;
  }
  FUN_000e1150(ppuVar3 + 0x6e,&param_1,uVar9,puVar1);
  puVar1 = (undefined4 *)ppuVar3[0x6c];
  if (puVar1 == (undefined4 *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *puVar1;
  }
  FUN_000e1150(ppuVar3 + 0x6b,&param_1,uVar9,puVar1);
  puVar1 = (undefined4 *)ppuVar3[0x78];
  if (puVar1 == (undefined4 *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *puVar1;
  }
  FUN_000e1150(ppuVar3 + 0x77,&param_1,uVar9,puVar1);
  puVar1 = (undefined4 *)ppuVar3[10];
  if (puVar1 == (undefined4 *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *puVar1;
  }
  FUN_001298b0(&param_1,uVar9,puVar1);
  puVar1 = (undefined4 *)ppuVar3[0x85];
  if (puVar1 == (undefined4 *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *puVar1;
  }
  FUN_001298b0(&param_1,uVar9,puVar1);
  puVar1 = (undefined4 *)ppuVar3[0x88];
  if (puVar1 == (undefined4 *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *puVar1;
  }
  FUN_001298b0(&param_1,uVar9,puVar1);
  puVar1 = (undefined4 *)ppuVar3[0x8b];
  if (puVar1 == (undefined4 *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *puVar1;
  }
  FUN_001298b0(&param_1,uVar9,puVar1);
  if (ppuVar3[0x29c] != (undefined *)0x0) {
    for (iVar5 = *(int *)(ppuVar3[0x29c] + 0x104); iVar5 != *(int *)(ppuVar3[0x29c] + 0x108);
        iVar5 = iVar5 + 0x44) {
      puVar1 = *(undefined4 **)(iVar5 + 0x3c);
      if (puVar1 != (undefined4 *)0x0) {
        piVar8 = (int *)puVar1[0x1f];
        (**(code **)*puVar1)(1);
        *(undefined4 *)(iVar5 + 0x3c) = 0;
        if (piVar8 != (int *)0x0) {
          (**(code **)(*piVar8 + 0x24))(1);
        }
      }
    }
  }
  puVar1 = (undefined4 *)ppuVar3[0x20];
  if (puVar1 == (undefined4 *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *puVar1;
  }
  FUN_000e1150(ppuVar3 + 0x1f,&param_1,uVar9,puVar1);
  puVar1 = (undefined4 *)ppuVar3[0x1d];
  if (puVar1 == (undefined4 *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *puVar1;
  }
  FUN_000e1150(ppuVar3 + 0x1c,&param_1,uVar9,puVar1);
  if (ppuVar3[0x83] != (undefined *)0x0) {
    FUN_001743c0();
  }
  puVar7 = ppuVar3[0x2dd];
  if ((puVar7 != (undefined *)0x0) && (piVar8 = *(int **)(puVar7 + 0x5c), piVar8 != (int *)0x0)) {
    (**(code **)(*piVar8 + 8))(piVar8);
    guest_callback_key = UINT32_C(0x035de755);
    (**(code **)(*DAT_00443308 + 0x30))(DAT_00443308,0,&guest_callback_key);
    *(undefined4 *)(puVar7 + 0x5c) = 0;
  }
  puVar7 = ppuVar3[0x2de];
  if (puVar7 != (undefined *)0x0) {
    *(undefined4 *)(puVar7 + 0xf0) = 0;
    *(undefined4 *)(puVar7 + 0xf4) = 0;
    *(undefined4 *)(puVar7 + 0xf8) = 0;
  }
  if (ppuVar3[0x292] != (undefined *)0x0) {
    FUN_000d2890(0);
  }
  puVar7 = ppuVar3[0x290];
  if (puVar7 != (undefined *)0x0) {
    if (*(int *)(puVar7 + 0x18) != 0) {
      param_1 = (undefined **)(*(int *)(puVar7 + 0x18) + -4);
      iVar5 = (int)*param_1;
      if (-1 < iVar5 + -1) {
        do {
          FUN_001f3760();
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(param_1);
    }
    piVar8 = (int *)(puVar7 + 0x3c);
    iVar5 = 2;
    do {
      if (*piVar8 != 0) {
        *piVar8 = 0;
      }
      piVar8 = piVar8 + 6;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (ppuVar3[0x2fc] != (undefined *)0x0) {
    FUN_00072750(ppuVar3[0x2fc]);
  }
  puVar7 = ppuVar3[0x2f9];
  if (puVar7 != (undefined *)0x0) {
    iVar5 = *(int *)(puVar7 + 0x135c);
    uVar2 = *(uint *)(iVar5 + 0x10);
    if (uVar2 != 0) {
      if ((uVar2 & 1) == 0) {
        *(undefined4 *)(iVar5 + 0x10) = 0;
        iVar10 = *(int *)(&DAT_00414da0 + (uVar2 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
        piVar8 = (int *)(&DAT_00414da0 + (uVar2 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
        while (iVar10 != 0) {
          piVar6 = (int *)*piVar8;
          if (piVar6 == (int *)(iVar5 + 0xc)) {
            *piVar8 = *(int *)*piVar8;
            break;
          }
          piVar8 = piVar6;
          iVar10 = *piVar6;
        }
      }
      *(undefined4 *)(iVar5 + 0x10) = 0;
    }
    param_1 = &PTR_FUN_0039fa74;
    FUN_000b8d70();
    if (*(int *)(puVar7 + 0x135c) != 0) {
      FUN_000b26b0();
    }
    if (*(undefined4 **)(puVar7 + 0x135c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(puVar7 + 0x135c))(1);
      *(undefined4 *)(puVar7 + 0x135c) = 0;
    }
  }
  puVar7 = ppuVar3[0x2de];
  if (puVar7 != (undefined *)0x0) {
    *(undefined4 *)(puVar7 + 0xf0) = 0;
    *(undefined4 *)(puVar7 + 0xf4) = 0;
    *(undefined4 *)(puVar7 + 0xf8) = 0;
  }
  if (ppuVar3[0x2fd] != (undefined *)0x0) {
    FUN_000e3fa0(ppuVar3[0x2fd]);
  }
  if ((undefined4 *)ppuVar3[0x313] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)ppuVar3[0x313])(1);
    ppuVar3[0x313] = (undefined *)0x0;
  }
  puVar7 = ppuVar3[0x2f5];
  if (puVar7 != (undefined *)0x0) {
    FUN_00177b30();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(puVar7);
  }
  ppuVar3[0x2d9] = DAT_0046d064;
  piVar8 = (int *)ppuVar3[0x30e];
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 8))(piVar8);
    ppuVar3[0x30e] = (undefined *)0x0;
  }
  piVar8 = (int *)ppuVar3[0x30f];
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 8))(piVar8);
    ppuVar3[0x30f] = (undefined *)0x0;
  }
  piVar8 = (int *)ppuVar3[0x311];
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 8))(piVar8);
    ppuVar3[0x311] = (undefined *)0x0;
  }
  if ((undefined4 *)ppuVar3[0x82] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)ppuVar3[0x82])(1);
    ppuVar3[0x82] = (undefined *)0x0;
  }
  if ((undefined4 *)ppuVar3[0x301] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)ppuVar3[0x301])(1);
    ppuVar3[0x301] = (undefined *)0x0;
  }
  if ((undefined4 *)ppuVar3[0x2fa] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)ppuVar3[0x2fa])(1);
    ppuVar3[0x2fa] = (undefined *)0x0;
  }
  if ((undefined4 *)ppuVar3[0x2fb] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)ppuVar3[0x2fb])(1);
    ppuVar3[0x2fb] = (undefined *)0x0;
  }
  puVar7 = ppuVar3[0x2f7];
  DAT_00469ab4 = 0;
  if (puVar7 != (undefined *)0x0) {
    FUN_0005dbe0();
    if (*(int *)(puVar7 + 0xc) != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(int *)(puVar7 + 0xc));
    }
    *(undefined4 *)(puVar7 + 8) = 0;
    *(undefined4 *)(puVar7 + 4) = 0;
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(puVar7);
  }
  if (ppuVar3[0x2f8] != (undefined *)0x0) {
    FUN_00149b70();
  }
  puVar7 = ppuVar3[0x2f8];
  if (puVar7 != (undefined *)0x0) {
    if (*(int *)(puVar7 + 0x2c) != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(int *)(puVar7 + 0x2c));
    }
    *(undefined4 *)(puVar7 + 0x2c) = 0;
    *(undefined4 *)(puVar7 + 0x30) = 0;
    *(undefined4 *)(puVar7 + 0x34) = 0;
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(puVar7);
  }
  puVar7 = ppuVar3[0x7f];
  if (puVar7 != (undefined *)0x0) {
    puVar1 = *(undefined4 **)(puVar7 + 0xc);
    if (puVar1 == (undefined4 *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *puVar1;
    }
    FUN_00089f40(puVar7 + 8,&param_1,uVar9,puVar1);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(puVar7 + 0xc));
  }
  puVar7 = ppuVar3[0x80];
  if (puVar7 != (undefined *)0x0) {
    FUN_00213bf0(puVar7);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(puVar7);
  }
  puVar7 = ppuVar3[0x296];
  if (puVar7 != (undefined *)0x0) {
    FUN_00229110();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(puVar7);
  }
  puVar7 = ppuVar3[0x292];
  if (puVar7 != (undefined *)0x0) {
    FUN_000d2890(0);
    FUN_000d2890(0);
    if (*(int *)(puVar7 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(int *)(puVar7 + 0x10));
    }
    *(undefined4 *)(puVar7 + 0x10) = 0;
    *(undefined4 *)(puVar7 + 0x14) = 0;
    *(undefined4 *)(puVar7 + 0x18) = 0;
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(puVar7);
  }
  if (ppuVar3[0x291] != (undefined *)0x0) {
    (**(code **)(*(int *)(ppuVar3[0x291] + 0x10) + 8))(1);
    ppuVar3[0x291] = (undefined *)0x0;
  }
  puVar7 = ppuVar3[0x7d];
  if (puVar7 != (undefined *)0x0) {
    FUN_000cda30(puVar7);
    puVar1 = *(undefined4 **)(puVar7 + 4);
    if (puVar1 == (undefined4 *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *puVar1;
    }
    FUN_001298b0(&param_1,uVar9,puVar1);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(puVar7 + 4));
  }
  puVar7 = ppuVar3[0x2fc];
  if (puVar7 != (undefined *)0x0) {
    FUN_00072210(puVar7);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(puVar7);
  }
  puVar7 = ppuVar3[0x83];
  if (puVar7 != (undefined *)0x0) {
    FUN_000e1d40(&param_1,**(undefined4 **)(puVar7 + 4),*(undefined4 **)(puVar7 + 4));
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(puVar7 + 4));
  }
  if ((int *)ppuVar3[0x2f6] != (int *)0x0) {
    (**(code **)(*(int *)ppuVar3[0x2f6] + 0x10))(1);
    ppuVar3[0x2f6] = (undefined *)0x0;
  }
  puVar7 = ppuVar3[0x7e];
  if (puVar7 != (undefined *)0x0) {
    iVar5 = *(int *)(puVar7 + 4);
    if (iVar5 != 0) {
      iVar10 = *(int *)(puVar7 + 8);
      for (; iVar5 != iVar10; iVar5 = iVar5 + 0x1c) {
        FUN_0013ad50();
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(undefined4 *)(puVar7 + 4));
    }
    *(undefined4 *)(puVar7 + 4) = 0;
    *(undefined4 *)(puVar7 + 8) = 0;
    *(undefined4 *)(puVar7 + 0xc) = 0;
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(puVar7);
  }
  puVar7 = ppuVar3[0x2f9];
  if (puVar7 != (undefined *)0x0) {
    FUN_000d7ae0();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(puVar7);
  }
  puVar7 = ppuVar3[0x2dd];
  DAT_00469ab0 = 0;
  if (puVar7 != (undefined *)0x0) {
    piVar8 = *(int **)(puVar7 + 0x20);
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 8))(piVar8);
      *(undefined4 *)(puVar7 + 0x20) = 0;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(puVar7);
  }
  if ((undefined4 *)ppuVar3[0x2de] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)ppuVar3[0x2de])(1);
    ppuVar3[0x2de] = (undefined *)0x0;
  }
  puVar7 = ppuVar3[0x2df];
  if (puVar7 != (undefined *)0x0) {
    if (*(int *)(puVar7 + 4) != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(int *)(puVar7 + 4));
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(puVar7);
  }
  if ((undefined4 *)ppuVar3[0x2e0] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)ppuVar3[0x2e0])(1);
    ppuVar3[0x2e0] = (undefined *)0x0;
  }
  puVar7 = ppuVar3[0x2fd];
  if (puVar7 != (undefined *)0x0) {
    FUN_000d7c40();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(puVar7);
  }
  param_1 = (undefined **)ppuVar3[0x290];
  if (param_1 != (undefined **)0x0) {
    iVar5 = *(int *)((int)param_1 + 0x18);
    if (iVar5 != 0) {
      iVar10 = *(int *)(iVar5 + -4);
      if (-1 < iVar10 + -1) {
        do {
          FUN_001f3760();
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(iVar5 + -4);
    }
    piVar8 = (int *)((int)param_1 + 0x3c);
    iVar5 = 2;
    do {
      if (*piVar8 != 0) {
        *piVar8 = 0;
      }
      piVar8 = piVar8 + 6;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  puVar7 = ppuVar3[0x81];
  if (puVar7 != (undefined *)0x0) {
    FUN_000d0440();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(puVar7);
  }
  if (ppuVar3[0x315] != (undefined *)0x0) {
    FUN_00151490();
    if (ppuVar3[0x315] != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(ppuVar3[0x315]);
    }
    ppuVar3[0x315] = (undefined *)0x0;
  }
  iVar5 = DAT_004a5900;
  if (DAT_004a5900 != 0) {
    if (*(int *)(DAT_004a5900 + 4) != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(int *)(DAT_004a5900 + 4));
    }
    *(undefined4 *)(DAT_004a5900 + 4) = 0;
    *(undefined4 *)(iVar5 + 8) = 0;
    *(undefined4 *)(iVar5 + 0xc) = 0;
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar5);
  }
  FUN_00178b70();
  uVar9 = DAT_00469954;
  if (ppuVar3[0x2fe] != (undefined *)0x0) {
    FUN_001e2250(DAT_00469954,0);
    FUN_001e2250(uVar9,1);
    FUN_001e2250(uVar9,2);
    FUN_001e2250(uVar9,3);
    FUN_001e2250(uVar9,4);
    FUN_001e2250(uVar9,5);
    FUN_001e2250(uVar9,6);
    puVar7 = ppuVar3[0x2fe];
    if (puVar7 != (undefined *)0x0) {
      FUN_000d6970();
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(puVar7);
    }
  }
  uVar9 = DAT_00469954;
  if (ppuVar3[0x2ff] != (undefined *)0x0) {
    FUN_001e2250(DAT_00469954,0);
    FUN_001e2250(uVar9,1);
    FUN_001e2250(uVar9,2);
    FUN_001e2250(uVar9,3);
    FUN_001e2250(uVar9,4);
    FUN_001e2250(uVar9,5);
    FUN_001e2250(uVar9,6);
    puVar7 = ppuVar3[0x2ff];
    if (puVar7 != (undefined *)0x0) {
      FUN_000d6970();
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(puVar7);
    }
  }
  (**(code **)(*DAT_00469940 + 0x94))();
  RtlEnterCriticalSection(&DAT_0046cfa0);
  if (DAT_00469900 != '\0') {
    DAT_00469900 = '\0';
    FUN_00259080();
  }
  RtlLeaveCriticalSection(&DAT_0046cfa0);
  FUN_00237a30(s_unload_0040d600);
  return;
}
