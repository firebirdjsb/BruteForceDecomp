/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6EDDBC2BBA01579DD596B862A2AF897D38DB1B5BE5BCA9731D191CFB84000141
 * Entry: 0x0007a400, Ghidra index: 1456, label: FUN_0007a400
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_00086260(void);
extern void FUN_000764c0(undefined4 param_1);
extern uint32_t FUN_002ea01d(uint32_t guest_size);
extern void FUN_001e0ef0(void);
extern void FUN_0001fed0(undefined4 *param_1,uint param_2);
extern void FUN_0001f4f0(int param_1,uint param_2,uint param_3);
extern void FUN_001e8a20(void);
extern void FUN_000784c0(uint param_1);
extern int FUN_0023a790(void);
extern int FUN_002eaa70(short *param_1);
extern int FUN_000876a0(int param_1,uint param_2);
extern void FUN_000854b0(void);
extern void FUN_000762d0(void);

extern uint32_t DAT_00400304;
extern uint32_t DAT_00400534;
extern uint32_t *DAT_00469908;
extern uint32_t PTR_LAB_00397040;
extern uint32_t PTR_LAB_00397060;
undefined1 FUN_0007a400(void)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  undefined4 ****ppppuVar7;
  char *pcVar8;
  undefined1 local_89;
  int *local_88;
  undefined1 local_84 [4];
  char *local_80;
  char *local_7c;
  undefined4 local_78;
  uint local_70;
  undefined4 local_60;
  uint local_5c;
  undefined4 ***local_54 [4];
  undefined4 local_44;
  uint local_40;
  undefined1 auStack_3c [4];
  uint uStack_38;
  undefined4 uStack_28;
  uint uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_4;
  
  local_89 = 0;
  local_80 = (char *)0x0;
  local_7c = (char *)0x0;
  local_78 = 0;
  uVar2 = FUN_00086260(&DAT_00400534);
  FUN_000764c0(uVar2);
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(local_70);
  }
  uVar2 = FUN_00086260(&DAT_00400534);
  FUN_000764c0(uVar2);
  if (local_5c < 0x10) {
    if (local_80 != local_7c) {
      pcVar8 = local_80 + 4;
      do {
        local_88 = (int *)0x0;
        piVar3 = (int *)FUN_002ea01d(0x3c);
        if (piVar3 == (int *)0x0) {
          piVar3 = (int *)0x0;
        }
        else {
          FUN_001e0ef0();
          piVar3[0xe] = 1;
          *piVar3 = (int)&PTR_LAB_00397060;
          piVar3[5] = (int)&PTR_LAB_00397040;
        }
        if (-1 < (int)((piVar3 != (int *)0x0) - 1)) {
          local_40 = 0xf;
          local_44 = 0;
          local_54[0] = (undefined4 ***)((uint)local_54[0] & 0xffffff00);
          pcVar6 = pcVar8;
          if (0xf < *(uint *)(pcVar8 + 0x14)) {
            pcVar6 = *(char **)pcVar8;
          }
          local_5c = 0xf;
          local_60 = 0;
          local_70 = local_70 & 0xffffff00;
          pcVar4 = pcVar6;
          do {
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\0');
          FUN_0001fed0(pcVar6,(int)pcVar4 - (int)(pcVar6 + 1));
          FUN_0001f4f0(&DAT_00400304,0,0xffffffff);
          FUN_001e8a20();
          FUN_000784c0(0);
          FUN_000784c0(0);
          if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00237ec0(local_70);
          }
          local_5c = 0xf;
          local_60 = 0;
          local_70 = local_70 & 0xffffff00;
          if (local_88 != (int *)0x0) {
            (**(code **)(*local_88 + 8))(local_88);
            local_88 = (int *)0x0;
          }
          ppppuVar7 = (undefined4 ****)local_54[0];
          if (local_40 < 0x10) {
            ppppuVar7 = local_54;
          }
          iVar5 = (**(code **)(*DAT_00469908 + 0xc))(DAT_00469908,ppppuVar7,0x80000000,&local_88);
          if (-1 < iVar5) {
            uStack_24 = 7;
            uStack_28 = 0;
            uStack_38 = uStack_38 & 0xffff0000;
            uStack_20 = 0;
            uStack_4 = 0;
            iVar5 = FUN_0023a790(0x125c59b6,1);
            if (iVar5 != 0) {
              uVar2 = FUN_001e97c0();
              uVar2 = FUN_002eaa70(uVar2);
              FUN_000876a0(auStack_3c,uVar2);
              FUN_000854b0();
              local_89 = 1;
            }
            if (7 < uStack_24) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00237ec0(uStack_38);
            }
            uStack_24 = 7;
            uStack_28 = 0;
            uStack_38 = uStack_38 & 0xffff0000;
          }
          if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00237ec0(local_54[0]);
          }
          local_44 = 0;
          local_54[0] = (undefined4 ***)((uint)local_54[0] & 0xffffff00);
          local_40 = 0xf;
        }
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))(piVar3);
        }
        if (local_88 != (int *)0x0) {
          (**(code **)(*local_88 + 8))(local_88);
        }
        pcVar6 = pcVar8 + 0x18;
        pcVar8 = pcVar8 + 0x1c;
      } while (pcVar6 != local_7c);
    }
    pcVar8 = local_80;
    if (local_80 == (char *)0x0) {
      return local_89;
    }
    FUN_000762d0(local_84,local_88);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(pcVar8);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(local_70);
}
