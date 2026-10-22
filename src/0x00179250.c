/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CB1EA71F9AD01214C110BE06083C195FEDE29FB12ECD8C6566F328EFD9FF8D70
 * Entry: 0x00179250, Ghidra index: 4984, label: FUN_00179250
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469940;
extern uint32_t PTR_LAB_00399db0;
undefined1 FUN_00179250(int param_1,int param_2,undefined1 param_3)

{
  bool bVar1;
  byte in_AL;
  char cVar2;
  int iVar3;
  byte bVar4;
  undefined4 in_ECX;
  float10 fVar5;
  int local_84;
  undefined **local_80;
  int local_7c;
  char local_6c;
  undefined4 local_c;
  float local_8;
  undefined1 local_4;
  byte local_3;
  
  if (param_2 == 0) {
    return 0;
  }
  local_80 = &PTR_LAB_00399db0;
  FUN_0003f010();
  local_7c = param_2;
  cVar2 = FUN_00178f40();
  if (cVar2 == '\0') {
    FUN_00179c00();
    bVar4 = local_3 | 1;
  }
  else {
    bVar4 = local_3 & 0xfe;
  }
  local_3 = (in_AL & 1) << 1 | bVar4 & 0xf9;
  local_4 = param_3;
  local_c = 0;
  local_8 = 0.0;
  if (((in_AL == 0) || ((bVar4 & 1) == 0)) || (local_6c == '\0')) {
    bVar1 = true;
  }
  else {
    local_84 = param_2;
    iVar3 = FUN_0017beb0(&local_84);
    if (iVar3 == 0) {
      return 0;
    }
    fVar5 = (float10)FUN_0017e5e0(DAT_00469940,in_ECX);
    bVar1 = false;
    if (fVar5 < (float10)*(float *)(iVar3 + 0xc) == (fVar5 == (float10)*(float *)(iVar3 + 0xc))) {
      return 0;
    }
    local_c = *(undefined4 *)(iVar3 + 8);
    local_8 = (float)fVar5;
  }
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    local_84 = param_2;
    FUN_0017c020(in_ECX);
    return 1;
  }
  if (bVar1) {
    FUN_0017a270(&local_80);
    return 1;
  }
  FUN_0017a2b0();
  return 1;
}
