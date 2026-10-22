/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 86BD9B78DD8DB5221FB984328F787DA33A22753951DBCAD86D1C07BC16962C54
 * Entry: 0x002f81f9, Ghidra index: 10944, label: XapiInitProcess
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_external_import_addresses_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b6894;
extern uint32_t DAT_003b7848;
extern uint32_t DAT_003b7858;
extern uint32_t DAT_004a90d4;
extern uint32_t PTR_LAB_003b7850;
extern uint32_t PTR_LAB_003b78c0;
void XAPILIB__XapiInitProcess(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  dword dVar8;
  undefined4 local_38 [12];
  dword local_8;
  
  uVar4 = 1;
  local_8 = 0;
  HalRegisterShutdownNotification(&PTR_LAB_003b78c0,1);
  FUN_002f8be1();
  puVar5 = local_38;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_38[0] = 0x30;
  DAT_004a90d4 = FUN_002f6a0d(2,0,0x100000,0x1000,0,local_38);
  uVar7 = uVar4;
  dVar8 = local_8;
  if (DAT_004a90d4 != 0) {
    iVar3 = FUN_002f801f();
    if (iVar3 < 0) {
      uVar4 = 0;
      uVar7 = 0;
      dVar8 = 0;
    }
    else {
      iVar3 = FUN_002f81e8(&DAT_003b7858);
      if (-1 < iVar3) {
        if (((((byte)*XboxHardwareInfo_exref & 8) == 0) &&
            (iVar3 = IoCreateSymbolicLink(&DAT_003b7848,&PTR_LAB_003b7850), iVar3 < 0)) &&
           (dVar8 = local_8, iVar3 != -0x3fffffcb)) goto LAB_002f82a3;
        iVar3 = FUN_002f7eae(XBE_CERTIFICATE_HEADER_00010180.TitleID,0x1018c);
        if (-1 < iVar3) {
          iVar3 = XMountUtilityDrive(0);
          if (iVar3 == 0) {
            XapiBootToDash(1,2,0);
          }
          uVar2 = XGetParentalControlSetting();
          if (uVar2 <= XBE_CERTIFICATE_HEADER_00010180.GameRatings) {
            piVar6 = (int *)0x0;
            if (((LaunchDataPage_exref != (code *)0x0) &&
                (piVar1 = *(int **)LaunchDataPage_exref, piVar1 != (int *)0x0)) &&
               (piVar6 = piVar1, (*(byte *)(piVar1 + 0x85) & 1) != 0)) {
              *piVar1 = piVar1[0x86];
            }
            puVar5 = &DAT_003b6894;
            do {
              if ((code *)*puVar5 != (code *)0x0) {
                (*(code *)*puVar5)();
              }
              puVar5 = puVar5 + 1;
            } while (puVar5 < (undefined4 *)0x3b689c);
            if (piVar6 == (int *)0x0) {
              return;
            }
            if (*piVar6 != -1) {
              return;
            }
            *(undefined4 *)LaunchDataPage_exref = 0;
            MmFreeContiguousMemory(piVar6);
            return;
          }
          local_8 = XBE_CERTIFICATE_HEADER_00010180.GameRatings;
          uVar4 = 1;
          uVar7 = 4;
          dVar8 = XBE_CERTIFICATE_HEADER_00010180.GameRatings;
          goto LAB_002f82a3;
        }
        if (iVar3 == -0x3fffff81) {
          local_8 = 0x10;
          uVar4 = 2;
          uVar7 = 0x54;
          dVar8 = local_8;
          goto LAB_002f82a3;
        }
      }
      uVar4 = 1;
      uVar7 = 2;
      dVar8 = local_8;
    }
  }
LAB_002f82a3:
  XapiBootToDash(uVar4,uVar7,dVar8);
  return;
}
