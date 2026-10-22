/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B2B533599B2D3A232FD1112F931648B98209501F49C3930D08E70375E41C9C6F
 * Entry: 0x0007bc40, Ghidra index: 1471, label: FUN_0007bc40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400554;
extern uint32_t DAT_00400568;
extern uint32_t *DAT_00469908;
extern char s_global_gameflags_0040dca0[];
extern char s_global_gameflags_s_0040dcb4[];
bool FUN_0007bc40(undefined4 param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  int unaff_ESI;
  bool local_10d;
  int *local_10c;
  int *local_108;
  undefined1 local_104 [260];
  
  local_10d = false;
  puVar3 = (undefined4 *)FUN_002ea01d(0x2c);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[10] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
  }
  *(undefined4 **)(unaff_ESI + 0x64c) = puVar3;
  puVar3 = DAT_00400554;
  if (DAT_00400568 < 0x10) {
    puVar3 = &DAT_00400554;
  }
  FUN_002eaa19(local_104,0x104,s_global_gameflags_s_0040dcb4,puVar3);
  iVar4 = *(int *)(unaff_ESI + 0x64c);
  *(undefined4 *)(iVar4 + 0x20) = 0;
  *(undefined4 *)(iVar4 + 0x24) = 0;
  cVar2 = FUN_00077fb0(iVar4,s_global_gameflags_0040dca0);
  if (cVar2 != '\0') {
    local_10c = (int *)0x0;
    local_108 = (int *)0x0;
    if (*(int *)(unaff_ESI + 0x64c) != 0) {
      cVar2 = FUN_00078280(*(int *)(unaff_ESI + 0x64c),&local_108);
      piVar1 = local_108;
      if (cVar2 != '\0') {
        FUN_00078230();
        if (local_10c != (int *)0x0) {
          (**(code **)(*local_10c + 8))(local_10c);
          local_10c = (int *)0x0;
        }
        iVar4 = (**(code **)(*DAT_00469908 + 0xc))(DAT_00469908,param_1,0x80000000,&local_10c);
        if (-1 < iVar4) {
          iVar4 = FUN_00076a80();
          local_10d = -1 < iVar4;
        }
      }
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      if (local_10c != (int *)0x0) {
        (**(code **)(*local_10c + 8))(local_10c);
      }
    }
  }
  return local_10d;
}
