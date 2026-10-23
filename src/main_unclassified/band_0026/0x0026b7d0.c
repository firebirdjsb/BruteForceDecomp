/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 45038F7EBB25A90F3172AC57D80EA4D012233DCCC6933D9FA6759A905ABE2F82
 * Entry: 0x0026b7d0, Ghidra index: 8767, label: FUN_0026b7d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_jump_context_opaque.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003bb214;
extern uint32_t DAT_003bb288;
extern uint32_t DAT_00405c50;
extern uint32_t DAT_00405c90;
extern uint32_t DAT_00405ca0;
extern uint32_t DAT_00405ca8;
extern uint32_t DAT_00405cb0;
extern uint32_t DAT_00405cb8;
extern uint32_t DAT_00405cc8;
extern uint32_t DAT_00405cd4;
extern uint32_t DAT_00405cdc;
extern uint32_t DAT_00405ce4;
extern uint32_t DAT_00405cf4;
extern uint32_t DAT_00405d04;
extern uint32_t DAT_00405d0c;
extern uint32_t DAT_00405d18;
extern uint32_t DAT_00405d28;
extern uint32_t DAT_00405d34;
extern uint32_t DAT_00405d48;
extern uint32_t DAT_00405d54;
extern uint32_t DAT_00405d60;
extern uint32_t DAT_00405d68;
extern uint32_t DAT_00405d70;
extern uint32_t DAT_00405d78;
extern uint32_t DAT_00405fec;
extern uint32_t DAT_0044363c;
extern uint32_t *DAT_00469888;
extern char s_API_error___wrong_number_of_argu_00404bf8[];
extern char s_exit_1___Unable_to_recover__00404a8c[];
void FUN_0026b7d0(void)

