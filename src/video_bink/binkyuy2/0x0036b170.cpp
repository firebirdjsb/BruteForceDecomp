/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8207C861D9B8E8228D48DE36ED993423382DFBB4DAC6AB3197DBC423597D1571
 * Entry: 0x0036b170, Ghidra index: 13274, label: FUN_0036b170
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_004be760;
extern uint32_t *DAT_004be764;
extern uint32_t *DAT_004be768;
extern uint32_t *DAT_004be76c;
extern uint32_t *DAT_004be770;
extern uint32_t *DAT_004be774;
undefined4 FUN_0036b170(int param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_EAX;
  undefined4 *puVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  puVar1 = DAT_004be760 + param_1 + -2;
  puVar5 = DAT_004be774;
  puVar6 = DAT_004be770;
  do {
    uVar3 = *puVar6;
    uVar4 = *puVar5;
    uVar2 = *DAT_004be768;
    puVar6 = puVar6 + 1;
    puVar5 = puVar5 + 1;
    *DAT_004be760 =
         CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11((char)((uint)uVar4 >> 8),
                                                               (char)((ulonglong)uVar2 >> 0x18)),
                                                      (char)((uint)uVar3 >> 8)),
                                             (char)((ulonglong)uVar2 >> 0x10)),(char)uVar4),
                           (char)((ulonglong)uVar2 >> 8)),CONCAT11((char)uVar3,(char)uVar2));
    DAT_004be768 = DAT_004be768 + 1;
    bVar7 = DAT_004be760 < puVar1;
    DAT_004be760[1] =
         CONCAT17((char)((uint)uVar4 >> 0x18),
                  CONCAT16((char)((ulonglong)uVar2 >> 0x38),
                           CONCAT15((char)((uint)uVar3 >> 0x18),
                                    CONCAT14((char)((ulonglong)uVar2 >> 0x30),
                                             CONCAT13((char)((uint)uVar4 >> 0x10),
                                                      CONCAT12((char)((ulonglong)uVar2 >> 0x28),
                                                               CONCAT11((char)((uint)uVar3 >> 0x10),
                                                                        (char)((ulonglong)uVar2 >>
                                                                              0x20))))))));
    DAT_004be760 = DAT_004be760 + 2;
  } while (bVar7);
  puVar1 = DAT_004be764 + param_1 + -2;
  do {
    uVar3 = *DAT_004be770;
    uVar4 = *DAT_004be774;
    uVar2 = *DAT_004be76c;
    DAT_004be770 = DAT_004be770 + 1;
    DAT_004be774 = DAT_004be774 + 1;
    *DAT_004be764 =
         CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11((char)((uint)uVar4 >> 8),
                                                               (char)((ulonglong)uVar2 >> 0x18)),
                                                      (char)((uint)uVar3 >> 8)),
                                             (char)((ulonglong)uVar2 >> 0x10)),(char)uVar4),
                           (char)((ulonglong)uVar2 >> 8)),CONCAT11((char)uVar3,(char)uVar2));
    DAT_004be76c = DAT_004be76c + 1;
    bVar7 = DAT_004be764 < puVar1;
    DAT_004be764[1] =
         CONCAT17((char)((uint)uVar4 >> 0x18),
                  CONCAT16((char)((ulonglong)uVar2 >> 0x38),
                           CONCAT15((char)((uint)uVar3 >> 0x18),
                                    CONCAT14((char)((ulonglong)uVar2 >> 0x30),
                                             CONCAT13((char)((uint)uVar4 >> 0x10),
                                                      CONCAT12((char)((ulonglong)uVar2 >> 0x28),
                                                               CONCAT11((char)((uint)uVar3 >> 0x10),
                                                                        (char)((ulonglong)uVar2 >>
                                                                              0x20))))))));
    DAT_004be764 = DAT_004be764 + 2;
  } while (bVar7);
  return in_EAX;
}
