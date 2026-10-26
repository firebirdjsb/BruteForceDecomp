/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F36960686064ABAF3099A385AF93BB14E788F25BC4D11431294D6D6827071614
 * Entry: 0x003526e9, Ghidra index: 13068, label: FUN_003526e9
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_x86_word_lanes.h"
void FUN_003526e9(int *param_1,int *param_2)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int in_ECX;
  int iVar11;
  uint uVar12;
  short *psVar13;
  uint uVar14;
  short *psVar15;
  int *piVar16;
  undefined4 *puVar17;
  bool bVar18;
  bool bVar19;
  undefined4 uVar20;
  short *local_1c;
  short *local_18;
  short *local_14;
  short *local_10;
  
  if ((0xf < *(byte *)(in_ECX + 0x8c0)) && ((*(byte *)((int)param_1 + 0xb) & 1) == 0)) {
    iVar4 = FUN_0034c841();
    uVar2 = *(ushort *)(param_1 + 1);
    iVar8 = *param_1;
    if ((param_2 == (int *)0x6488) || (param_2 == (int *)0x133c)) {
      if ((*(char *)(iVar8 + 1) == '\0') && (7 < uVar2)) {
        if (*(short *)(in_ECX + 0xa52) == 0) {
          sVar3 = *(short *)(iVar8 + 2);
        }
        else {
          iVar11 = 3;
          bVar18 = true;
          psVar13 = (short *)(iVar4 + 6);
          psVar15 = (short *)(in_ECX + 0xa4c);
          do {
            if (iVar11 == 0) break;
            iVar11 = iVar11 + -1;
            bVar18 = *psVar13 == *psVar15;
            psVar13 = psVar13 + 1;
            psVar15 = psVar15 + 1;
          } while (bVar18);
          if (bVar18) {
            if (*(short *)(in_ECX + 0xa54) == (short)param_2) {
              sVar3 = *(short *)(iVar8 + 2);
              if (*(short *)(in_ECX + 0xa52) == sVar3) {
                *(undefined4 *)(in_ECX + 0xa58) = *(undefined4 *)(in_ECX + 0x1d8);
                *(byte *)((int)param_1 + 10) = *(byte *)((int)param_1 + 10) | 8;
                uVar5 = param_1[2];
                *(ushort *)(param_1 + 1) = uVar2 - 8;
                *param_1 = iVar8 + 8;
                sVar3 = *(short *)(iVar8 + 6);
                if (sVar3 == 0x2100) {
                  if (*(char *)(in_ECX + 0x8c0) != '\x16') {
                    return;
                  }
                  param_1[2] = uVar5 & 0xfffffff9 | 1;
                  FUN_0034bd47(param_1);
                  return;
                }
                if ((sVar3 != 0x21c0) && (sVar3 != 0x2180)) {
                  if ((sVar3 != 0x23c0) && (sVar3 != 0x23c2)) {
                    if (*(char *)(in_ECX + 0xa30) != '\x04') {
                      return;
                    }
                    cVar1 = *(char *)(in_ECX + 0xa33);
                    *(char *)(in_ECX + 0xa33) = cVar1 + '\x01';
                    FUN_00350a7a(0x21c0,8,CONCAT31((int3)(uVar5 >> 8),cVar1),(short *)(iVar8 + 6),2,
                                 *param_1,(short)param_1[1],0,0,0,0,0,0,0);
                    return;
                  }
                  FUN_003521fe(param_1,sVar3);
                  return;
                }
                FUN_00351d65(param_1,sVar3);
                return;
              }
            }
            else {
              sVar3 = *(short *)(iVar8 + 2);
            }
          }
          else {
            sVar3 = *(short *)(iVar8 + 2);
          }
        }
        FUN_00350c50(iVar4 + 6,param_2,sVar3);
      }
    }
    else {
      cVar1 = *(char *)(iVar8 + 1);
      if ((cVar1 == '\a') || (cVar1 == 'e')) {
        bVar18 = cVar1 == '\a';
        if (bVar18) {
          if (*(char *)(in_ECX + 0x8c0) != '\x11') {
            return;
          }
          if (*(short *)(in_ECX + 0xa4a) != 0) {
            iVar11 = 3;
            bVar19 = true;
            psVar13 = (short *)(in_ECX + 0xa44);
            psVar15 = (short *)(iVar4 + 6);
            do {
              if (iVar11 == 0) break;
              iVar11 = iVar11 + -1;
              bVar19 = *psVar13 == *psVar15;
              psVar13 = psVar13 + 1;
              psVar15 = psVar15 + 1;
            } while (bVar19);
            if (bVar19) {
              /* 0x3527c1/0x3527c6 load argument bytes 1/0 into CL/CH.
               * INC ECX then the existing expression swaps its low word back. */
              iVar11 = bf_x86_concat_u8(bf_x86_word_load_byte(&param_2,0U),
                                        bf_x86_word_load_byte(&param_2,1U)) + 1;
              FUN_00350c50((short *)(iVar4 + 6),CONCAT11((char)iVar11,(char)((uint)iVar11 >> 8)),
                           *(undefined2 *)(in_ECX + 0xa4a));
              *(undefined2 *)(in_ECX + 0xa4a) = 0;
            }
          }
        }
        else if (*(char *)(in_ECX + 0x8c0) != '\x12') {
          return;
        }
        *(uint *)(in_ECX + 0xa70) =
             *(uint *)(in_ECX + 0xa70) | (-(uint)bVar18 & 0xfffe8000) + 0x20000;
        if (((*(char *)(iVar8 + 1) == '\a') && (*(short *)(iVar8 + 2) != 0)) ||
           ((*(char *)(iVar8 + 1) == 'e' && (*(short *)(iVar8 + 2) == 0)))) {
          *(uint *)(in_ECX + 0xa70) = *(uint *)(in_ECX + 0xa70) | 0x800000;
        }
        else {
          psVar13 = (short *)(iVar8 + 6);
          uVar5 = uVar2 - 6;
          pcVar6 = (char *)(in_ECX + 0xa02);
          local_1c = (short *)0x0;
          param_1 = (int *)0x0;
          local_18 = (short *)0x0;
          local_10 = (short *)0x0;
          local_14 = (short *)0x0;
          do {
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          iVar11 = (int)pcVar6 - (in_ECX + 0xa03);
          psVar15 = psVar13;
          param_2 = (int *)uVar5;
          if (uVar5 != 0) {
            do {
              if (param_2 < 4) {
LAB_00352971:
                *(byte *)(in_ECX + 0xa72) = *(byte *)(in_ECX + 0xa72) | 4;
                return;
              }
              uVar14 = (uint)(ushort)((ushort)psVar15[1] >> 8 | psVar15[1] << 8);
              if ((int)param_2 - 4U < uVar14) goto LAB_00352971;
              sVar3 = *psVar15;
              param_2 = (int *)(((int)param_2 - 4U) - uVar14);
              if (sVar3 == 0) break;
              if (sVar3 == 0x301) {
                if (uVar14 != 4) goto LAB_00352971;
                if (local_18 == (short *)0x0) {
                  local_18 = psVar15;
                }
              }
              else if (bVar18) {
                if (sVar3 == 0x101) {
                  if (iVar11 == 0) {
                    if ((param_1 == (int *)0x0) ||
                       (CONCAT11((char)*(short *)((int)param_1 + 2),
                                 (char)((ushort)*(short *)((int)param_1 + 2) >> 8)) == 0)) {
LAB_0035291c:
                      param_1 = (int *)psVar15;
                    }
                  }
                  else {
                    iVar7 = FUN_0034fe5b(in_ECX + 0xa02,iVar11,psVar15 + 2,uVar14);
                    if (iVar7 != 0) goto LAB_0035291c;
                  }
                }
                else if (sVar3 == 0x201) {
                  if (local_1c == (short *)0x0) {
                    local_1c = psVar15;
                  }
                }
                else if (sVar3 == 0x401) {
                  if (local_10 == (short *)0x0) {
                    local_10 = psVar15;
                  }
                }
                else if ((sVar3 == 0x1001) && (local_14 == (short *)0x0)) {
                  local_14 = psVar15;
                }
              }
              psVar15 = (short *)((int)psVar15 + uVar14 + 4);
            } while (param_2 != (int *)0x0);
            if (local_18 != (short *)0x0) {
              if (*(int *)(local_18 + 2) != *(int *)(in_ECX + 0xa74)) {
                return;
              }
              if (!bVar18) {
                *(undefined2 *)(in_ECX + 0xa52) = *(undefined2 *)(iVar8 + 2);
                uVar2 = *(ushort *)(in_ECX + 0x8c4);
                *(ushort *)(in_ECX + 0x8c4) = uVar2 | 8;
                *(ushort *)(in_ECX + 0xa54) = (-(ushort)((uVar2 & 0x80) != 0) & 0xaeb4) + 0x6488;
                if (*(int *)(in_ECX + 0xaec) != 0) {
                  KeSetEvent(*(int *)(in_ECX + 0xaec),1,0);
                }
                FUN_0034c6bc(*(undefined4 *)(in_ECX + 0xa2c));
                *(undefined4 *)(in_ECX + 0xa2c) = 0;
                FUN_00351028(0x13);
                return;
              }
              if (param_1 == (int *)0x0) {
                *(byte *)(in_ECX + 0xa72) = *(byte *)(in_ECX + 0xa72) | 0x40;
                return;
              }
              if (local_1c == (short *)0x0) {
                *(byte *)(in_ECX + 0xa72) = *(byte *)(in_ECX + 0xa72) | 0x10;
                return;
              }
              piVar10 = (int *)(local_1c + 2);
              uVar14 = (uint)(ushort)((ushort)local_1c[1] >> 8 | local_1c[1] << 8);
              pcVar6 = (char *)(in_ECX + 0x9da);
              do {
                cVar1 = *pcVar6;
                pcVar6 = pcVar6 + 1;
              } while (cVar1 != '\0');
              iVar8 = (int)pcVar6 - (in_ECX + 0x9db);
              if ((iVar8 != 0) &&
                 (iVar8 = FUN_0034fe5b((char *)(in_ECX + 0x9da),iVar8,piVar10,uVar14), iVar8 == 0))
              {
                *(byte *)(in_ECX + 0xa72) = *(byte *)(in_ECX + 0xa72) | 0x20;
                return;
              }
              if ((*(byte *)(in_ECX + 0x8c4) & 4) == 0) {
                uVar5 = (ushort)(*(ushort *)((int)param_1 + 2) >> 8 |
                                *(ushort *)((int)param_1 + 2) << 8) + 4;
                if (local_10 == (short *)0x0) {
                  param_2 = (int *)0x0;
                }
                else {
                  param_2 = (int *)((ushort)((ushort)local_10[1] >> 8 | local_10[1] << 8) + 4);
                }
                if (local_14 == (short *)0x0) {
                  uVar14 = 0;
                }
                else {
                  uVar14 = (ushort)((ushort)local_14[1] >> 8 | local_14[1] << 8) + 4;
                }
                iVar8 = uVar14 + (int)param_2 + uVar5;
                FUN_0034c6bc(*(undefined4 *)(in_ECX + 0xa2c));
                piVar10 = (int *)FUN_0034c58a(iVar8 + 4,0x4a54454e);
                *(int **)(in_ECX + 0xa2c) = piVar10;
                if (piVar10 == (int *)0x0) {
                  return;
                }
                *piVar10 = iVar8;
                if (uVar5 != 0) {
                  puVar17 = *(undefined4 **)(in_ECX + 0xa2c);
                  for (uVar12 = uVar5 >> 2; puVar17 = puVar17 + 1, uVar12 != 0; uVar12 = uVar12 - 1)
                  {
                    *puVar17 = *param_1;
                    param_1 = (int *)((int)param_1 + 4);
                  }
                  for (uVar12 = uVar5 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
                    *(char *)puVar17 = (char)*(short *)param_1;
                    param_1 = (int *)((int)param_1 + 1);
                    puVar17 = (undefined4 *)((int)puVar17 + 1);
                  }
                }
                if (param_2 != (int *)0x0) {
                  puVar17 = (undefined4 *)(*(int *)(in_ECX + 0xa2c) + 4 + uVar5);
                  for (uVar12 = (uint)param_2 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                    *puVar17 = *(undefined4 *)local_10;
                    local_10 = local_10 + 2;
                    puVar17 = puVar17 + 1;
                  }
                  for (uVar12 = (uint)param_2 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
                    *(char *)puVar17 = (char)*local_10;
                    local_10 = (short *)((int)local_10 + 1);
                    puVar17 = (undefined4 *)((int)puVar17 + 1);
                  }
                }
                if (uVar14 != 0) {
                  puVar17 = (undefined4 *)(*(int *)(in_ECX + 0xa2c) + (int)param_2 + 4 + uVar5);
                  for (uVar12 = uVar14 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                    *puVar17 = *(undefined4 *)local_14;
                    local_14 = local_14 + 2;
                    puVar17 = puVar17 + 1;
                  }
                  for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
                    *(char *)puVar17 = (char)*local_14;
                    local_14 = (short *)((int)local_14 + 1);
                    puVar17 = (undefined4 *)((int)puVar17 + 1);
                  }
                }
                *(undefined4 *)(in_ECX + 0xa4c) = *(undefined4 *)(iVar4 + 6);
                *(undefined2 *)(in_ECX + 0xa50) = *(undefined2 *)(iVar4 + 10);
                uVar20 = 0x12;
              }
              else {
                param_2 = *(int **)(in_ECX + 0xa2c) + 1;
                for (iVar8 = **(int **)(in_ECX + 0xa2c); piVar9 = param_2, iVar8 != 0;
                    iVar8 = iVar8 + -1) {
                  do {
                    iVar4 = *piVar9;
                    piVar9 = (int *)((int)piVar9 + 1);
                  } while ((char)iVar4 != '\0');
                  iVar4 = FUN_0034fe5b(piVar10,uVar14,param_2,(int)piVar9 - (int)((int)param_2 + 1))
                  ;
                  if (iVar4 != 0) {
                    return;
                  }
                  param_2 = param_2 + 99;
                }
                if (0x27 < uVar14) {
                  uVar14 = 0x27;
                }
                for (uVar12 = uVar14 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                  *param_2 = *piVar10;
                  piVar10 = piVar10 + 1;
                  param_2 = param_2 + 1;
                }
                piVar16 = param_2;
                for (uVar14 = uVar14 & 3; param_2 = (int *)uVar5, uVar14 != 0; uVar14 = uVar14 - 1)
                {
                  *(char *)piVar16 = (char)*piVar10;
                  piVar10 = (int *)((int)piVar10 + 1);
                  piVar16 = (int *)((int)piVar16 + 1);
                }
                while ((param_2 != (int *)0x0 && (3 < param_2))) {
                  uVar5 = (uint)(ushort)((ushort)psVar13[1] >> 8 | psVar13[1] << 8);
                  if ((int)param_2 - 4U < uVar5) break;
                  if (*psVar13 == 0) break;
                  if (*psVar13 == 0x101) {
                    piVar9[piVar9[10] + 0xb] = (int)(piVar9 + piVar9[10] * 10 + 0x13);
                    uVar14 = uVar5;
                    if (0x27 < uVar5) {
                      uVar14 = 0x27;
                    }
                    puVar17 = (undefined4 *)piVar9[piVar9[10] + 0xb];
                    psVar15 = psVar13;
                    for (uVar12 = uVar14 >> 2; psVar15 = psVar15 + 2, uVar12 != 0;
                        uVar12 = uVar12 - 1) {
                      *puVar17 = *(undefined4 *)psVar15;
                      puVar17 = puVar17 + 1;
                    }
                    for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
                      *(char *)puVar17 = (char)*psVar15;
                      psVar15 = (short *)((int)psVar15 + 1);
                      puVar17 = (undefined4 *)((int)puVar17 + 1);
                    }
                    piVar9[10] = piVar9[10] + 1;
                    if (piVar9[10] == 8) break;
                  }
                  psVar13 = (short *)((int)psVar13 + uVar5 + 4);
                  param_2 = (int *)(((int)param_2 - 4U) - uVar5);
                }
                uVar5 = **(uint **)(in_ECX + 0xa2c) + 1;
                **(uint **)(in_ECX + 0xa2c) = uVar5;
                if (uVar5 != *(byte *)(in_ECX + 0x26)) {
                  return;
                }
                uVar20 = 0;
              }
              FUN_00350db4(uVar20,0);
              return;
            }
          }
          *(byte *)(in_ECX + 0xa72) = *(byte *)(in_ECX + 0xa72) | 8;
        }
      }
      else if (((cVar1 == -0x59) && (*(short *)(in_ECX + 0xa52) != 0)) &&
              (*(short *)(in_ECX + 0xa52) == *(short *)(iVar8 + 2))) {
        FUN_00351884(0x90000000);
      }
    }
  }
  return;
}
