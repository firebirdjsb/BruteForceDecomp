/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7AC8D1C967EF0288BBD61A579098478E4B208D3D2919BE4FA21E000E4C50480D
 * Entry: 0x002e5700, Ghidra index: 10476, label: FUN_002e5700
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00386788;
int FUN_002e5700(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  uint uVar4;
  undefined **local_2b8 [6];
  int local_2a0;
  undefined1 local_29c [652];
  int local_10;
  undefined1 local_c;
  undefined4 local_8;
  
  FUN_002e8c40();
  local_2b8[0] = &PTR_FUN_00386788;
  FUN_002e4f30();
  local_8 = 0xffffffff;
  local_c = 0;
  local_2a0 = param_2;
  if (param_2 < 0) {
    iVar2 = FUN_002e7f50(*(undefined4 *)(param_1 + 0xc),local_2b8,1,1);
    if (iVar2 < 0) {
LAB_002e580f:
      FUN_002e4fc0();
      FUN_002e8b80();
      return iVar2;
    }
    iVar2 = FUN_002e7a40(*(undefined4 *)(param_1 + 0xc));
  }
  else {
    local_10 = *(int *)(param_1 + 0x18);
LAB_002e5790:
    cVar1 = *(char *)(in_ECX + 0x19);
    *(char *)(in_ECX + 0x19) = cVar1 + '\x01';
    FUN_002e7710(cVar1);
    iVar2 = *(int *)(in_ECX + 0x24);
    uVar3 = 0;
    if (*(uint *)(iVar2 + 8) != 0) {
      do {
        uVar4 = uVar3;
        if (uVar3 == 0xfffffffa) {
          uVar4 = *(uint *)(iVar2 + 8);
        }
        if ((-1 < (int)uVar4) && (*(int *)(*(int *)(iVar2 + 0x24) + uVar4 * 4) != 0)) {
          uVar4 = uVar3;
          if (uVar3 == 0xfffffffa) {
            uVar4 = *(uint *)(iVar2 + 8);
          }
          if (*(char *)(*(int *)(*(int *)(in_ECX + 0x1c) + uVar4 * 4) + 6) ==
              *(char *)(local_10 + 6)) goto LAB_002e5790;
        }
        uVar3 = uVar3 + 1;
        if (*(uint *)(*(int *)(in_ECX + 0x24) + 8) <= uVar3) break;
      } while( true );
    }
    iVar2 = FUN_002e7a80(*(undefined4 *)(param_1 + 0xc),local_29c);
    if (iVar2 < 0) goto LAB_002e580f;
    FUN_002e4c00(in_ECX + 0x38);
    iVar2 = FUN_002e7f50(0xfffffffc,local_2b8,1,1);
  }
  FUN_002e4fc0();
  FUN_002e8b80();
  return iVar2;
}
