/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AF7470DD5E4BFA966806E40FCAE8A1456BCFBDB58277C7A0E8E8579A55668831
 * Entry: 0x0033ca6a, Ghidra index: 12565, label: FUN_0033ca6a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004b0948;
extern uint32_t DAT_004b094a;
extern uint32_t DAT_004b094c;
extern uint32_t DAT_004b094e;
extern uint32_t DAT_004b0950;
undefined4 FUN_0033ca6a(undefined4 *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  int local_20 [5];
  uint local_c;
  int local_8;
  
  *param_1 = 1;
  iVar2 = XAPILIB__GetFileSize(in_ECX[1],0);
  iVar3 = FUN_0033ca1c();
  if (iVar2 == iVar3 * 0x200) {
    puVar1 = (uint *)in_ECX[5];
    iVar2 = *in_ECX * 10;
    if ((((*puVar1 == (uint)*(ushort *)(&DAT_004b0948 + iVar2)) &&
         (puVar1[1] == (uint)*(ushort *)(&DAT_004b094a + iVar2))) &&
        (puVar1[2] == (uint)*(ushort *)(&DAT_004b094c + iVar2))) &&
       ((puVar1[3] == (uint)*(ushort *)(&DAT_004b094e + iVar2) &&
        (puVar1[4] == (uint)*(ushort *)(&DAT_004b0950 + iVar2))))) {
      local_c = 0;
      if (in_ECX[4] != 0) {
        local_8 = 0;
        do {
          iVar2 = local_8 + in_ECX[3];
          XcHMAC(XboxHDKey_exref,0x10,iVar2,500,0,0,local_20);
          iVar3 = 3;
          bVar7 = true;
          piVar5 = local_20;
          piVar6 = (int *)(iVar2 + 500);
          do {
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            bVar7 = *piVar5 == *piVar6;
            piVar5 = piVar5 + 1;
            piVar6 = piVar6 + 1;
          } while (bVar7);
          if (!bVar7) goto LAB_0033cb4e;
          local_c = local_c + 1;
          local_8 = local_8 + 0x200;
        } while (local_c < (uint)in_ECX[4]);
      }
      *param_1 = 0;
    }
LAB_0033cb4e:
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0033ec4e(in_ECX[1],iVar3 * 0x200);
  }
  return uVar4;
}
