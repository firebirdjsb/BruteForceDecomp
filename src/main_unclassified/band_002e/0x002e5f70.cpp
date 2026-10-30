/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 69B9A32D5501E9EF26E2BDB122F01C99D27C1352ADA7BE270971465D44C670F0
 * Entry: 0x002e5f70, Ghidra index: 10494, label: FUN_002e5f70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00386738;
int FUN_002e5f70(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int local_28;
  undefined **local_20 [6];
  undefined4 local_8;
  int *local_4;
  
  local_28 = 0;
  iVar2 = XAPILIB__GetTickCount();
  if (((uint)(iVar2 - *(int *)(in_ECX + 0x48c0)) <= *(uint *)(in_ECX + 0x48c4)) ||
     (local_28 = FUN_002e5f00(), -1 < local_28)) {
    piVar5 = (int *)(in_ECX + 0x38);
    piVar3 = (int *)(in_ECX + 0x48cc);
    iVar4 = 0x1e;
    do {
      cVar1 = FUN_002e4940();
      if ((cVar1 != '\0') && (*(uint *)(in_ECX + 0x48c8) < (uint)(iVar2 - *piVar3))) {
        FUN_002e8c40();
        local_20[0] = &PTR_FUN_00386738;
        local_8 = 3;
        local_4 = piVar5;
        FUN_002e7f50(0,local_20,1,1);
        FUN_002e4880(0);
        (**(code **)(*piVar5 + 0x18))();
        FUN_002e8b80();
      }
      piVar3 = piVar3 + 1;
      piVar5 = piVar5 + 0x9a;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return local_28;
}
