/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ACE4A1404F082B6FF74E80AC5F30978AC34BCC922E3A5E1E98EAADB83DA88B1A
 * Entry: 0x0021abe0, Ghidra index: 7515, label: FUN_0021abe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
void FUN_0021abe0(void)

{
  undefined4 *puVar1;
  bool bVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int *unaff_EBX;
  undefined4 *puVar7;
  float10 extraout_ST0;
  float10 fVar8;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 uStack_60;
  
  puVar1 = (undefined4 *)unaff_EBX[0x3d];
  if (puVar1 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = (undefined4 *)*puVar1;
  }
  do {
    if (puVar7 == puVar1) {
      return;
    }
    uVar6 = 0;
    if ((puVar7[3] != 0) && (cVar4 = (**(code **)(*DAT_00469940 + 0x2c))(puVar7[3]), cVar4 == '\0'))
    {
      (**(code **)(*DAT_00469940 + 0x20))(puVar7[3],1);
      puVar7[3] = 0;
      *(undefined1 *)(puVar7 + 4) = 0;
    }
    iVar5 = puVar7[2];
    if (((float)unaff_EBX[0x2a] <= *(float *)(iVar5 + 4)) ||
       (*(float *)(iVar5 + 8) + *(float *)(iVar5 + 4) <= (float)unaff_EBX[0x2a])) {
      if ((puVar7[3] != 0) &&
         (cVar4 = (**(code **)(*DAT_00469940 + 0x2c))(puVar7[3]), cVar4 != '\0')) {
        (**(code **)(*DAT_00469940 + 0x20))(puVar7[3],1);
        puVar7[3] = 0;
      }
      *(undefined1 *)(puVar7 + 4) = 0;
    }
    else {
      bVar2 = false;
      if (*(char *)(iVar5 + 0xc) == '\0') {
        uStack_70 = puVar7[3];
        iVar5 = FUN_0017beb0(&uStack_70);
        fVar8 = extraout_ST0;
        if (iVar5 != 0) {
          fVar8 = (float10)(**(code **)(*DAT_00469940 + 100))(iVar5 + 4);
        }
        iVar5 = puVar7[2];
        if (fVar8 < (float10)*(float *)(iVar5 + 8)) {
          bVar2 = true;
        }
      }
      if (*(char *)(puVar7 + 4) == '\0') {
        if (puVar7[3] == 0) {
          if (bVar2) goto LAB_0021acde;
          iVar5 = FUN_0017beb0(iVar5);
          if (iVar5 != 0) {
            /* XBE 0x0021AD56 stores EBX at entry ESP-0x78 and
             * 0x0021AD5A stores the flags BYTE at entry ESP-0x74.
             * Following the callee-cleaned resource lookup,
             * 0x0021AD67 LEA EAX,[ESP+0x1C] addresses BOTH words.
             * FUN_00178E50 reads [EBP+0] and low two flag bits of
             * [EBP+4] (0x00178E59, 0x00178EB8-0x00178EDA).
             * Do not fabricate a native host stack address.
             * The implicit guest EAX input to the callee remains
             * ABI_UNVERIFIED until linked register-adapter work. */
            uint32_t guest_request_words[2];
            guest_request_words[0] = (uint32_t)(uintptr_t)unaff_EBX;
            guest_request_words[1] =
                (uint32_t)((*(uint8_t *)(iVar5 + 0xc) & 1U) | 2U);
            uVar6 = FUN_00178e50((int *)guest_request_words);
          }
          piVar3 = DAT_00469940;
          puVar7[3] = uVar6;
          (**(code **)(*piVar3 + 0x50))(uVar6,0,0x3f400000);
          *(undefined1 *)(puVar7 + 4) = 1;
        }
        else if (bVar2) {
LAB_0021acde:
          FUN_0003f010();
          iVar5 = (**(code **)(*unaff_EBX + 0x40))();
          uStack_60 = 1;
          uStack_64 = *(undefined4 *)(iVar5 + 0x2c);
          uStack_68 = *(undefined4 *)(iVar5 + 0x28);
          uStack_6c = *(undefined4 *)(iVar5 + 0x24);
          FUN_00179250(*(undefined4 *)(unaff_EBX[2] + 0x208),*(undefined4 *)puVar7[2],5);
          *(undefined1 *)(puVar7 + 4) = 1;
        }
      }
    }
    puVar7 = (undefined4 *)*puVar7;
  } while( true );
}
