/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 848382471572E546EE4C6A4F3066A6DED6687ABFD181F4FBC1ED668C308A64D3
 * Entry: 0x001314c0, Ghidra index: 3832, label: FUN_001314c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched callback/address references (not an ABI verification).
 * Original x86 register, stack and indirect call contracts remain ABI_UNVERIFIED. */
extern void FUN_00050b40(void);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0038db80;
extern uint32_t DAT_003bc150;
extern uint32_t DAT_003bc550;
extern uint32_t DAT_0040dd4c;
extern uint32_t PTR_DAT_0040cafc;
extern uint32_t PTR_DAT_0040cb30;
extern uint32_t PTR_DAT_0040cb34;
extern char s_Sc__s_s_s_0040caf0[];
void FUN_001314c0(int param_1)

{
  char *pcVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int in_EAX;
  int *piVar5;
  uint uVar6;
  byte bVar7;
  int *piVar8;
  int iVar9;
  char *pcVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  int local_370;
  undefined **local_36c;
  char local_35c [80];
  char local_30c;
  char local_30b [259];
  char local_208;
  char local_207 [259];
  char local_104;
  char local_103 [259];
  
  if (*(int *)(param_1 + 0xcc) != 0) {
    iVar12 = *(int *)(param_1 + 0x2cc);
    if (iVar12 != 0) {
      FUN_0001fe00(iVar12,0x4c,*(undefined4 *)(iVar12 + -4),FUN_00050b40);
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(iVar12 + -4);
    }
    piVar3 = *(int **)(in_EAX + 0x7c);
    piVar11 = *(int **)(in_EAX + 0x78);
    if (*(int *)(in_EAX + 0x68) == 0) {
      iVar12 = 0;
    }
    else {
      iVar12 = (*(int *)(in_EAX + 0x6c) - *(int *)(in_EAX + 0x68)) / 0xac;
    }
    *(int *)(param_1 + 0x2c8) = iVar12;
    piVar5 = (int *)thunk_FUN_002ea01d(iVar12 * 0x4c + 4);
    if (piVar5 == (int *)0x0) {
      piVar13 = (int *)0x0;
    }
    else {
      piVar13 = piVar5 + 1;
      *piVar5 = iVar12;
      FUN_0001fe40(piVar13,0x4c,iVar12,(uintptr_t)0x0012dd90U);
    }
    *(int **)(param_1 + 0x2cc) = piVar13;
    if (piVar11 != piVar3) {
      piVar5 = piVar11 + 4;
      do {
        piVar13[1] = *piVar11;
        iVar12 = piVar5[-3];
        *piVar13 = iVar12;
        switch(iVar12) {
        case 1:
          *(byte *)(param_1 + 0x1a8) = *(byte *)(param_1 + 0x1a8) | 2;
          break;
        case 0x1a:
        case 0x1b:
          *(byte *)(param_1 + 0x1a9) = *(byte *)(param_1 + 0x1a9) | 0x80;
          break;
        case 0x1c:
        case 0x1d:
        case 0x1e:
          FUN_0012df20();
          *(int *)(param_1 + 0x2d0 + *piVar13 * 4) = piVar5[9];
          break;
        case 0x2f:
          *(byte *)(param_1 + 0x1a8) = *(byte *)(param_1 + 0x1a8) | 4;
        }
        *(byte *)(piVar13 + 0xf) =
             *(byte *)(piVar13 + 0xf) ^ ((piVar5[-2] != 0) << 5 ^ *(byte *)(piVar13 + 0xf)) & 0x20;
        piVar8 = piVar5;
        if (0xf < (uint)piVar5[5]) {
          piVar8 = (int *)*piVar5;
        }
        pcVar10 = local_35c;
        do {
          iVar12 = *piVar8;
          piVar8 = (int *)((int)piVar8 + 1);
          *pcVar10 = (char)iVar12;
          pcVar10 = pcVar10 + 1;
        } while ((char)iVar12 != '\0');
        local_36c = &PTR_DAT_0040cb34;
        iVar12 = 0;
        do {
          local_370 = 0;
          do {
            if ((*(byte *)(piVar13 + 0xf) & 0x20) == 0) {
              FUN_002eaa19(&local_30c,0x104,&DAT_0040dd4c,local_35c,(&PTR_DAT_0040cafc)[local_370]);
            }
            else {
              FUN_002eaa19(&local_30c,0x104,s_Sc__s_s_s_0040caf0,*local_36c);
            }
            uVar6 = 0xffffffff;
            pcVar10 = &local_30c;
            cVar2 = local_30c;
            while (cVar2 != '\0') {
              uVar6 = uVar6 >> 8 ^
                      *(uint *)(&DAT_003bc150 + (((byte)(&DAT_003bc550)[cVar2] ^ uVar6) & 0xff) * 4)
              ;
              pcVar1 = pcVar10 + 1;
              pcVar10 = pcVar10 + 1;
              cVar2 = *pcVar1;
            }
            for (piVar8 = *(int **)(*(int *)(param_1 + 0xcc) + 8);
                piVar8 != *(int **)(*(int *)(param_1 + 0xcc) + 0xc); piVar8 = piVar8 + 1) {
              if (*(uint *)(*piVar8 + 0x14) == ~uVar6) {
                iVar9 = *piVar8;
                goto LAB_00131700;
              }
            }
            iVar9 = 0;
LAB_00131700:
            *(int *)((int)piVar13 + iVar12 + 8) = iVar9;
            iVar4 = local_370;
            while ((iVar9 == 0 && (iVar4 != 0))) {
              iVar4 = *(int *)(&DAT_0038db80 + iVar4 * 4);
              if ((*(byte *)(piVar13 + 0xf) & 0x20) == 0) {
                FUN_002eaa19(&local_208,0x104,&DAT_0040dd4c,local_35c,(&PTR_DAT_0040cafc)[iVar4]);
              }
              else {
                FUN_002eaa19(&local_208,0x104,s_Sc__s_s_s_0040caf0,*local_36c,local_35c,
                             (&PTR_DAT_0040cafc)[iVar4]);
              }
              uVar6 = 0xffffffff;
              pcVar10 = &local_208;
              cVar2 = local_208;
              while (cVar2 != '\0') {
                uVar6 = uVar6 >> 8 ^
                        *(uint *)(&DAT_003bc150 +
                                 (((byte)(&DAT_003bc550)[cVar2] ^ uVar6) & 0xff) * 4);
                pcVar1 = pcVar10 + 1;
                pcVar10 = pcVar10 + 1;
                cVar2 = *pcVar1;
              }
              for (piVar8 = *(int **)(*(int *)(param_1 + 0xcc) + 8);
                  piVar8 != *(int **)(*(int *)(param_1 + 0xcc) + 0xc); piVar8 = piVar8 + 1) {
                if (*(uint *)(*piVar8 + 0x14) == ~uVar6) {
                  iVar9 = *piVar8;
                  goto LAB_001317ef;
                }
              }
              iVar9 = 0;
LAB_001317ef:
              *(int *)((int)piVar13 + iVar12 + 8) = iVar9;
            }
            if (*(int *)((int)piVar13 + iVar12 + 8) == 0) {
              if ((*(byte *)(piVar13 + 0xf) & 0x20) == 0) {
                FUN_002eaa19(&local_104,0x104,&DAT_0040dd4c,local_35c,PTR_DAT_0040cafc);
              }
              else {
                FUN_002eaa19(&local_104,0x104,s_Sc__s_s_s_0040caf0,PTR_DAT_0040cb30,local_35c,
                             PTR_DAT_0040cafc);
              }
              uVar6 = 0xffffffff;
              pcVar10 = &local_104;
              cVar2 = local_104;
              while (cVar2 != '\0') {
                uVar6 = uVar6 >> 8 ^
                        *(uint *)(&DAT_003bc150 +
                                 (((byte)(&DAT_003bc550)[cVar2] ^ uVar6) & 0xff) * 4);
                pcVar1 = pcVar10 + 1;
                pcVar10 = pcVar10 + 1;
                cVar2 = *pcVar1;
              }
              for (piVar8 = *(int **)(*(int *)(param_1 + 0xcc) + 8);
                  piVar8 != *(int **)(*(int *)(param_1 + 0xcc) + 0xc); piVar8 = piVar8 + 1) {
                if (*(uint *)(*piVar8 + 0x14) == ~uVar6) {
                  iVar9 = *piVar8;
                  goto LAB_001318d4;
                }
              }
              iVar9 = 0;
LAB_001318d4:
              *(int *)((int)piVar13 + iVar12 + 8) = iVar9;
            }
            local_370 = local_370 + 1;
            iVar12 = iVar12 + 4;
          } while (local_370 < 6);
          local_36c = local_36c + 1;
        } while (iVar12 < 0x30);
        piVar13[0xe] = 0;
        piVar13[0x10] = piVar5[8];
        bVar7 = *(byte *)(piVar13 + 0xf) ^
                (*(char *)((int)piVar5 + 0x2d) << 4 ^ *(byte *)(piVar13 + 0xf)) & 0x10;
        *(byte *)(piVar13 + 0xf) = bVar7;
        bVar7 = (*(byte *)((int)piVar5 + 0x2b) ^ bVar7) & 1 ^ bVar7;
        *(byte *)(piVar13 + 0xf) = bVar7;
        bVar7 = ((char)piVar5[10] << 2 ^ bVar7) & 4 ^ bVar7;
        *(byte *)(piVar13 + 0xf) = bVar7;
        bVar7 = bVar7 & 0x7f | (char)piVar5[10] << 7;
        *(byte *)(piVar13 + 0xf) = bVar7;
        *(byte *)(piVar13 + 0xf) = (*(char *)((int)piVar5 + 0x2a) << 1 ^ bVar7) & 2 ^ bVar7;
        piVar13[0x11] = piVar5[6];
        bVar7 = *(byte *)((int)piVar13 + 0x3d) ^
                (*(byte *)((int)piVar5 + 0x29) ^ *(byte *)((int)piVar13 + 0x3d)) & 1;
        *(byte *)((int)piVar13 + 0x3d) = bVar7;
        *(byte *)((int)piVar13 + 0x3d) = ((char)piVar5[0xb] << 1 ^ bVar7) & 2 ^ bVar7;
        piVar13[0x12] = piVar5[7];
        piVar11 = piVar11 + 0x10;
        piVar5 = piVar5 + 0x10;
        piVar13 = piVar13 + 0x13;
      } while (piVar11 != piVar3);
    }
  }
  return;
}