{
  double dVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = 0;
  FUN_00289c10();
  FUN_00289520(1);
  FUN_002897b0();
  FUN_00289860();
  do {
    puVar5 = DAT_00469888;
    dVar1 = (double)*(int *)((int)&DAT_003bb214 + uVar7);
    if (*(int *)((int)&DAT_003bb214 + uVar7) < 0) {
      dVar1 = dVar1 + 4294967296.0;
    }
    *(undefined4 *)*DAT_00469888 = 0xffffffff;
    *(double *)(*puVar5 + 8) = dVar1;
    if (puVar5[2] <= *puVar5) {
      FUN_0028a460();
      puVar5 = DAT_00469888;
    }
    *puVar5 = *puVar5 + 0x10;
    FUN_00289860();
    uVar7 = uVar7 + 4;
  } while (uVar7 < 0x38);
  uVar7 = 0;
  do {
    puVar5 = DAT_00469888;
    dVar1 = (double)*(int *)((int)&DAT_003bb288 + uVar7);
    if (*(int *)((int)&DAT_003bb288 + uVar7) < 0) {
      dVar1 = dVar1 + 4294967296.0;
    }
    *(undefined4 *)*DAT_00469888 = 0xffffffff;
    *(double *)(*puVar5 + 8) = dVar1;
    if (puVar5[2] <= *puVar5) {
      FUN_0028a460();
      puVar5 = DAT_00469888;
    }
    *puVar5 = *puVar5 + 0x10;
    FUN_00289860();
    uVar7 = uVar7 + 4;
  } while (uVar7 < 0x3c);
  uVar7 = 0;
  do {
    puVar5 = DAT_00469888;
    dVar1 = (double)(int)uVar7;
    *(undefined4 *)*DAT_00469888 = 0xffffffff;
    if ((int)uVar7 < 0) {
      dVar1 = dVar1 + 4294967296.0;
    }
    *(double *)(*puVar5 + 8) = dVar1;
    if (puVar5[2] <= *puVar5) {
      FUN_0028a460();
      puVar5 = DAT_00469888;
    }
    *puVar5 = *puVar5 + 0x10;
    FUN_00289860();
    puVar5 = DAT_00469888;
    uVar7 = uVar7 + 1;
  } while (uVar7 < 6);
  *(undefined4 *)*DAT_00469888 = 0xffffffff;
  uVar7 = *puVar5;
  *(undefined4 *)(uVar7 + 8) = 0;
  *(undefined4 *)(uVar7 + 0xc) = 0x3ff00000;
  if (puVar5[2] <= *puVar5) {
    FUN_0028a460();
    puVar5 = DAT_00469888;
  }
  uVar7 = *puVar5;
  *puVar5 = uVar7 + 0x10;
  if ((int)(puVar5[3] + 1) <= (int)((uVar7 + 0x10) - puVar5[1]) >> 4) {
    FUN_0028a460();
    pcVar2 = (char *)&DAT_00405d78;
    do {
      pcVar3 = pcVar2;
      pcVar2 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    pcVar3 = pcVar3 + -0x405d78;
    if (pcVar3 == (char *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)((uint)DAT_00405d78 * (int)pcVar3) % 0x1f;
    }
    uVar4 = FUN_00294640(&DAT_00405d78,pcVar3,DAT_00469888[0x18] + iVar6 * 0xc);
    FUN_00292c90(uVar4);
    puVar5 = DAT_00469888;
    *(undefined4 *)*DAT_00469888 = 0xffffffff;
    uVar7 = *puVar5;
    *(undefined4 *)(uVar7 + 8) = 0;
    *(undefined4 *)(uVar7 + 0xc) = 0x40000000;
    if (puVar5[2] <= *puVar5) {
      FUN_0028a460();
      puVar5 = DAT_00469888;
    }
    uVar7 = *puVar5;
    *puVar5 = uVar7 + 0x10;
    if ((int)(puVar5[3] + 1) <= (int)((uVar7 + 0x10) - puVar5[1]) >> 4) {
      FUN_0028a460();
      pcVar2 = (char *)&DAT_00405d70;
      do {
        pcVar3 = pcVar2;
        pcVar2 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
      pcVar3 = pcVar3 + -0x405d70;
      if (pcVar3 == (char *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = (int)((uint)DAT_00405d70 * (int)pcVar3) % 0x1f;
      }
      uVar4 = FUN_00294640(&DAT_00405d70,pcVar3,DAT_00469888[0x18] + iVar6 * 0xc);
      FUN_00292c90(uVar4);
      puVar5 = DAT_00469888;
      *(undefined4 *)*DAT_00469888 = 0xffffffff;
      uVar7 = *puVar5;
      *(undefined4 *)(uVar7 + 8) = 0;
      *(undefined4 *)(uVar7 + 0xc) = 0x40100000;
      if (puVar5[2] <= *puVar5) {
        FUN_0028a460();
        puVar5 = DAT_00469888;
      }
      uVar7 = *puVar5;
      *puVar5 = uVar7 + 0x10;
      if ((int)(puVar5[3] + 1) <= (int)((uVar7 + 0x10) - puVar5[1]) >> 4) {
        FUN_0028a460();
        pcVar2 = (char *)&DAT_00405d68;
        do {
          pcVar3 = pcVar2;
          pcVar2 = pcVar3 + 1;
        } while (*pcVar3 != '\0');
        pcVar3 = pcVar3 + -0x405d68;
        if (pcVar3 == (char *)0x0) {
          iVar6 = 0;
        }
        else {
          iVar6 = (int)((uint)DAT_00405d68 * (int)pcVar3) % 0x1f;
        }
        uVar4 = FUN_00294640(&DAT_00405d68,pcVar3,DAT_00469888[0x18] + iVar6 * 0xc);
        FUN_00292c90(uVar4);
        puVar5 = DAT_00469888;
        *(undefined4 *)*DAT_00469888 = 0xffffffff;
        uVar7 = *puVar5;
        *(undefined4 *)(uVar7 + 8) = 0;
        *(undefined4 *)(uVar7 + 0xc) = 0x40200000;
        if (puVar5[2] <= *puVar5) {
          FUN_0028a460();
          puVar5 = DAT_00469888;
        }
        uVar7 = *puVar5;
        *puVar5 = uVar7 + 0x10;
        if ((int)(puVar5[3] + 1) <= (int)((uVar7 + 0x10) - puVar5[1]) >> 4) {
          FUN_0028a460();
          pcVar2 = (char *)&DAT_00405d60;
          do {
            pcVar3 = pcVar2;
            pcVar2 = pcVar3 + 1;
          } while (*pcVar3 != '\0');
          pcVar3 = pcVar3 + -0x405d60;
          if (pcVar3 == (char *)0x0) {
            iVar6 = 0;
          }
          else {
            iVar6 = (int)((uint)DAT_00405d60 * (int)pcVar3) % 0x1f;
          }
          uVar4 = FUN_00294640(&DAT_00405d60,pcVar3,DAT_00469888[0x18] + iVar6 * 0xc);
          FUN_00292c90(uVar4);
          puVar5 = DAT_00469888;
          *(undefined4 *)*DAT_00469888 = 0xffffffff;
          uVar7 = *puVar5;
          *(undefined4 *)(uVar7 + 8) = 0;
          *(undefined4 *)(uVar7 + 0xc) = 0x40000000;
          if (puVar5[2] <= *puVar5) {
            FUN_0028a460();
            puVar5 = DAT_00469888;
          }
          uVar7 = *puVar5;
          *puVar5 = uVar7 + 0x10;
          if ((int)(puVar5[3] + 1) <= (int)((uVar7 + 0x10) - puVar5[1]) >> 4) {
            FUN_0028a460();
            pcVar2 = (char *)&DAT_00405d54;
            do {
              pcVar3 = pcVar2;
              pcVar2 = pcVar3 + 1;
            } while (*pcVar3 != '\0');
            pcVar3 = pcVar3 + -0x405d54;
            if (pcVar3 == (char *)0x0) {
              iVar6 = 0;
            }
            else {
              iVar6 = (int)((uint)DAT_00405d54 * (int)pcVar3) % 0x1f;
            }
            uVar4 = FUN_00294640(&DAT_00405d54,pcVar3,DAT_00469888[0x18] + iVar6 * 0xc);
            FUN_00292c90(uVar4);
            puVar5 = DAT_00469888;
            *(undefined4 *)*DAT_00469888 = 0xffffffff;
            uVar7 = *puVar5;
            *(undefined4 *)(uVar7 + 8) = 0;
            *(undefined4 *)(uVar7 + 0xc) = 0x40100000;
            if (puVar5[2] <= *puVar5) {
              FUN_0028a460();
              puVar5 = DAT_00469888;
            }
            uVar7 = *puVar5;
            *puVar5 = uVar7 + 0x10;
            if ((int)(puVar5[3] + 1) <= (int)((uVar7 + 0x10) - puVar5[1]) >> 4) {
              FUN_0028a460();
              pcVar2 = (char *)&DAT_00405d48;
              do {
                pcVar3 = pcVar2;
                pcVar2 = pcVar3 + 1;
              } while (*pcVar3 != '\0');
              pcVar3 = pcVar3 + -0x405d48;
              if (pcVar3 == (char *)0x0) {
                iVar6 = 0;
              }
              else {
                iVar6 = (int)((uint)DAT_00405d48 * (int)pcVar3) % 0x1f;
              }
              uVar4 = FUN_00294640(&DAT_00405d48,pcVar3,DAT_00469888[0x18] + iVar6 * 0xc);
              FUN_00292c90(uVar4);
              puVar5 = DAT_00469888;
              *(undefined4 *)*DAT_00469888 = 0xffffffff;
              uVar7 = *puVar5;
              *(undefined4 *)(uVar7 + 8) = 0;
              *(undefined4 *)(uVar7 + 0xc) = 0x3ff00000;
              if (puVar5[2] <= *puVar5) {
                FUN_0028a460();
                puVar5 = DAT_00469888;
              }
              uVar7 = *puVar5;
              *puVar5 = uVar7 + 0x10;
              if ((int)(puVar5[3] + 1) <= (int)((uVar7 + 0x10) - puVar5[1]) >> 4) {
                FUN_0028a460();
                pcVar2 = (char *)&DAT_00405d34;
                do {
                  pcVar3 = pcVar2;
                  pcVar2 = pcVar3 + 1;
                } while (*pcVar3 != '\0');
                pcVar3 = pcVar3 + -0x405d34;
                if (pcVar3 == (char *)0x0) {
                  iVar6 = 0;
                }
                else {
                  iVar6 = (int)((uint)DAT_00405d34 * (int)pcVar3) % 0x1f;
                }
                uVar4 = FUN_00294640(&DAT_00405d34,pcVar3,DAT_00469888[0x18] + iVar6 * 0xc);
                FUN_00292c90(uVar4);
                puVar5 = DAT_00469888;
                *(undefined4 *)*DAT_00469888 = 0xffffffff;
                uVar7 = *puVar5;
                *(undefined4 *)(uVar7 + 8) = 0;
                *(undefined4 *)(uVar7 + 0xc) = 0x40000000;
                if (puVar5[2] <= *puVar5) {
                  FUN_0028a460();
                  puVar5 = DAT_00469888;
                }
                uVar7 = *puVar5;
                *puVar5 = uVar7 + 0x10;
                if ((int)(puVar5[3] + 1) <= (int)((uVar7 + 0x10) - puVar5[1]) >> 4) {
                  FUN_0028a460();
                  pcVar2 = (char *)&DAT_00405d28;
                  do {
                    pcVar3 = pcVar2;
                    pcVar2 = pcVar3 + 1;
                  } while (*pcVar3 != '\0');
                  pcVar3 = pcVar3 + -0x405d28;
                  if (pcVar3 == (char *)0x0) {
                    iVar6 = 0;
                  }
                  else {
                    iVar6 = (int)((uint)DAT_00405d28 * (int)pcVar3) % 0x1f;
                  }
                  uVar4 = FUN_00294640(&DAT_00405d28,pcVar3,DAT_00469888[0x18] + iVar6 * 0xc);
                  FUN_00292c90(uVar4);
                  puVar5 = DAT_00469888;
                  *(undefined4 *)*DAT_00469888 = 0xffffffff;
                  uVar7 = *puVar5;
                  *(undefined4 *)(uVar7 + 8) = 0;
                  *(undefined4 *)(uVar7 + 0xc) = 0x40000000;
                  if (puVar5[2] <= *puVar5) {
                    FUN_0028a460();
                    puVar5 = DAT_00469888;
                  }
                  uVar7 = *puVar5;
                  *puVar5 = uVar7 + 0x10;
                  if ((int)(puVar5[3] + 1) <= (int)((uVar7 + 0x10) - puVar5[1]) >> 4) {
                    FUN_0028a460();
                    pcVar2 = (char *)&DAT_00405d18;
                    do {
                      pcVar3 = pcVar2;
                      pcVar2 = pcVar3 + 1;
                    } while (*pcVar3 != '\0');
                    pcVar3 = pcVar3 + -0x405d18;
                    if (pcVar3 == (char *)0x0) {
                      iVar6 = 0;
                    }
                    else {
                      iVar6 = (int)((uint)DAT_00405d18 * (int)pcVar3) % 0x1f;
                    }
                    uVar4 = FUN_00294640(&DAT_00405d18,pcVar3,DAT_00469888[0x18] + iVar6 * 0xc);
                    FUN_00292c90(uVar4);
                    puVar5 = DAT_00469888;
                    *(undefined4 *)*DAT_00469888 = 0xffffffff;
                    uVar7 = *puVar5;
                    *(undefined4 *)(uVar7 + 8) = 0;
                    *(undefined4 *)(uVar7 + 0xc) = 0x40100000;
                    if (puVar5[2] <= *puVar5) {
                      FUN_0028a460();
                      puVar5 = DAT_00469888;
                    }
                    uVar7 = *puVar5;
                    *puVar5 = uVar7 + 0x10;
                    if ((int)(puVar5[3] + 1) <= (int)((uVar7 + 0x10) - puVar5[1]) >> 4) {
                      FUN_0028a460();
                      pcVar2 = (char *)&DAT_00405d0c;
                      do {
                        pcVar3 = pcVar2;
                        pcVar2 = pcVar3 + 1;
                      } while (*pcVar3 != '\0');
                      pcVar3 = pcVar3 + -0x405d0c;
                      if (pcVar3 == (char *)0x0) {
                        iVar6 = 0;
                      }
                      else {
                        iVar6 = (int)((uint)DAT_00405d0c * (int)pcVar3) % 0x1f;
                      }
                      uVar4 = FUN_00294640(&DAT_00405d0c,pcVar3,DAT_00469888[0x18] + iVar6 * 0xc);
                      FUN_00292c90(uVar4);
                      puVar5 = DAT_00469888;
                      *(undefined4 *)*DAT_00469888 = 0xffffffff;
                      uVar7 = *puVar5;
                      *(undefined4 *)(uVar7 + 8) = 0;
                      *(undefined4 *)(uVar7 + 0xc) = 0x40200000;
                      if (puVar5[2] <= *puVar5) {
                        FUN_0028a460();
                        puVar5 = DAT_00469888;
                      }
                      uVar7 = *puVar5;
                      *puVar5 = uVar7 + 0x10;
                      if ((int)(puVar5[3] + 1) <= (int)((uVar7 + 0x10) - puVar5[1]) >> 4) {
                        FUN_0028a460();
                        pcVar2 = (char *)&DAT_00405d04;
                        do {
                          pcVar3 = pcVar2;
                          pcVar2 = pcVar3 + 1;
                        } while (*pcVar3 != '\0');
                        pcVar3 = pcVar3 + -0x405d04;
                        if (pcVar3 == (char *)0x0) {
                          iVar6 = 0;
                        }
                        else {
                          iVar6 = (int)((uint)DAT_00405d04 * (int)pcVar3) % 0x1f;
                        }
                        uVar4 = FUN_00294640(&DAT_00405d04,pcVar3,DAT_00469888[0x18] + iVar6 * 0xc);
                        FUN_00292c90(uVar4);
                        puVar5 = DAT_00469888;
                        *(undefined4 *)*DAT_00469888 = 0xffffffff;
                        uVar7 = *puVar5;
                        *(undefined4 *)(uVar7 + 8) = 0;
                        *(undefined4 *)(uVar7 + 0xc) = 0x40500000;
                        if (puVar5[2] <= *puVar5) {
                          FUN_0028a460();
                          puVar5 = DAT_00469888;
                        }
                        uVar7 = *puVar5;
                        *puVar5 = uVar7 + 0x10;
                        if ((int)(puVar5[3] + 1) <= (int)((uVar7 + 0x10) - puVar5[1]) >> 4) {
                          FUN_0028a460();
                          pcVar2 = (char *)&DAT_00405cf4;
                          do {
                            pcVar3 = pcVar2;
                            pcVar2 = pcVar3 + 1;
                          } while (*pcVar3 != '\0');
                          pcVar3 = pcVar3 + -0x405cf4;
                          if (pcVar3 == (char *)0x0) {
                            iVar6 = 0;
                          }
                          else {
                            iVar6 = (int)((uint)DAT_00405cf4 * (int)pcVar3) % 0x1f;
                          }
                          uVar4 = FUN_00294640(&DAT_00405cf4,pcVar3,DAT_00469888[0x18] + iVar6 * 0xc
                                              );
                          FUN_00292c90(uVar4);
                          puVar5 = DAT_00469888;
                          *(undefined4 *)*DAT_00469888 = 0xffffffff;
                          uVar7 = *puVar5;
                          *(undefined4 *)(uVar7 + 8) = 0;
                          *(undefined4 *)(uVar7 + 0xc) = 0x40400000;
                          if (puVar5[2] <= *puVar5) {
                            FUN_0028a460();
                            puVar5 = DAT_00469888;
                          }
                          uVar7 = *puVar5;
                          *puVar5 = uVar7 + 0x10;
                          if ((int)(puVar5[3] + 1) <= (int)((uVar7 + 0x10) - puVar5[1]) >> 4) {
                            FUN_0028a460();
                            pcVar2 = (char *)&DAT_00405ce4;
                            do {
                              pcVar3 = pcVar2;
                              pcVar2 = pcVar3 + 1;
                            } while (*pcVar3 != '\0');
                            pcVar3 = pcVar3 + -0x405ce4;
                            if (pcVar3 == (char *)0x0) {
                              iVar6 = 0;
                            }
                            else {
                              iVar6 = (int)((uint)DAT_00405ce4 * (int)pcVar3) % 0x1f;
                            }
                            uVar4 = FUN_00294640(&DAT_00405ce4,pcVar3,
                                                 DAT_00469888[0x18] + iVar6 * 0xc);
                            FUN_00292c90(uVar4);
                            puVar5 = DAT_00469888;
                            *(undefined4 *)*DAT_00469888 = 0xffffffff;
                            uVar7 = *puVar5;
                            *(undefined4 *)(uVar7 + 8) = 0;
                            *(undefined4 *)(uVar7 + 0xc) = 0;
                            if (puVar5[2] <= *puVar5) {
                              FUN_0028a460();
                              puVar5 = DAT_00469888;
                            }
                            uVar7 = *puVar5;
                            *puVar5 = uVar7 + 0x10;
                            if ((int)(puVar5[3] + 1) <= (int)((uVar7 + 0x10) - puVar5[1]) >> 4) {
                              FUN_0028a460();
                              pcVar2 = (char *)&DAT_00405cdc;
                              do {
                                pcVar3 = pcVar2;
                                pcVar2 = pcVar3 + 1;
                              } while (*pcVar3 != '\0');
                              pcVar3 = pcVar3 + -0x405cdc;
                              if (pcVar3 == (char *)0x0) {
                                iVar6 = 0;
                              }
                              else {
                                iVar6 = (int)((uint)DAT_00405cdc * (int)pcVar3) % 0x1f;
                              }
                              uVar4 = FUN_00294640(&DAT_00405cdc,pcVar3,
                                                   DAT_00469888[0x18] + iVar6 * 0xc);
                              FUN_00292c90(uVar4);
                              puVar5 = DAT_00469888;
                              *(undefined4 *)*DAT_00469888 = 0xffffffff;
                              uVar7 = *puVar5;
                              *(undefined4 *)(uVar7 + 8) = 0;
                              *(undefined4 *)(uVar7 + 0xc) = 0x40000000;
                              if (puVar5[2] <= *puVar5) {
                                FUN_0028a460();
                                puVar5 = DAT_00469888;
                              }
                              uVar7 = *puVar5;
                              *puVar5 = uVar7 + 0x10;
                              if ((int)(puVar5[3] + 1) <= (int)((uVar7 + 0x10) - puVar5[1]) >> 4) {
                                FUN_0028a460();
                                pcVar2 = (char *)&DAT_00405cd4;
                                do {
                                  pcVar3 = pcVar2;
                                  pcVar2 = pcVar3 + 1;
                                } while (*pcVar3 != '\0');
                                pcVar3 = pcVar3 + -0x405cd4;
                                if (pcVar3 == (char *)0x0) {
                                  iVar6 = 0;
                                }
                                else {
                                  iVar6 = (int)((uint)DAT_00405cd4 * (int)pcVar3) % 0x1f;
                                }
                                uVar4 = FUN_00294640(&DAT_00405cd4,pcVar3,
                                                     DAT_00469888[0x18] + iVar6 * 0xc);
                                FUN_00292c90(uVar4);
                                puVar5 = DAT_00469888;
                                *(undefined4 *)*DAT_00469888 = 0xffffffff;
                                uVar7 = *puVar5;
                                *(undefined4 *)(uVar7 + 8) = 0;
                                *(undefined4 *)(uVar7 + 0xc) = 0x3ff00000;
                                if (puVar5[2] <= *puVar5) {
                                  FUN_0028a460();
                                  puVar5 = DAT_00469888;
                                }
                                uVar7 = *puVar5;
                                *puVar5 = uVar7 + 0x10;
                                if ((int)(puVar5[3] + 1) <= (int)((uVar7 + 0x10) - puVar5[1]) >> 4)
                                {
                                  FUN_0028a460();
                                  pcVar2 = (char *)&DAT_00405fec;
                                  do {
                                    pcVar3 = pcVar2;
                                    pcVar2 = pcVar3 + 1;
                                  } while (*pcVar3 != '\0');
                                  pcVar3 = pcVar3 + -0x405fec;
                                  if (pcVar3 == (char *)0x0) {
                                    iVar6 = 0;
                                  }
                                  else {
                                    iVar6 = (int)((uint)DAT_00405fec * (int)pcVar3) % 0x1f;
                                  }
                                  uVar4 = FUN_00294640(&DAT_00405fec,pcVar3,
                                                       DAT_00469888[0x18] + iVar6 * 0xc);
                                  FUN_00292c90(uVar4);
                                  puVar5 = DAT_00469888;
                                  *(undefined4 *)*DAT_00469888 = 0xffffffff;
                                  uVar7 = *puVar5;
                                  *(undefined4 *)(uVar7 + 8) = 0;
                                  *(undefined4 *)(uVar7 + 0xc) = 0x40180000;
                                  if (puVar5[2] <= *puVar5) {
                                    FUN_0028a460();
                                    puVar5 = DAT_00469888;
                                  }
                                  uVar7 = *puVar5;
                                  *puVar5 = uVar7 + 0x10;
                                  if ((int)(puVar5[3] + 1) <= (int)((uVar7 + 0x10) - puVar5[1]) >> 4
                                     ) {
                                    FUN_0028a460();
                                    pcVar2 = (char *)&DAT_00405cc8;
                                    do {
                                      pcVar3 = pcVar2;
                                      pcVar2 = pcVar3 + 1;
                                    } while (*pcVar3 != '\0');
                                    pcVar3 = pcVar3 + -0x405cc8;
                                    if (pcVar3 == (char *)0x0) {
                                      iVar6 = 0;
                                    }
                                    else {
                                      iVar6 = (int)((uint)DAT_00405cc8 * (int)pcVar3) % 0x1f;
                                    }
                                    uVar4 = FUN_00294640(&DAT_00405cc8,pcVar3,
                                                         DAT_00469888[0x18] + iVar6 * 0xc);
                                    FUN_00292c90(uVar4);
                                    puVar5 = DAT_00469888;
                                    *(undefined4 *)*DAT_00469888 = 0xffffffff;
                                    uVar7 = *puVar5;
                                    *(undefined4 *)(uVar7 + 8) = 0;
                                    *(undefined4 *)(uVar7 + 0xc) = 0x40200000;
                                    if (puVar5[2] <= *puVar5) {
                                      FUN_0028a460();
                                      puVar5 = DAT_00469888;
                                    }
                                    uVar7 = *puVar5;
                                    *puVar5 = uVar7 + 0x10;
                                    if ((int)(puVar5[3] + 1) <=
                                        (int)((uVar7 + 0x10) - puVar5[1]) >> 4) {
                                      FUN_0028a460();
                                      pcVar2 = (char *)&DAT_00405cb8;
                                      do {
                                        pcVar3 = pcVar2;
                                        pcVar2 = pcVar3 + 1;
                                      } while (*pcVar3 != '\0');
                                      pcVar3 = pcVar3 + -0x405cb8;
                                      if (pcVar3 == (char *)0x0) {
                                        iVar6 = 0;
                                      }
                                      else {
                                        iVar6 = (int)((uint)DAT_00405cb8 * (int)pcVar3) % 0x1f;
                                      }
                                      uVar4 = FUN_00294640(&DAT_00405cb8,pcVar3,
                                                           DAT_00469888[0x18] + iVar6 * 0xc);
                                      FUN_00292c90(uVar4);
                                      puVar5 = DAT_00469888;
                                      *(undefined4 *)*DAT_00469888 = 0xffffffff;
                                      uVar7 = *puVar5;
                                      *(undefined4 *)(uVar7 + 8) = 0;
                                      *(undefined4 *)(uVar7 + 0xc) = 0x40300000;
                                      if (puVar5[2] <= *puVar5) {
                                        FUN_0028a460();
                                        puVar5 = DAT_00469888;
                                      }
                                      uVar7 = *puVar5;
                                      *puVar5 = uVar7 + 0x10;
                                      if ((int)(puVar5[3] + 1) <=
                                          (int)((uVar7 + 0x10) - puVar5[1]) >> 4) {
                                        FUN_0028a460();
                                        pcVar2 = (char *)&DAT_00405cb0;
                                        do {
                                          pcVar3 = pcVar2;
                                          pcVar2 = pcVar3 + 1;
                                        } while (*pcVar3 != '\0');
                                        pcVar3 = pcVar3 + -0x405cb0;
                                        if (pcVar3 == (char *)0x0) {
                                          iVar6 = 0;
                                        }
                                        else {
                                          iVar6 = (int)((uint)DAT_00405cb0 * (int)pcVar3) % 0x1f;
                                        }
                                        uVar4 = FUN_00294640(&DAT_00405cb0,pcVar3,
                                                             DAT_00469888[0x18] + iVar6 * 0xc);
                                        FUN_00292c90(uVar4);
                                        puVar5 = DAT_00469888;
                                        *(undefined4 *)*DAT_00469888 = 0xffffffff;
                                        uVar7 = *puVar5;
                                        *(undefined4 *)(uVar7 + 8) = 0;
                                        *(undefined4 *)(uVar7 + 0xc) = 0x40310000;
                                        if (puVar5[2] <= *puVar5) {
                                          FUN_0028a460();
                                          puVar5 = DAT_00469888;
                                        }
                                        uVar7 = *puVar5;
                                        *puVar5 = uVar7 + 0x10;
                                        if ((int)(puVar5[3] + 1) <=
                                            (int)((uVar7 + 0x10) - puVar5[1]) >> 4) {
                                          FUN_0028a460();
                                          pcVar2 = (char *)&DAT_00405ca8;
                                          do {
                                            pcVar3 = pcVar2;
                                            pcVar2 = pcVar3 + 1;
                                          } while (*pcVar3 != '\0');
                                          pcVar3 = pcVar3 + -0x405ca8;
                                          if (pcVar3 == (char *)0x0) {
                                            iVar6 = 0;
                                          }
                                          else {
                                            iVar6 = (int)((uint)DAT_00405ca8 * (int)pcVar3) % 0x1f;
                                          }
                                          uVar4 = FUN_00294640(&DAT_00405ca8,pcVar3,
                                                               DAT_00469888[0x18] + iVar6 * 0xc);
                                          FUN_00292c90(uVar4);
                                          puVar5 = DAT_00469888;
                                          *(undefined4 *)*DAT_00469888 = 0xffffffff;
                                          uVar7 = *puVar5;
                                          *(undefined4 *)(uVar7 + 8) = 0;
                                          *(undefined4 *)(uVar7 + 0xc) = 0x40320000;
                                          if (puVar5[2] <= *puVar5) {
                                            FUN_0028a460();
                                            puVar5 = DAT_00469888;
                                          }
                                          uVar7 = *puVar5;
                                          *puVar5 = uVar7 + 0x10;
                                          if ((int)(puVar5[3] + 1) <=
                                              (int)((uVar7 + 0x10) - puVar5[1]) >> 4) {
                                            FUN_0028a460();
                                            pcVar2 = (char *)&DAT_00405ca0;
                                            do {
                                              pcVar3 = pcVar2;
                                              pcVar2 = pcVar3 + 1;
                                            } while (*pcVar3 != '\0');
                                            pcVar3 = pcVar3 + -0x405ca0;
                                            if (pcVar3 == (char *)0x0) {
                                              iVar6 = 0;
                                            }
                                            else {
                                              iVar6 = (int)((uint)DAT_00405ca0 * (int)pcVar3) % 0x1f
                                              ;
                                            }
                                            uVar4 = FUN_00294640(&DAT_00405ca0,pcVar3,
                                                                 DAT_00469888[0x18] + iVar6 * 0xc);
                                            FUN_00292c90(uVar4);
                                            puVar5 = DAT_00469888;
                                            *(undefined4 *)*DAT_00469888 = 0xffffffff;
                                            uVar7 = *puVar5;
                                            *(undefined4 *)(uVar7 + 8) = 0;
                                            *(undefined4 *)(uVar7 + 0xc) = 0;
                                            if (puVar5[2] <= *puVar5) {
                                              FUN_0028a460();
                                              puVar5 = DAT_00469888;
                                            }
                                            uVar7 = *puVar5;
                                            *puVar5 = uVar7 + 0x10;
                                            if ((int)(puVar5[3] + 1) <=
                                                (int)((uVar7 + 0x10) - puVar5[1]) >> 4) {
                                              FUN_0028a460();
                                              pcVar2 = (char *)&DAT_00405c90;
                                              do {
                                                pcVar3 = pcVar2;
                                                pcVar2 = pcVar3 + 1;
                                              } while (*pcVar3 != '\0');
                                              pcVar3 = pcVar3 + -0x405c90;
                                              if (pcVar3 == (char *)0x0) {
                                                iVar6 = 0;
                                              }
                                              else {
                                                iVar6 = (int)((uint)DAT_00405c90 * (int)pcVar3) %
                                                        0x1f;
                                              }
                                              uVar4 = FUN_00294640(&DAT_00405c90,pcVar3,
                                                                   DAT_00469888[0x18] + iVar6 * 0xc)
                                              ;
                                              FUN_00292c90(uVar4);
                                              FUN_0028a460();
                                              pcVar2 = (char *)&DAT_00405c50;
                                              do {
                                                pcVar3 = pcVar2;
                                                pcVar2 = pcVar3 + 1;
                                              } while (*pcVar3 != '\0');
                                              pcVar3 = pcVar3 + -0x405c50;
                                              if (pcVar3 == (char *)0x0) {
                                                iVar6 = 0;
                                              }
                                              else {
                                                iVar6 = (int)((uint)DAT_00405c50 * (int)pcVar3) %
                                                        0x1f;
                                              }
                                              FUN_00294640(&DAT_00405c50,pcVar3,
                                                           DAT_00469888[0x18] + iVar6 * 0xc);
                                              FUN_00292ba0();
                                              DAT_0044363c = FUN_00289600();
                                              return;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_0028aa90(s_API_error___wrong_number_of_argu_00404bf8);
  if ((__jmp_buf_tag *)DAT_00469888[6] != (__jmp_buf_tag *)0x0) {
    _longjmp((__jmp_buf_tag *)DAT_00469888[6],1);
  }
  FUN_0028aa90(s_exit_1___Unable_to_recover__00404a8c);
                    /* WARNING: Subroutine does not return */
  FUN_002eba1d(1);
}
