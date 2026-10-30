/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FCEA1BAD6F88CF7EE6DBA3002ACB38A390CFE95E9689AFD3D6DDC8B2EC2F963E
 * Entry: 0x00130c50, Ghidra index: 3831, label: FUN_00130c50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Mapped Xbox image address 0x0012ddb0; extern label with unresolved link definition. */
extern unsigned char LAB_0012ddb0;

/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0038db80;
extern uint32_t DAT_003c0558;
extern uint32_t DAT_0040cae8;
extern uint32_t DAT_0040cae9;
void FUN_00130c50(int param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  int in_EAX;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  int *piVar11;
  int iVar12;
  int local_40;
  char *local_3c;
  undefined4 *local_38;
  int *local_34;
  char *local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  int local_14;
  int local_10 [4];
  
  if (*(int *)(param_1 + 0xcc) != 0) {
    piVar11 = *(int **)(in_EAX + 0x68);
    if (piVar11 == (int *)0x0) {
      iVar12 = 0;
    }
    else {
      iVar12 = (*(int *)(in_EAX + 0x6c) - (int)piVar11) / 0xac;
    }
    *(int *)(param_1 + 0x2b0) = iVar12;
    local_34 = piVar11;
    piVar5 = (int *)thunk_FUN_002ea01d(iVar12 * 0x584 + 4);
    if (piVar5 == (int *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = piVar5 + 1;
      *piVar5 = iVar12;
      FUN_0001fe40(piVar7,0x584,iVar12,&LAB_0012ddb0);
      piVar11 = local_34;
    }
    iVar12 = 0;
    *(int **)(param_1 + 0x2b4) = piVar7;
    if (0 < *(int *)(param_1 + 0x2b0)) {
      piVar7 = piVar7 + 1;
      do {
        *piVar7 = *piVar11;
        iVar12 = iVar12 + 1;
        piVar7 = piVar7 + 0x161;
        piVar11 = piVar11 + 0x2b;
      } while (iVar12 < *(int *)(param_1 + 0x2b0));
    }
    uVar6 = FUN_00131da0(in_EAX + 0x54);
    *(undefined4 *)(param_1 + 0x2b8) = uVar6;
    uVar6 = FUN_00131da0(in_EAX + 0x58);
    *(undefined4 *)(param_1 + 700) = uVar6;
    uVar6 = FUN_00131da0(in_EAX + 0x5c);
    *(undefined4 *)(param_1 + 0x2c4) = uVar6;
    uVar6 = FUN_00131da0(in_EAX + 0x60);
    *(undefined4 *)(param_1 + 0x2c0) = uVar6;
    local_34 = *(int **)(in_EAX + 0x68);
    puVar10 = *(undefined4 **)(param_1 + 0x2b4);
    local_14 = 0;
    if (0 < *(int *)(param_1 + 0x2b0)) {
      do {
        uVar6 = *(undefined4 *)((int)local_34 + 4);
        *puVar10 = uVar6;
        switch(uVar6) {
        case 5:
          *(byte *)(param_1 + 0x1a9) = *(byte *)(param_1 + 0x1a9) | 0x10;
          break;
        case 6:
          *(byte *)(param_1 + 0x1a9) = *(byte *)(param_1 + 0x1a9) | 1;
          break;
        case 7:
          *(byte *)(param_1 + 0x1a9) = *(byte *)(param_1 + 0x1a9) | 0x20;
          break;
        case 8:
          *(byte *)(param_1 + 0x1a9) = *(byte *)(param_1 + 0x1a9) | 2;
          break;
        case 0xd:
          *(byte *)(param_1 + 0x1a8) = *(byte *)(param_1 + 0x1a8) | 8;
          break;
        case 0xe:
          *(byte *)(param_1 + 0x1a8) = *(byte *)(param_1 + 0x1a8) | 0x80;
          break;
        case 0xf:
        case 0x10:
          *(byte *)(param_1 + 0x1a9) = *(byte *)(param_1 + 0x1a9) | 4;
          break;
        case 0x11:
        case 0x12:
          *(byte *)(param_1 + 0x1a9) = *(byte *)(param_1 + 0x1a9) | 8;
          break;
        case 0x19:
          *(byte *)(param_1 + 0x1a8) = *(byte *)(param_1 + 0x1a8) | 0x40;
          break;
        case 0x2c:
          *(byte *)(param_1 + 0x1a8) = *(byte *)(param_1 + 0x1a8) | 0x20;
          break;
        case 0x30:
          *(ushort *)(param_1 + 0x1a8) = *(ushort *)(param_1 + 0x1a8) | 0x10;
        }
        *(byte *)(puVar10 + 0x94) =
             *(byte *)(puVar10 + 0x94) ^
             ((&DAT_0040cae8)[*(int *)((int)local_34 + 0x78) * 2] << 5 ^ *(byte *)(puVar10 + 0x94))
             & 0x20;
        *(byte *)((int)puVar10 + 0x252) =
             *(byte *)((int)puVar10 + 0x252) ^
             ((&DAT_0040cae9)[*(int *)((int)local_34 + 0x78) * 2] ^ *(byte *)((int)puVar10 + 0x252))
             & 1;
        local_40 = 0;
        if (*(uint *)((int)local_34 + 0x20) < 0x10) {
          local_10[2] = (int)local_34 + 0xc;
        }
        else {
          local_10[2] = *(int *)((int)local_34 + 0xc);
        }
        if (*(uint *)((int)local_34 + 0x3c) < 0x10) {
          local_10[3] = (int)local_34 + 0x28;
        }
        else {
          local_10[3] = *(int *)((int)local_34 + 0x28);
        }
        *(char *)((int)puVar10 + 0x253) = (*(int *)((int)local_34 + 0x38) != 0) + '\x01';
        if (*(uint *)((int)local_34 + 0x58) < 0x10) {
          local_10[0] = (int)local_34 + 0x44;
        }
        else {
          local_10[0] = *(int *)((int)local_34 + 0x44);
        }
        if (*(uint *)((int)local_34 + 0x74) < 0x10) {
          local_10[1] = (int)local_34 + 0x60;
        }
        else {
          local_10[1] = *(int *)((int)local_34 + 0x60);
        }
        local_1c = 0;
        do {
          local_30 = *(char **)((int)local_10 + local_1c);
          local_3c = *(char **)((int)local_10 + local_1c + 8);
          local_24 = 1;
          local_28 = 0;
          local_20 = 0;
          local_18 = (int *)0x0;
LAB_00130f00:
          do {
            iVar12 = local_20;
            if (local_18 != (int *)0x0) {
              iVar12 = local_20 + 0xc;
            }
            if (local_1c != 0) {
              iVar12 = iVar12 + 0x18;
            }
            if ((*local_3c == '\0') && (*local_30 == '\0')) {
              puVar10[iVar12 * 3 + 2] = 0;
              puVar10[iVar12 * 3 + 3] = 0;
              puVar10[iVar12 * 3 + 4] = 0;
            }
            else {
              FUN_00130ba0(*(byte *)(puVar10 + 0x94) >> 5 & 1,&local_40);
              for (piVar11 = *(int **)(*(int *)(param_1 + 0xcc) + 8);
                  piVar11 != *(int **)(*(int *)(param_1 + 0xcc) + 0xc); piVar11 = piVar11 + 1) {
                if (*(int *)(*piVar11 + 0x14) == local_40) {
                  iVar8 = *piVar11;
                  goto LAB_00130fa4;
                }
              }
              iVar8 = 0;
LAB_00130fa4:
              local_38 = puVar10 + iVar12 * 3;
              local_38[2] = iVar8;
              iVar12 = local_28;
              while ((iVar8 == 0 && (iVar12 != 0))) {
                iVar12 = *(int *)(&DAT_0038db80 + iVar12 * 4);
                FUN_00130ba0(*(byte *)(puVar10 + 0x94) >> 5 & 1,&local_40);
                for (piVar11 = *(int **)(*(int *)(param_1 + 0xcc) + 8);
                    piVar11 != *(int **)(*(int *)(param_1 + 0xcc) + 0xc); piVar11 = piVar11 + 1) {
                  if (*(int *)(*piVar11 + 0x14) == local_40) {
                    iVar8 = *piVar11;
                    goto LAB_00131028;
                  }
                }
                iVar8 = 0;
LAB_00131028:
                local_38[2] = iVar8;
              }
              if (local_38[2] == 0) {
                FUN_00130ba0(*(byte *)(puVar10 + 0x94) >> 5 & 1,&local_40);
                for (piVar11 = *(int **)(*(int *)(param_1 + 0xcc) + 8);
                    piVar11 != *(int **)(*(int *)(param_1 + 0xcc) + 0xc); piVar11 = piVar11 + 1) {
                  if (*(int *)(*piVar11 + 0x14) == local_40) {
                    iVar12 = *piVar11;
                    goto LAB_00131097;
                  }
                }
                iVar12 = 0;
LAB_00131097:
                local_38[2] = iVar12;
              }
              puVar3 = local_38;
              local_38[4] = 0;
              local_38[3] = 0;
              if ((local_38[2] != 0) &&
                 (piVar11 = *(int **)(local_38[2] + 0xc), piVar11 != (int *)0x0)) {
                local_2c = 0;
                iVar12 = (**(code **)(*piVar11 + 0x38))(piVar11,0xf9c94f64,0,&local_2c);
                if (-1 < iVar12) {
                  puVar3[3] = local_3c;
                }
                iVar12 = (**(code **)(*piVar11 + 0x38))(piVar11,0x17c67207,0,&local_3c);
                if (-1 < iVar12) {
                  puVar3[4] = local_2c;
                }
              }
            }
            piVar11 = local_34;
            local_18 = (int *)((int)local_18 + 1);
          } while ((int)local_18 < 2);
          local_28 = local_28 + 1;
          local_20 = local_20 + 1;
          if (local_28 < 6) {
            local_18 = (int *)0x0;
            goto LAB_00130f00;
          }
          local_24 = local_24 + 1;
          if (local_20 < 0xc) {
            local_28 = 0;
            local_18 = (int *)0x0;
            goto LAB_00130f00;
          }
          local_1c = local_1c + 4;
        } while (local_1c < 8);
        puVar10[0x92] = 0;
        *(byte *)(puVar10 + 0x94) =
             *(byte *)(puVar10 + 0x94) ^
             (*(byte *)((int)local_34 + 0x92) ^ *(byte *)(puVar10 + 0x94)) & 1;
        puVar10[0x95] = *(undefined4 *)((int)local_34 + 0x88);
        bVar4 = *(byte *)(puVar10 + 0x94) ^
                (*(char *)((int)local_34 + 0x95) << 1 ^ *(byte *)(puVar10 + 0x94)) & 2;
        *(byte *)(puVar10 + 0x94) = bVar4;
        bVar4 = (*(char *)((int)local_34 + 0x90) << 2 ^ bVar4) & 4 ^ bVar4;
        *(byte *)(puVar10 + 0x94) = bVar4;
        bVar4 = (*(char *)((int)local_34 + 0x8c) << 3 ^ bVar4) & 8 ^ bVar4;
        *(byte *)(puVar10 + 0x94) = bVar4;
        *(byte *)((int)puVar10 + 0x251) =
             *(byte *)((int)puVar10 + 0x251) ^
             ((*(char *)((int)local_34 + 0x97) == '\0') << 4 ^ *(byte *)((int)puVar10 + 0x251)) &
             0x10;
        bVar4 = *(char *)((int)local_34 + 0x99) << 7 | bVar4 & 0x7f;
        *(byte *)(puVar10 + 0x94) = bVar4;
        *(byte *)(puVar10 + 0x94) = (*(char *)((int)local_34 + 0x8e) << 6 ^ bVar4) & 0x40 ^ bVar4;
        puVar10[0x97] = *(undefined4 *)((int)local_34 + 0x7c);
        puVar10[0x96] = 0x3f800000;
        bVar4 = *(byte *)((int)puVar10 + 0x251) ^
                (*(byte *)((int)local_34 + 0x96) ^ *(byte *)((int)puVar10 + 0x251)) & 1;
        *(byte *)((int)puVar10 + 0x251) = bVar4;
        bVar4 = *(char *)((int)local_34 + 0x8f) << 7 | bVar4 & 0x7f;
        *(byte *)((int)puVar10 + 0x251) = bVar4;
        bVar4 = (*(char *)((int)local_34 + 0x91) << 1 ^ bVar4) & 2 ^ bVar4;
        *(byte *)((int)puVar10 + 0x251) = bVar4;
        bVar4 = (*(char *)((int)local_34 + 0x98) << 3 ^ bVar4) & 8 ^ bVar4;
        *(byte *)((int)puVar10 + 0x251) = bVar4;
        bVar4 = (*(char *)((int)local_34 + 0x94) << 5 ^ bVar4) & 0x20 ^ bVar4;
        *(byte *)((int)puVar10 + 0x251) = bVar4;
        *(byte *)((int)puVar10 + 0x251) =
             (*(char *)((int)local_34 + 0x93) << 6 ^ bVar4) & 0x40 ^ bVar4;
        puVar10[0x98] = *(undefined4 *)((int)local_34 + 0x80);
        *(byte *)((int)puVar10 + 0x252) =
             *(byte *)((int)puVar10 + 0x252) ^
             (*(char *)((int)local_34 + 0x8d) << 1 ^ *(byte *)((int)puVar10 + 0x252)) & 2;
        if (*(int *)((int)local_34 + 0x84) == 0x626f9f1) {
          *(byte *)((int)puVar10 + 0x251) = *(byte *)((int)puVar10 + 0x251) | 4;
        }
        else {
          iVar12 = *(int *)(param_1 + 0x2b4);
          iVar8 = 0;
          if (iVar12 != 0) {
            if (0 < *(int *)(param_1 + 0x2b0)) {
              piVar5 = (int *)(iVar12 + 4);
              do {
                if (*(int *)((int)local_34 + 0x84) == *piVar5) {
                  iVar8 = iVar8 * 0x584 + iVar12;
                  goto LAB_00131330;
                }
                iVar8 = iVar8 + 1;
                piVar5 = piVar5 + 0x161;
              } while (iVar8 < *(int *)(param_1 + 0x2b0));
            }
            iVar8 = 0;
          }
LAB_00131330:
          puVar10[0x93] = iVar8;
        }
        local_18 = *(int **)((int)local_34 + 0xa4);
        piVar5 = *(int **)((int)local_34 + 0xa0);
        if (piVar5 != local_18) {
          do {
            piVar7 = puVar10 + *piVar5 * 4 + 0x99;
            iVar12 = 0;
            if (*(int *)(param_1 + 0x2b4) != 0) {
              if (0 < *(int *)(param_1 + 0x2b0)) {
                piVar9 = (int *)(*(int *)(param_1 + 0x2b4) + 4);
                do {
                  if (piVar5[1] == *piVar9) {
                    iVar12 = iVar12 * 0x584 + *(int *)(param_1 + 0x2b4);
                    goto LAB_00131390;
                  }
                  iVar12 = iVar12 + 1;
                  piVar9 = piVar9 + 0x161;
                } while (iVar12 < *(int *)(param_1 + 0x2b0));
              }
              iVar12 = 0;
            }
LAB_00131390:
            *piVar7 = iVar12;
            piVar7[2] = -0x40800000;
            *(char *)((int)piVar7 + 5) = (char)piVar5[2];
            if (DAT_003c0558 == '\0') {
              *(undefined1 *)(piVar7 + 1) = *(undefined1 *)((int)piVar5 + 9);
            }
            else {
              *(undefined1 *)(piVar7 + 1) = 0;
            }
            if (((*(undefined4 **)(param_1 + 0x2b8) == puVar10) && (iVar12 = *piVar5, 8 < iVar12))
               && (iVar12 < 0xd)) {
              uVar1 = iVar12 - 9;
              if (3 < uVar1) {
                FUN_001297e0(param_1 + 0x338);
              }
              puVar2 = (uint *)(param_1 + 0x338 + (uVar1 >> 5) * 4);
              *puVar2 = *puVar2 | 1 << ((byte)uVar1 & 0x1f);
            }
            piVar5 = piVar5 + 3;
          } while (piVar5 != local_18);
        }
        local_14 = local_14 + 1;
        local_34 = (int *)((int)piVar11 + 0xac);
        puVar10 = puVar10 + 0x161;
      } while (local_14 < *(int *)(param_1 + 0x2b0));
    }
  }
  return;
}
